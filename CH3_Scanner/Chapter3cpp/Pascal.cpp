/**
 * <h1>Pascal</h1>
 *
 * <p>Compile or interpret a Pascal source program.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Pascal.h"
#include "wci/frontend/Parser.h"
#include "wci/frontend/Scanner.h"
#include "wci/frontend/Source.h"
#include "wci/frontend/FrontendFactory.h"
#include "wci/frontend/pascal/PascalToken.h"
#include "wci/intermediate/SymTab.h"
#include "wci/intermediate/ICode.h"
#include "wci/backend/Backend.h"
#include "wci/backend/BackendFactory.h"
#include "wci/message/Message.h"
#include "wci/message/MessageListener.h"

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;
using namespace wci::backend;
using namespace wci::message;

const string FLAGS = "[-ix]";
const string USAGE =
    "Usage: Pascal execute|compile " + FLAGS + " <source file path>";

/**
 * The main method.
 * @param args command-line arguments: "compile" or "execute" followed by
 *             optional flags followed by the source file path.
 */
int main(int argc, char *args[])
{
    try
    {
        // Operation.
        string operation = args[1];
        if ((operation != "compile") && (operation != "execute"))
        {
            throw USAGE;
        }

        // Flags.
        string flags = "";
        int i = 1;
        while ((++i < argc) && (args[i][0] == '-'))
        {
            flags += string(args[i]).substr(1);
        }

        // Source path.
        if (i < argc)
        {
            string path = args[i];
            Pascal(operation, path, flags);
        }
        else
        {
            throw string("Missing source file.");
        }
    }
    catch (string& msg)
    {
        cout << "***** ERROR: " << msg << endl;
    }

    return 0;
}

Pascal::Pascal(string operation, string file_path, string flags)
    throw (string)
    : icode(nullptr), symtab(nullptr), backend(nullptr)
{
    ifstream input;
    input.open(file_path);
    if (input.fail())
    {
        throw string("Failed to open source file " + file_path);
    }

    Options::intermediate = flags.find('i') != string::npos;
    Options::xref         = flags.find('x') != string::npos;

    source = new Source(input);
    source->add_message_listener(this);

    parser = FrontendFactory::create_parser("Pascal", "top-down", source);
    parser->add_message_listener(this);
    parser->parse();

    source->close();

    symtab = parser->get_symtab();
    icode = parser->get_icode();

    backend = BackendFactory::create_backend(operation);
    backend->add_message_listener(this);
    backend->process(icode, symtab);
}

Pascal::~Pascal()
{
    if (parser  != nullptr) delete parser;
    if (source  != nullptr) delete source;
    if (icode   != nullptr) delete icode;
    if (symtab  != nullptr) delete symtab;
    if (backend != nullptr) delete backend;
}

const string Pascal::SOURCE_LINE_FORMAT = "%03d %s\n";

const string Pascal::PARSER_SUMMARY_FORMAT =
    string("\n%20s source lines.\n%20d syntax errors.\n") +
    string("%20.2f seconds total parsing time.\n");

const string Pascal::INTERPRETER_SUMMARY_FORMAT =
    string("\n%20s statements executed.\n") +
    string("%20d runtime errors.\n") +
    string("%20.2f seconds total execution time.\n");

const string Pascal::COMPILER_SUMMARY_FORMAT =
    string("\n%20s instructions generated.\n") +
    string("%20.2f seconds total code generation time.\n");

const string Pascal::TOKEN_FORMAT =
    ">>> %-15s line=%03d, pos=%2d, text=\"%s\"\n";

const string Pascal::VALUE_FORMAT =
    ">>>                 value=%s\n";

const int Pascal::PREFIX_WIDTH = 5;

/**
 * Listen for messages.
 * @param message the received message.
 */
void Pascal::message_received(Message& message)
{
    switch (message.type)
    {
        case SOURCE_LINE:
        {
            printf(SOURCE_LINE_FORMAT.c_str(),
                   message.content.source_line.line_number,
                   message.content.source_line.line_text);
            break;
        }

        case PARSER_SUMMARY:
        {
            string line_count = commafy(message.content.parser_summary.line_count);
            int error_count = message.content.parser_summary.error_count;
            double elapsed_time = message.content.parser_summary.elapsed_time;

            printf(PARSER_SUMMARY_FORMAT.c_str(),
                   line_count.c_str(), error_count, elapsed_time);
            break;
        }

        case INTERPRETER_SUMMARY:
        {
            string execution_count =
                    commafy(message.content.interpreter_summary.execution_count);

            printf(INTERPRETER_SUMMARY_FORMAT.c_str(),
                   execution_count.c_str(),
                   message.content.interpreter_summary.runtime_errors,
                   message.content.interpreter_summary.elapsed_time);
            break;
        }

        case COMPILER_SUMMARY:
        {
            string instruction_count =
                    commafy(message.content.compiler_summary.instruction_count);

            printf(COMPILER_SUMMARY_FORMAT.c_str(),
                   instruction_count.c_str(),
                   message.content.compiler_summary.elapsed_time);
            break;
        }

        case TOKEN:
        {
            string token_type = message.content.token.token_type;
            int line_number = message.content.token.line_number;
            int position = message.content.token.position;
            string token_text = message.content.token.token_text;
            string token_value = message.content.token.token_value;

            printf(TOKEN_FORMAT.c_str(),
                   token_type.c_str(), line_number,
                   position, token_text.c_str());

            if (   (token_type == "INTEGER")
                || (token_type == "REAL")
                || (token_type == "STRING"))
            {
                if (token_type == "STRING")
                {
                    token_value = "\"" + token_value + "\"";
                }

                printf(VALUE_FORMAT.c_str(), token_value.c_str());
            }

            break;
        }

        case SYNTAX_ERROR:
        {
            int position         = message.content.syntax_error.position;
            string token_text    = message.content.syntax_error.token_text;
            string error_message = message.content.syntax_error.error_message;
            string flag = "";

            if (position >= 0)
            {
                int space_count = PREFIX_WIDTH + position;

                // Spaces up to the error position.
                for (int i = 1; i < space_count; ++i) flag += " ";

                // A pointer to the error.
                flag += "^\n";
            }

            flag += "*** " + error_message;

            // Text, if any, of the bad token.
            if (strlen(message.content.syntax_error.token_text) > 0)
            {
                flag += " [at \"" + token_text + "\"]\n";
            }

            cout << flag;
            break;
        }

        default: break;
    }
}

string Pascal::commafy(const int value) const
{
    string str = to_string(value);
    int pos = str.length() - 3;

    while (pos > 0)
    {
        str.insert(pos, ",");
        pos -= 3;
    }

    return str;
}

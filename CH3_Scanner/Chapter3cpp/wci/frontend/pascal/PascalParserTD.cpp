/**
 * <h1>PascalParserTD</h1>
 *
 * <p>The top-down Pascal parser.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <chrono>
#include "PascalParserTD.h"

#include "../Scanner.h"
#include "../Source.h"
#include "../Token.h"
#include "PascalToken.h"
#include "PascalError.h"
#include "../../message/Message.h"

namespace wci { namespace frontend { namespace pascal {

using namespace std;
using namespace std::chrono;
using namespace wci::frontend;
using namespace wci::message;

PascalErrorHandler PascalParserTD::error_handler;

PascalParserTD::PascalParserTD(Scanner *scanner) : Parser(scanner)
{
    PascalError::initialize();
}

void PascalParserTD::parse() throw (string)
{
    Token *token = nullptr;
    int last_line_number;
    steady_clock::time_point start_time = steady_clock::now();

    // Loop over each token until the end of file.
    while ((token = next_token(token)) != nullptr)
    {
        TokenType token_type = token->get_type();
        last_line_number = token->get_line_number();

        Object value = token->get_value();
        string type_str;
        string value_str;

        switch ((PascalTokenType) token_type)
        {
            case PT_STRING:
            {
                type_str = "STRING";
                value_str = cast(value, string);
                break;
            }

            case PT_IDENTIFIER:
            {
                type_str = "IDENTIFIER";
                value_str = "";
                break;
            }

            case PT_INTEGER:
            {
                type_str = "INTEGER";
                value_str = to_string(cast(value, int));
                break;
            }

            case PT_REAL:
            {
                type_str = "REAL";
                value_str = to_string(cast(value, float));
                break;
            }

            case PT_ERROR: break;

            default:  // reserved word or special character
            {
                // Reserved word
                if (!value.empty())
                {
                    value_str = cast(value, string);
                    type_str = value_str;
                }

                // Special symbol
                else
                {
                    type_str =
                        PascalToken::SPECIAL_SYMBOL_NAMES[
                                           (PascalTokenType) token_type];
                }

                break;
            }
        }

        if (token_type != (TokenType) PT_ERROR)
        {
            // Format and send a message about each token.
            Message message(TOKEN);
            message.content.token.token_type = type_str.c_str();
            message.content.token.line_number = token->get_line_number();
            message.content.token.position = token->get_position();
            message.content.token.token_text = strdup(token->get_text().c_str());
            message.content.token.token_value = value_str.c_str();
            send_message(message);

            free(const_cast<char *>(message.content.token.token_text));
        }
        else
        {
            PascalErrorCode error_code = (PascalErrorCode) cast(value, int);
            error_handler.flag(token, error_code, this);
        }
    }

    // Send the parser summary message.
    steady_clock::time_point end_time = steady_clock::now();
    double elapsed_time =
            duration_cast<duration<double>>(end_time - start_time).count();
    Message message(PARSER_SUMMARY);
    message.content.parser_summary.line_count = last_line_number;
    message.content.parser_summary.error_count = get_error_count();
    message.content.parser_summary.elapsed_time = elapsed_time;
    send_message(message);
}

}}} // namespace wci::frontend::pascal

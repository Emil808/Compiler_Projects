/**
 * <h1>VariableDeclarationsParser</h1>
 *
 * <p>Parse Pascal variable declarations.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <vector>
#include <set>
#include "VariableDeclarationsParser.h"
#include "DeclarationsParser.h"
#include "TypeSpecificationParser.h"
#include "../../../frontend/Token.h"
#include "../../../frontend/pascal/PascalToken.h"
#include "../../../frontend/pascal/PascalError.h"
#include "../../../intermediate/SymTabEntry.h"
#include "../../../intermediate/symtabimpl/SymTabEntryImpl.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

bool VariableDeclarationsParser::INITIALIZED = false;

EnumSet<PascalTokenType> VariableDeclarationsParser::IDENTIFIER_SET;
EnumSet<PascalTokenType> VariableDeclarationsParser::NEXT_START_SET;

EnumSet<PascalTokenType> VariableDeclarationsParser::IDENTIFIER_START_SET =
{
    PT_IDENTIFIER,
    PT_COMMA,
};

EnumSet<PascalTokenType> VariableDeclarationsParser::IDENTIFIER_FOLLOW_SET;

EnumSet<PascalTokenType> VariableDeclarationsParser::COMMA_SET =
{
    PT_COMMA, PT_COLON, PT_IDENTIFIER, PT_SEMICOLON,
};

EnumSet<PascalTokenType> VariableDeclarationsParser::COLON_SET =
{
    PT_COLON, PT_SEMICOLON,
};

void VariableDeclarationsParser::initialize()
{
    if (INITIALIZED) return;

    DeclarationsParser::initialize();
    IDENTIFIER_SET = DeclarationsParser::VAR_START_SET;
    IDENTIFIER_SET.insert(PT_IDENTIFIER);
    IDENTIFIER_SET.insert(PT_END);
    IDENTIFIER_SET.insert(PT_SEMICOLON);

    NEXT_START_SET = DeclarationsParser::ROUTINE_START_SET;
    NEXT_START_SET.insert(PT_IDENTIFIER);
    NEXT_START_SET.insert(PT_SEMICOLON);

    IDENTIFIER_FOLLOW_SET = DeclarationsParser::VAR_START_SET;
    IDENTIFIER_FOLLOW_SET.insert(PT_COLON);
    IDENTIFIER_FOLLOW_SET.insert(PT_SEMICOLON);

    INITIALIZED = true;
}

VariableDeclarationsParser::VariableDeclarationsParser(PascalParserTD *parent)
    : DeclarationsParser(parent)
{
    initialize();
}

void VariableDeclarationsParser::parse_declaration(Token *token)
    throw (string)
{
    token = synchronize(IDENTIFIER_SET);

    // Loop to parse a sequence of variable declarations
    // separated by semicolons.
    while (token->get_type() == (TokenType) PT_IDENTIFIER)
    {
        // Parse the identifier sublist and its type specification.
        parse_identifier_sublist(token, IDENTIFIER_FOLLOW_SET, COMMA_SET);

        token = current_token();
        TokenType tokenType = token->get_type();

        // Look for one or more semicolons after a definition.
        if (token->get_type() == (TokenType) PT_SEMICOLON)
        {
            while (token->get_type() == (TokenType) PT_SEMICOLON)
            {
                token = next_token(token);  // consume the ;
            }
        }

        // If at the start of the next definition or declaration,
        // then missing a semicolon.
        else if (NEXT_START_SET.find((PascalTokenType) tokenType)
                    != NEXT_START_SET.end())
        {
            error_handler.flag(token, MISSING_SEMICOLON, this);
        }

        token = synchronize(IDENTIFIER_SET);
    }
}

vector<SymTabEntry *>
    VariableDeclarationsParser::parse_identifier_sublist(
                                        Token *token,
                                        EnumSet<PascalTokenType>& follow_set,
                                        EnumSet<PascalTokenType>& comma_set)
        throw (string)
{
    vector<SymTabEntry *> sublist;

    do {
        token = synchronize(IDENTIFIER_START_SET);
        SymTabEntry *id = parse_identifier(token);

        if (id != nullptr) sublist.push_back(id);

        token = synchronize(comma_set);

        // Look for the comma.
        if (token->get_type() == (TokenType) PT_COMMA)
        {
            token = next_token(token);  // consume the comma

            if (follow_set.find((PascalTokenType) token->get_type())
                    != follow_set.end())
            {
                error_handler.flag(token, MISSING_IDENTIFIER, this);
            }
        }
        else if (IDENTIFIER_START_SET.find((PascalTokenType) token->get_type())
                    != IDENTIFIER_START_SET.end())
        {
            error_handler.flag(token, MISSING_COMMA, this);
        }
    } while (follow_set.find((PascalTokenType) token->get_type())
                == follow_set.end());

    if (definition != (Definition) DF_PROGRAM_PARM)
    {
        // Parse the type specification.
        TypeSpec *typespec = parse_typespec(token);

        // Assign the type specification to each identifier in the list.
        for (SymTabEntry *variable_id : sublist)
        {
            variable_id->set_typespec(typespec);
        }
    }

    return sublist;
}

SymTabEntry *VariableDeclarationsParser::parse_identifier(Token *token)
    throw (string)
{
    SymTabEntry *id = nullptr;

    if (token->get_type() == (TokenType) PT_IDENTIFIER)
    {
        string name = to_lower(token->get_text());
        id = symtab_stack->lookup_local(name);

        // Enter a new identifier into the symbol table.
        if (id == nullptr)
        {
            id = symtab_stack->enter_local(name);
            id->set_definition(definition);
            id->append_line_number(token->get_line_number());
        }
        else
        {
            error_handler.flag(token, IDENTIFIER_REDEFINED, this);
        }

        token = next_token(token);   // consume the identifier token
    }
    else
    {
        error_handler.flag(token, MISSING_IDENTIFIER, this);
    }

    return id;
}

TypeSpec *VariableDeclarationsParser::parse_typespec(Token *token)
    throw (string)
{
    // Synchronize on the : token.
    token = synchronize(COLON_SET);
    if (token->get_type() == (TokenType) PT_COLON)
    {
        token = next_token(token); // consume the :
    }
    else {
        error_handler.flag(token, MISSING_COLON, this);
    }

    // Parse the type specification.
    TypeSpecificationParser type_specification_parser(this);
    TypeSpec *typespec = type_specification_parser.parse_declaration(token);

    return typespec;
}

}}}}  // namespace wci::frontend::pascal::parsers

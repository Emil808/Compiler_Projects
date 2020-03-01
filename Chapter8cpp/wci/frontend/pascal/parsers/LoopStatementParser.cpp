/**
 * <h1>RepeatStatementParser</h1>
 *
 * <p>Parse a Pascal REPEAT statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "LoopStatementParser.h"
#include "WhenStatementParser.h"
#include "StatementParser.h"
#include "ExpressionParser.h"
#include "../PascalParserTD.h"
#include "../PascalToken.h"
#include "../PascalError.h"
#include "../../Token.h"
#include "../../../intermediate/ICodeNode.h"
#include "../../../intermediate/ICodeFactory.h"
#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

bool LoopStatementParser::INITIALIZED = false;

EnumSet<PascalTokenType> LoopStatementParser::LOOP_SET;

void LoopStatementParser::initialize()
{
    if (INITIALIZED) return;

    LOOP_SET = StatementParser::STMT_START_SET;
    LOOP_SET.insert(PascalTokenType::WHEN);

    EnumSet<PascalTokenType>::iterator it;
    for (it  = StatementParser::STMT_FOLLOW_SET.begin();
         it != StatementParser::STMT_FOLLOW_SET.end();
         it++)
    {
    	LOOP_SET.insert(*it);
    }

    INITIALIZED = true;
}

ICodeNode *LoopStatementParser::parse_statement(Token *token)
    throw (string)
{
    EnumSet<PascalTokenType> terminator_set(LOOP_SET);

    // Create LOOP node.
    ICodeNode *loop_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_LOOP);
    WhenStatementParser when_parser(this);



    token = next_token(token);  // consume the LOOP

    //parse the body
    // Stop when reach end of file or when reached AGAIN token
    while ((token != nullptr) &&
               (token->get_type() != (TokenType) PT_AGAIN))
    {
    	if((PascalTokenType) token->get_type() == PT_WHEN){
    		//parse WHEN statement


            loop_node->add_child(when_parser.parse_statement(token, true));
    	}
    	else{
    		// Parse Statement
    		StatementParser statement_parser(this);
    		loop_node->add_child(statement_parser.parse_statement(token));
    	}

    	token = current_token(); // refresh token
    	TokenType token_type = token->get_type();

    	// Look for the semicolon between statements.
    	if (token_type == (TokenType) PT_SEMICOLON)
    	{
    		token = next_token(token);  // consume the ;
    	}
    	else
    	{
    		error_handler.flag(token, MISSING_SEMICOLON, this);
    		token = synchronize(terminator_set);
    	}

    }

    //error handling if AGAIN token is missing but reached end of file
    if (token->get_type() == (TokenType) PT_AGAIN)
        {
            token = next_token(token);  // consume AGAIN
        }
        else
        {
            error_handler.flag(token, MISSING_AGAIN, this);
        }//todo :handle moving on from missing again?

    return loop_node;
}

}}}}  // namespace wci::frontend::pascal::parsers

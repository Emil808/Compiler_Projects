/**
 * <h1>RepeatStatementParser</h1>
 *
 * <p>Parse a Pascal REPEAT statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <set>
#include "RepeatStatementParser.h"
#include "LoopStatementParser.h"
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

EnumSet<PascalTokenType> LoopStatementParser::Arrow_SET;

void LoopStatementParser::initialize()
{
    if (INITIALIZED) return;

    Arrow_SET = StatementParser::STMT_START_SET;
    Arrow_SET.insert(PascalTokenType::EXIT_ARROW);
    Arrow_SET.insert(PascalTokenType::AGAIN);

    EnumSet<PascalTokenType>::iterator it;
    for (it  = StatementParser::STMT_FOLLOW_SET.begin();
         it != StatementParser::STMT_FOLLOW_SET.end();
         it++)
    {
    	Arrow_SET.insert(*it);
    }

    INITIALIZED = true;
}

LoopStatementParser::LoopStatementParser(PascalParserTD *parent)
    : StatementParser(parent)
{
    initialize();
}

ICodeNode *LoopStatementParser::parse_statement(Token *token)
    throw (string)
{
	token = next_token(token);  // consume the LOOP token
    // Create the LOOP, TEST,WHEN nodes.

    ICodeNode *loop_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_LOOP);
   // ICodeNode *test_node =
          //  ICodeFactory::create_icode_node((ICodeNodeType) NT_TEST);

    //while(current_token()!=
    // Parse the statement list terminated by the UNTIL token.
    // The LOOP node is the parent of the statement subtrees.

   // StatementParser statement_parser(this);//declare inside?
   // ExpressionParser expression_parser(this);
	StatementParser statement_parser(this);

    TokenType direction;

    while (   (token != nullptr) && (token->get_type() != (TokenType) PT_AGAIN)){
    	direction=token->get_type();
    	if (direction == (TokenType) PT_WHEN){ //doesn't realize that WHEN is indenified
    		//try to do this outside
    		ICodeNode *test_node = ICodeFactory::create_icode_node((ICodeNodeType) NT_TEST);

    		token= next_token(token);//consume WHEN and add test to child

    		ExpressionParser expression_parser(this);

    		loop_node->add_child(test_node);
    		test_node->add_child(expression_parser.parse_statement(token));
    		direction=token->get_type();// delete later
    		token = synchronize(Arrow_SET);
    		if (token->get_type() == (TokenType) PT_EXIT_ARROW)
    		{
    		    token = next_token(token);  // consume the EXIT_ARROW
    		    //token = next_token(token); //CONSUME SEMI COLON
    		}
    		else {
    		     error_handler.flag(token, MISSING_EXIT_ARROW, this);
    		     token = next_token(token);
    		}
    	}
    	else { //// The LOOP node adopts the statement subtree as its second child.
    		loop_node->add_child(statement_parser.parse_statement(token));//maybe declare object?
    		token = next_token(token);// consume semi colan?
    	}

    }
    			token = synchronize(Arrow_SET);
        		if (token->get_type() == (TokenType) PT_AGAIN)
        		{
        		    token = next_token(token);  // consume AGAIN

        		}
        		else if (token != nullptr){
        		     error_handler.flag(token, MISSING_AGAIN, this);
        		     token = next_token(token);
        		}


    /*statement_parser.parse_list(token, loop_node, PT_WHEN, MISSING_WHEN);

    token = current_token();

    // Parse the expression.
    // The TEST node adopts the expression subtree as its only child.
    // The LOOP node adopts the TEST node.
    ExpressionParser expression_parser(this);
    test_node->add_child(expression_parser.parse_statement(token));
    loop_node->add_child(test_node);*/

    return loop_node;
}

}}}}  // namespace wci::frontend::pascal::parsers

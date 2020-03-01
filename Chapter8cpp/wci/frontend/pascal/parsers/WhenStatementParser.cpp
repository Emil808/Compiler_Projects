
#include <string>
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

bool WhenStatementParser::INITIALIZED = false;

EnumSet<PascalTokenType> WhenStatementParser::WHEN_SET;

void WhenStatementParser::initialize()
{
    if (INITIALIZED) return;

    WHEN_SET = StatementParser::STMT_START_SET;

    EnumSet<PascalTokenType>::iterator it;
    for (it  = StatementParser::STMT_FOLLOW_SET.begin();
         it != StatementParser::STMT_FOLLOW_SET.end();
         it++)
    {
    	WHEN_SET.insert(*it);
    }

    INITIALIZED = true;
}
ICodeNode *WhenStatementParser::parse_statement(Token *token ,bool inLoop) //todo: optimize this method so it is not repetative
    throw (string)
{
    EnumSet<PascalTokenType> terminator_set(WHEN_SET);

	ICodeNode *test_node =
	            ICodeFactory::create_icode_node((ICodeNodeType) NT_TEST);
	// parse the when node if it is in a loop-again statement
	if(inLoop){
	// Create Test Node


    token = next_token(token);  // consume the WHEN

    // Parse the expression.
    // The TEST node adopts the expression subtree as its only child.
    ExpressionParser expression_parser(this);
    test_node->add_child(expression_parser.parse_statement(token));

    if (token->get_type() == (TokenType) PT_EXIT_ARROW)
    {
    	token = next_token(token);  // consume EXIT_ARROW
    }
    else
    {
    	error_handler.flag(token, MISSING_EXIT_ARROW, this);
    }

	}

	// found when outside of loop-again statement
	else{

    	error_handler.flag(token, UNEXPECTED_WHEN, this);
    	test_node = ICodeFactory::create_icode_node((ICodeNodeType) NT_NO_OP);

    	token = next_token(token); //consume WHEN token
    	ExpressionParser expression_parser(this);
    	test_node->add_child(expression_parser.parse_statement(token));

    	if (token->get_type() == (TokenType) PT_EXIT_ARROW)
    	    {
    	    	token = next_token(token);  // consume EXIT_ARROW
    	    }
    	    else
    	    {
    	    	error_handler.flag(token, MISSING_EXIT_ARROW, this);
    	    }
    	token = synchronize(terminator_set);
	}
	return test_node;
}

}}}}  // namespace wci::frontend::pascal::parsers


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
ICodeNode *WhenStatementParser::parse_statement(Token *token)
    throw (string)
{
	// Create Test Node
    ICodeNode *test_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_TEST);

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



    return test_node;
}

}}}}  // namespace wci::frontend::pascal::parsers

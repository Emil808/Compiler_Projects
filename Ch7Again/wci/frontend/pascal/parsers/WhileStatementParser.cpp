/**
 * <h1>WhileStatementParser</h1>
 *
 * <p>Parse a Pascal WHILE statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <set>
#include "WhileStatementParser.h"
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

bool WhileStatementParser::INITIALIZED = false;

EnumSet<PascalTokenType> WhileStatementParser::DO_SET;

void WhileStatementParser::initialize()
{
    if (INITIALIZED) return;

    DO_SET = StatementParser::STMT_START_SET;
    DO_SET.insert(PascalTokenType::DO);

    EnumSet<PascalTokenType>::iterator it;
    for (it  = StatementParser::STMT_FOLLOW_SET.begin();
         it != StatementParser::STMT_FOLLOW_SET.end();
         it++)
    {
        DO_SET.insert(*it);
    }

    INITIALIZED = true;
}

WhileStatementParser::WhileStatementParser(PascalParserTD *parent)
    : StatementParser(parent)
{
    initialize();
}

ICodeNode *WhileStatementParser::parse_statement(Token *token) throw (string)
{
    token = next_token(token);  // consume the WHILE

    // Create LOOP, TEST, and NOT nodes.
    ICodeNode *loop_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_LOOP);
    ICodeNode *test_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_TEST);
    ICodeNode *not_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_NOT);

    // The LOOP node adopts the TEST node as its first child.
    // The TEST node adopts the NOT node as its only child.
    loop_node->add_child(test_node);
    test_node->add_child(not_node);

    // Parse the expression.
    // The NOT node adopts the expression subtree as its only child.
    ExpressionParser expression_parser(this);
    not_node->add_child(expression_parser.parse_statement(token));

    // Synchronize at the DO.
    token = synchronize(DO_SET);
    if (token->get_type() == (TokenType) PT_DO)
    {
        token = next_token(token);  // consume the DO
    }
    else {
        error_handler.flag(token, MISSING_DO, this);
    }

    // Parse the statement.
    // The LOOP node adopts the statement subtree as its second child.
    StatementParser statement_parser(this);
    loop_node->add_child(statement_parser.parse_statement(token));

    return loop_node;
}

}}}}  // namespace wci::frontend::pascal::parsers

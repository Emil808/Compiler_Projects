/*
 * LoopStatementParser.h
 *
 *  Created on: Feb 19, 2020
 *      Author: abhi
 */

#ifndef WCI_FRONTEND_PASCAL_PARSERS_LOOPSTATEMENTPARSER_H_
#define WCI_FRONTEND_PASCAL_PARSERS_LOOPSTATEMENTPARSER_H_

#include <string>
#include <set>
#include "StatementParser.h"
#include "../../Token.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;

class LoopStatementParser : public StatementParser
{
public:
    /**
     * Constructor.
     * @param parent the parent parser.
     */
	LoopStatementParser(PascalParserTD *parent);

    /**
     * Parse a REPEAT statement.
     * @param token the initial token.
     * @return the root node of the generated parse tree.
     * @throw a string message if an error occurred.
     */
    ICodeNode *parse_statement(Token *token) throw (string);

private:
    // Synchronization set for DO.
    static EnumSet<PascalTokenType> Arrow_SET;
    static bool INITIALIZED;

    /**
     * Initialize the synchronization set.
     */
    static void initialize();
};


}}}}  // namespace wci::frontend::pascal::parsers

#endif /* WCI_FRONTEND_PASCAL_PARSERS_LOOPSTATEMENTPARSER_H_ */

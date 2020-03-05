#ifndef LOOPSTATEMENTPARSER_H_
#define LOOPSTATEMENTPARSER_H_

#include <string>
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
    LoopStatementParser(PascalParserTD *parent) : StatementParser(parent) {
    	initialize();
    }

    /**
     * Parse a REPEAT statement.
     * @param token the initial token.
     * @return the root node of the generated parse tree.
     * @throw a string message if an error occurred.
     */
    ICodeNode *parse_statement(Token *token) throw (string);

private:
    // Synchronization set for DO.
    static EnumSet<PascalTokenType> LOOP_SET;

    static bool INITIALIZED;

    /**
    * Initialize the synchronization set.
    */
    static void initialize();
};

}}}}  // namespace wci::frontend::pascal::parsers

#endif /* LOOPSTATEMENTPARSER_H_ */

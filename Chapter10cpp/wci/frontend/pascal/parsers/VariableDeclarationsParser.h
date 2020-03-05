/**
 * <h1>VariableDeclarationsParser</h1>
 *
 * <p>Parse Pascal variable declarations.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef VARIABLEDECLARATIONSPARSER_H_
#define VARIABLEDECLARATIONSPARSER_H_

#include <set>
#include "DeclarationsParser.h"
#include "../../../intermediate/SymTabEntry.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;

class VariableDeclarationsParser : public DeclarationsParser
{
public:
    /**
     * Constructor.
     * @param parent the parent parser.
     */
    VariableDeclarationsParser(PascalParserTD *parent);

    /**
     * Setter.
     * @param definition the definition to set.
     */
    void set_definition(const Definition defn) { definition = defn; }

    /**
     * Parse a type definition.
     * @param token the initial token.
     * @throw a string message if an error occurred.
     */
    void parse_declaration(Token *token) throw (string);

    /**
     * Parse a sublist of identifiers and their type specification.
     * @param token the current token.
     * @return the sublist of identifiers in a declaration.
     * @throw a string message if an error occurred.
     */
    vector<SymTabEntry *> parse_identifier_sublist(
                                        Token *token,
                                        EnumSet<PascalTokenType>& follow_set,
                                        EnumSet<PascalTokenType>& comma_set)
        throw (string);

    /**
     * Parse the type specification.
     * @param token the current token.
     * @return the type specification.
     * @throw a string message if an error occurred.
     */
    TypeSpec *parse_typespec(Token *token) throw (string);

    // Synchronization set for a variable identifier.
    static EnumSet<PascalTokenType> IDENTIFIER_SET;

    // Synchronization set for the start of the next definition or declaration.
    static EnumSet<PascalTokenType> NEXT_START_SET;

    // Synchronization set to start a sublist identifier.
    static EnumSet<PascalTokenType> IDENTIFIER_START_SET;

    // Synchronization set for what follows a definition or declaration.
    static EnumSet<PascalTokenType> IDENTIFIER_FOLLOW_SET;

    // Synchronization set for the , token.
    static EnumSet<PascalTokenType> COMMA_SET;

    // Synchronization set for the : token.
    static EnumSet<PascalTokenType> COLON_SET;

    /**
     * Initialize the synchronization set.
     */
    static void initialize();

private:
    static bool INITIALIZED;

    Definition definition;  // how to define the identifier

    /**
     * Parse an identifier.
     * @param token the current token.
     * @return the symbol table entry of the identifier.
     * @throw a string message if an error occurred.
     */
    SymTabEntry *parse_identifier(Token *token) throw (string);
};

}}}}  // namespace wci::frontend::pascal::parsers

#endif /* VARIABLEDECLARATIONSPARSER_H_ */

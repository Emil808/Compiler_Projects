#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

const bool DEBUG_1 = false;

Pass1Visitor::Pass1Visitor()
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    if (DEBUG_1) cout << "=== Pass 1: Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {};

antlrcpp::Any Pass1Visitor::visitProgram(perlParser::ProgramContext *ctx){
	auto value = visitChildren(ctx);

	CrossReferencer cross_referencer;
	cross_referencer.print(symtab_stack);

	return value;
}


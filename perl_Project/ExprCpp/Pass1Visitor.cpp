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

const bool DEBUG_1 = true;

Pass1Visitor::Pass1Visitor()
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    if (DEBUG_1) cout << "=== Pass 1: Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {};

antlrcpp::Any Pass1Visitor::visitProgram(perlParser::ProgramContext *ctx){


	string program_name = "perl_Program";

	SymTabEntry *program_id = symtab_stack->enter_local(program_name);
	program_id->set_definition((Definition)DF_PROGRAM);
	program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
	                              symtab_stack->push());
	symtab_stack->set_program_id(program_id);

	auto value = visitChildren(ctx);

	CrossReferencer cross_referencer;
	cross_referencer.print(symtab_stack);

	return value;
}

antlrcpp::Any Pass1Visitor::visitAssignment_stmt(perlParser::Assignment_stmtContext *ctx){

	string variable_name = ctx->variable()->IDENTIFIER()->toString();
	SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
	variable_id->set_definition((Definition) DF_VARIABLE);

	variable_id_list.push_back(variable_id);
	//variable_ctx_list.push_back(ctx);

	return visitChildren(ctx);

}

antlrcpp::Any Pass1Visitor::visitVariableExpr(perlParser::VariableExprContext *ctx){

	 string variable_name = ctx->variable()->IDENTIFIER()->toString();
	 SymTabEntry *variable_id = symtab_stack->lookup(variable_name);
	 ctx->type = variable_id->get_typespec();
	 return visitChildren(ctx);


}

antlrcpp::Any Pass1Visitor::visitINTConst(perlParser::INTConstContext *ctx){

	 ctx->type = Predefined::integer_type;
	 return visitChildren(ctx);

}

antlrcpp::Any Pass1Visitor::visitFloatConst(perlParser::FloatConstContext *ctx){

	ctx->type = Predefined::real_type;
	return visitChildren(ctx);
}


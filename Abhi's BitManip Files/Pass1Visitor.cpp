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

antlrcpp::Any Pass1Visitor::visitVariable_delcaration(perlParser::Variable_delcarationContext *ctx){
	string variable_name = ctx->variable()->IDENTIFIER()->toString();
	string type = ctx->TYPEID()->toString();
	SymTabEntry *variable_id = symtab_stack->lookup(variable_name);


	TypeSpec *type_spec;
	if(type == "i") {
		type_spec = Predefined::integer_type;
	}
	else if(type == "f"){
		type_spec = Predefined::real_type;
	}
	else if (type == "b"){
		type_spec = Predefined::boolean_type;

	}
	else{
		type_spec = nullptr;
	}


		variable_id = symtab_stack->enter_local(variable_name);

		auto value = visitChildren(ctx);
		variable_id->set_definition((Definition) DF_VARIABLE);

		variable_id->set_typespec(type_spec);

		variable_id_list.push_back(variable_id);

	return visitChildren(ctx);

}

antlrcpp::Any Pass1Visitor::visitVariableExpr(perlParser::VariableExprContext *ctx){

	 string variable_name = ctx->variable()->IDENTIFIER()->toString();
	 SymTabEntry *variable_id = symtab_stack->lookup(variable_name);
	 std::cout << variable_id->get_name() << endl;
	 ctx->type = variable_id->get_typespec();
	 return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitUnsignednumExpr(perlParser::UnsignednumExprContext *ctx){

	 auto value = visit(ctx->number());
	 ctx->type = ctx->number()->type;
	 return value;
}

antlrcpp::Any Pass1Visitor::visitSignednumExpr(perlParser::SignednumExprContext *ctx){
	 auto value = visit(ctx->signed_number());
	 ctx->type = ctx->signed_number()->number()->type;

	 return value;
}

antlrcpp::Any Pass1Visitor::visitPowerExpr(perlParser::PowerExprContext *ctx){
	auto value = visitChildren(ctx);
	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
	bool real_mode    =    (type1 == Predefined::real_type)
	                        && (type2 == Predefined::real_type);

	TypeSpec *type = integer_mode ? Predefined::integer_type
	               : real_mode    ? Predefined::real_type
	               :                nullptr;
	ctx->type = type;

	return value;
}


antlrcpp::Any Pass1Visitor::visitMuldivExpr(perlParser::MuldivExprContext *ctx){

	auto value = visitChildren(ctx);
    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitShiftExpr(perlParser::ShiftExprContext *ctx){
	auto value = visitChildren(ctx);
	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
	bool real_mode    =    (type1 == Predefined::real_type)
	                        && (type2 == Predefined::real_type);

	    TypeSpec *type = integer_mode ? Predefined::integer_type
	                   : real_mode    ? Predefined::real_type
	                   :                nullptr;
	    ctx->type = type;
	    return value;
}

antlrcpp::Any Pass1Visitor::visitBitopExpr(perlParser::Bit_opContext *ctx){
	auto value = visitChildren(ctx);
	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
	bool real_mode    =    (type1 == Predefined::real_type)
	                        && (type2 == Predefined::real_type);

	    TypeSpec *type = integer_mode ? Predefined::integer_type
	                   : real_mode    ? Predefined::real_type
	                   :                nullptr;
	    ctx->type = type;
	    return value;
}


/*antlrcpp::Any visitShiftExpr(perlParser::ShiftopExprContext *ctx) {
	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
	bool real_mode    =    (type1 == Predefined::real_type)
	                        && (type2 == Predefined::real_type);

	TypeSpec *type = integer_mode ? Predefined::integer_type
	                   : real_mode    ? Predefined::real_type
	                   :                nullptr;
	ctx->type = type;

    return value;
}*/



antlrcpp::Any Pass1Visitor::visitAddsubExpr(perlParser::AddsubExprContext *ctx){

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitRelopExpr(perlParser::RelopExprContext *ctx){

	auto value = visitChildren(ctx);


    TypeSpec *type = Predefined::boolean_type;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitParenthExpr(perlParser::ParenthExprContext *ctx){

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}
antlrcpp::Any Pass1Visitor::visitINTConst(perlParser::INTConstContext *ctx){

	 ctx->type = Predefined::integer_type;
	 return visitChildren(ctx);

}

antlrcpp::Any Pass1Visitor::visitFloatConst(perlParser::FloatConstContext *ctx){

	ctx->type = Predefined::real_type;
	return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitBOOLConst(perlParser::BOOLConstContext *ctx){
	ctx->type = Predefined::boolean_type;
	return visitChildren(ctx);
}


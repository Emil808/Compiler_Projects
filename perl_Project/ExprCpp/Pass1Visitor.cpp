#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;
using namespace wci::intermediate::icodeimpl;

const bool DEBUG_1 = true;

bool in_method;
int slot_number;
string method_name;
string program_name = "sampleProgram";

Pass1Visitor::Pass1Visitor()
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    if (DEBUG_1) cout << "=== Pass 1: Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {};

antlrcpp::Any Pass1Visitor::visitProgram(perlParser::ProgramContext *ctx){




	SymTabEntry *program_id = symtab_stack->enter_local(program_name);
	program_id->set_definition((Definition)DF_PROGRAM);
	program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
	                              symtab_stack->push());
	symtab_stack->set_program_id(program_id);

	in_method = false;
	slot_number = -1;

	auto value = visitChildren(ctx);

	CrossReferencer cross_referencer;
	cross_referencer.print(symtab_stack);

	return symtab_stack;
}

antlrcpp::Any Pass1Visitor::visitVariable_delcaration(perlParser::Variable_delcarationContext *ctx){
	string variable_name = ctx->variable()->IDENTIFIER()->toString();
	string type = ctx->TYPEID()->toString();

	SymTabEntry *variable_id = symtab_stack->lookup(variable_name);

	//problem:duplicate names

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

		if(in_method){
			variable_name = method_name + "/" + variable_name;
		}

		variable_id = symtab_stack->enter_local(variable_name);

		if(in_method){
			variable_id->set_slot(slot_number++);
		}
		else{
			variable_id->set_slot(-1);
		}
		auto value = visitChildren(ctx);
		variable_id->set_definition((Definition) DF_VARIABLE);

		variable_id->set_typespec(type_spec);

		variable_id_list.push_back(variable_id);

	return visitChildren(ctx);

}
antlrcpp::Any Pass1Visitor::visitFunction(perlParser::FunctionContext *ctx){

	in_method = true;
	slot_number = 0;
	method_name = ctx->IDENTIFIER()->toString();

	SymTabEntry *variable_id = symtab_stack->lookup(method_name);

	variable_id = symtab_stack->enter_local(method_name);

	variable_id->set_definition((Definition) DF_FUNCTION);
	TypeSpec *type_spec;



	variable_id_list.push_back(variable_id);

	string method_signature = method_name;

	auto value = visitChildren(ctx);

	int param_amount = ctx->parameters()->variable_delcaration().size();

	string type_id;
	method_signature = program_name + "/" + method_name + "(";
	for(int i = 0; i < param_amount; i++){

		type_id = ctx->parameters()->variable_delcaration(i)->TYPEID()->toString();
		type_id = (type_id == "i") ? "I"
	            : (type_id == "f") ? "F"
	            : (type_id == "b") ? "I"
	            : "?";
		method_signature.append(type_id);
	}
	method_signature.append(")");

	type_id = ctx->TYPEID()->toString();

	type_spec = (type_id == "i") ? Predefined::integer_type
			  : (type_id == "f") ? Predefined::real_type
 			  : (type_id == "b") ? Predefined::boolean_type
 			  : Predefined::undefined_type;
	type_id = (type_id == "i") ? "I"
				: (type_id == "f") ? "F"
			    : (type_id == "b") ? "I"
			    : "?";

	variable_id->set_typespec(type_spec);
	method_signature.append(type_id);

	variable_id->set_attribute((SymTabKey) ROUTINE_SIGNATURE, method_signature);

	in_method = false;
	variable_id->set_slot(slot_number);
	ctx->locals_var = slot_number + 1;

	ctx->stack_var = 16; // todo: how to calculate for minimum needed stack size
	slot_number = -1;
	return value;
}

antlrcpp::Any Pass1Visitor::visitProcedure(perlParser::ProcedureContext *ctx){

	in_method = true;
	slot_number = 0;
	method_name = ctx->IDENTIFIER()->toString();

	SymTabEntry *variable_id = symtab_stack->lookup(method_name);

	variable_id = symtab_stack->enter_local(method_name);

	variable_id->set_definition((Definition) DF_PROCEDURE);

	variable_id_list.push_back(variable_id);

	string method_signature = method_name;

	auto value = visitChildren(ctx);

	int param_amount = ctx->parameters()->variable_delcaration().size();

	string type_id;
	method_signature = program_name + "/" + method_name + "(";
	for(int i = 0; i < param_amount; i++){

		type_id = ctx->parameters()->variable_delcaration(i)->TYPEID()->toString();
		type_id = (type_id == "i") ? "I"
	            : (type_id == "f") ? "F"
	            : (type_id == "b") ? "I"
	            : "?";
		method_signature.append(type_id);
	}
	method_signature.append(")V");

	variable_id->set_attribute((SymTabKey) ROUTINE_SIGNATURE, method_signature);

	in_method = false;
	variable_id->set_slot(slot_number);
	ctx->locals_var = slot_number;

	ctx->stack_var = 16; // todo: how to calculate used stack size
	slot_number = -1;
	return value;

}
antlrcpp::Any Pass1Visitor::visitParameters(perlParser::ParametersContext *ctx){

	auto value = visitChildren(ctx);

	return value;

}

antlrcpp::Any Pass1Visitor::visitVariableExpr(perlParser::VariableExprContext *ctx){

	 string variable_name = ctx->variable()->IDENTIFIER()->toString();
	 if(in_method){
		 variable_name = method_name + "/" + variable_name;
	 }
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

antlrcpp::Any Pass1Visitor::visitBitopExpr(perlParser::BitopExprContext *ctx){
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

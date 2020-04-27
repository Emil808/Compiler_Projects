#include <iostream>
#include <string>
#include <unordered_map>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace std;
const bool DEBUG_2 = false;

Pass2Visitor::Pass2Visitor()
    : program_name(""), j_file(nullptr)
{
	label_counter = 0;
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(perlParser::ProgramContext *ctx)
{
	//for now name will be sample
	program_name = "sampleProgram";
	j_file_name = program_name + ".j";
	j_file.open(j_file_name);
	if (j_file.fail())
	{
	    cout << "***** Cannot open assembly file." << endl;
	    exit(-99);
	}
	j_file << ".class public " << program_name << endl;
	j_file << ".super java/lang/Object" << endl;
	// Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    //visit declarations
    visit(ctx->declarations());
    j_file << endl;

    // Emit the class constructor.
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;
    j_file << endl;

    // Emit the main program header and prologue.
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic\t" << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic\t" + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    // Emit code for the main program's compound statement.
    visit(ctx->compound_stmt());

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;


    j_file.close();

    if (DEBUG_2) cout << "=== Pass 2: visitProgram: closed " + j_file_name << endl;
    return nullptr;

}
antlrcpp::Any Pass2Visitor::visitVariable_delcaration(perlParser::Variable_delcarationContext *ctx){

    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    string type = ctx->TYPEID()->toString();

    // Emit a field declaration.
    string type_indicator = (type == "i") ? "I"
                          : (type == "f")    ? "F"
                          : (type == "b") ? "I"
                          :                                      "?";
    j_file << ".field private static "
           << variable_name << " " << type_indicator << endl;

    return visitChildren(ctx);

}
antlrcpp::Any Pass2Visitor::visitStmt(perlParser::StmtContext *ctx){

    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAssignment_stmt(perlParser::Assignment_stmtContext *ctx){

    auto value = visit(ctx->expr());

    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    string type_indicator =
                      (ctx->expr()->type == Predefined::integer_type) ? "I"
                    : (ctx->expr()->type == Predefined::real_type)    ? "F"
                    : (ctx->expr()->type == Predefined::boolean_type) ? "I"
                    : "?";


    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << variable_name
           << " " << type_indicator << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitVariableExpr(perlParser::VariableExprContext *ctx){

    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    TypeSpec *type = ctx->type;

    string type_indicator = (type == Predefined::integer_type) ? "I"
                          : (type == Predefined::real_type)    ? "F"
                          : (type == Predefined::boolean_type) ? "Z"
                          :                                      "?";

    // Emit a field get instruction.
    j_file << "\tgetstatic\t" << program_name
           << "/" << variable_name << " " << type_indicator << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitSigned_number(perlParser::Signed_numberContext *ctx){
    auto value = visitChildren(ctx);
    TypeSpec *type = ctx->number()->type;

    if (ctx->sign()->children[0] == ctx->sign()->SUB_OP())
    {
        string opcode = (type == Predefined::integer_type) ? "ineg"
                      : (type == Predefined::real_type)    ? "fneg"
                      :                                      "?neg";

        // Emit a negate instruction.
        j_file << "\t" << opcode << endl;
    }

    return value;
}

antlrcpp::Any Pass2Visitor::visitINTConst(perlParser::INTConstContext *ctx)
{
    if (DEBUG_2) cout << "=== Pass 2: visitIntegerConst" << endl;

    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitFloatConst(perlParser::FloatConstContext *ctx)
{
    if (DEBUG_2) cout << "=== Pass 2: visitFloatConst" << endl;

    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitBOOLConst(perlParser::BOOLConstContext *ctx)
{
    if (DEBUG_2) cout << "=== Pass 2: visitBoolConst" << endl;

    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitWhile_stmt(perlParser::While_stmtContext *ctx){

	string loop_label, exit_label;

	loop_label = "L"+ std::to_string(label_counter++);

	exit_label = "L"+ std::to_string(label_counter++);

	j_file << loop_label << ":" << endl;

	auto value = visit(ctx->expr());

	j_file << "\tifle " << exit_label << endl;

	value = visit(ctx->compound_stmt());

	j_file << "\tgoto " << loop_label << endl
		   << exit_label<< ":" << endl;

	return value;

}

antlrcpp::Any Pass2Visitor::visitIf_stmt(perlParser::If_stmtContext *ctx){

	string else_label, exit_label;

	else_label = "L"+ std::to_string(label_counter++);

	exit_label = "L"+ std::to_string(label_counter++);

	auto value = visit(ctx->expr());

	if(ctx->ELSE()){
		j_file << "\tifle " << else_label << endl;

		value = visit(ctx->compound_stmt(0));

		j_file << "\tgoto " << exit_label << endl;


		j_file << else_label << ":" << endl;
		value = visit(ctx->compound_stmt(1));
	}
	else{
		j_file << "\tifle " << exit_label << endl;
		value = visit(ctx->compound_stmt(0));
	}
	j_file << exit_label<< ":" << endl;

	return value;
}

antlrcpp::Any Pass2Visitor::visitAddsubExpr(perlParser::AddsubExprContext *ctx){
	if (DEBUG_2) cout << "=== Pass 2: visitAddsubExpr" << endl;

	auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
	                        && (type2 == Predefined::real_type);

    string op = ctx->add_sub_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitMuldivExpr(perlParser::MuldivExprContext *ctx){
	if (DEBUG_2) cout << "=== Pass 2: visitMuldivExpr" << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
	                        && (type2 == Predefined::real_type);

    string op = ctx->mul_div_op()->getText();
    string opcode;

    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idiv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitRelopExpr(perlParser::RelopExprContext *ctx){
	if (DEBUG_2) cout << "=== Pass 2: visitRelopExpr" << endl;

	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	bool integer_mode =    (type1 == Predefined::integer_type)
		                        && (type2 == Predefined::integer_type);
	bool real_mode    =    (type1 == Predefined::real_type)
		                        && (type2 == Predefined::real_type);

	string op = ctx->rel_op()->getText();

	string label_x, label_y;

	label_x = "L" + std::to_string(label_counter); //the "true" path
	++label_counter;

	label_y = "L" + std::to_string(label_counter); //the "false" path
	++label_counter;

	if(integer_mode){
		j_file << "\tisub" << endl;

	}
	else if(real_mode){
		j_file << "\tfsub" << endl;
	}

	if (op == "==")
	{
		j_file << "\tifeq " << label_x << endl
			   << "\ticonst_0" << endl
			   << "\tgoto " << label_y << endl
			   << label_x << ":" << endl
			   << "\ticonst_1" << endl
			   << label_y << ":" << endl;
	}
	else if (op == "!=")
	{
		j_file << "\tifneq " << label_x << endl
			   << "\ticonst_0" << endl
			   << "\tgoto " << label_y << endl
			   << label_x << ":" << endl
			   << "\ticonst_1" << endl
			   << label_y << ":" << endl;
	}
	else if (op == "<")
	{
		j_file << "\tiflt " << label_x << endl
			   << "\ticonst_0" << endl
			   << "\tgoto " << label_y << endl
			   << label_x << ":" << endl
			   << "\ticonst_1" << endl
			   << label_y << ":" << endl;
	}
	else if (op == "<=")
	{
		j_file << "\tifle " << label_x << endl
			   << "\ticonst_0" << endl
			   << "\tgoto " << label_y << endl
			   << label_x << ":" << endl
			   << "\ticonst_1" << endl
			   << label_y << ":" << endl;
	}
	else if (op == ">")
	{
		j_file << "\tifgt " << label_x << endl
			   << "\ticonst_0" << endl
			   << "\tgoto " << label_y << endl
			   << label_x << ":" << endl
			   << "\ticonst_1" << endl
			   << label_y << ":" << endl;
	}
	else
	{
		j_file << "\tifge " << label_x << endl
			   << "\ticonst_0" << endl
			   << "\tgoto " << label_y << endl
			   << label_x << ":" << endl
			   << "\ticonst_1" << endl
			   << label_y << ":" << endl;
	}

	return value;
}





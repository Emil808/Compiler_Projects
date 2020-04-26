#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

const bool DEBUG_2 = false;

Pass2Visitor::Pass2Visitor()
    : program_name(""), j_file(nullptr)
{
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(perlParser::ProgramContext *ctx)
{
	// Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

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

antlrcpp::Any Pass2Visitor::visitStmt(perlParser::StmtContext *ctx){

    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAssignment_stmt(perlParser::Assignment_stmtContext *ctx){

    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->variable()->IDENTIFIER()->toString()
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


}



#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "perlBaseVisitor.h"
#include "antlr4-runtime.h"
#include "perlVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public perlBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    vector<SymTabEntry *> variable_id_list;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    antlrcpp::Any visitProgram(perlParser::ProgramContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(perlParser::Assignment_stmtContext *ctx) override;

    antlrcpp::Any visitUnsignednumExpr(perlParser::UnsignednumExprContext *ctx) override;
    antlrcpp::Any visitSigned_number(perlParser::Signed_numberContext *ctx) override;

    antlrcpp::Any visitPowExpr(perlParser::PowExprContext *ctx) override;
    antlrcpp::Any visitAddsubExpr(perlParser::AddsubExprContext *ctx) override;
    antlrcpp::Any visitMuldivExpr(perlParser::MuldivExprContext *ctx) override;
    antlrcpp::Any visitRelopExpr(perlParser::RelopExprContext *ctx) override;
    antlrcpp::Any visitParenthExpr(perlParser::ParenthExprContext *ctx) override;


    antlrcpp::Any visitVariableExpr(perlParser::VariableExprContext *ctx) override;

    antlrcpp::Any visitINTConst(perlParser::INTConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(perlParser::FloatConstContext *ctx) override;


};

#endif /* PASS1VISITOR_H_ */
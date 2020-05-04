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

    antlrcpp::Any visitVariable_delcaration(perlParser::Variable_delcarationContext *ctx) override;


    antlrcpp::Any visitUnsignednumExpr(perlParser::UnsignednumExprContext *ctx) override;
    antlrcpp::Any visitSignednumExpr(perlParser::SignednumExprContext *ctx) override;
    antlrcpp::Any visitPowerExpr(perlParser::PowerExprContext *ctx) override;
    antlrcpp::Any visitAddsubExpr(perlParser::AddsubExprContext *ctx) override;
    antlrcpp::Any visitMuldivExpr(perlParser::MuldivExprContext *ctx) override;
    antlrcpp::Any visitRelopExpr(perlParser::RelopExprContext *ctx) override;
    antlrcpp::Any visitParenthExpr(perlParser::ParenthExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(perlParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitShiftExpr(perlParser::ShiftExprContext *ctx) override;
    antlrcpp::Any visitBitopExpr(perlParser::BitopExprContext *ctx) override;
    antlrcpp::Any visitINTConst(perlParser::INTConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(perlParser::FloatConstContext *ctx) override;
    antlrcpp::Any visitBOOLConst(perlParser::BOOLConstContext *ctx) override;


};

#endif /* PASS1VISITOR_H_ */

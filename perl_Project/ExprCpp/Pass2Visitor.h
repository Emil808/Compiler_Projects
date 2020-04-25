#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "perlBaseVisitor.h"
#include "antlr4-runtime.h"
#include "perlVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public perlBaseVisitor
{
private:
	string program_name;
	string j_file_name;
	ofstream j_file;

public:
	Pass2Visitor();
    virtual ~Pass2Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(perlParser::ProgramContext *ctx) override;
    antlrcpp::Any visitStmt(perlParser::StmtContext *ctx) override;

    antlrcpp::Any visitSigned_number(perlParser::Signed_numberContext *ctx) override;

    antlrcpp::Any visitPowExpr(perlParser::PowExprContext *ctx) override;
    antlrcpp::Any visitAddsubExpr(perlParser::AddsubExprContext *ctx) override;
    antlrcpp::Any visitMuldivExpr(perlParser::MuldivExprContext *ctx) override;
    antlrcpp::Any visitRelopExpr(perlParser::RelopExprContext *ctx) override;

    antlrcpp::Any visitVariableExpr(perlParser::VariableExprContext *ctx) override;

    antlrcpp::Any visitINTConst(perlParser::INTConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(perlParser::FloatConstContext *ctx) override;

    //todo: other visitor functions in here

};




#endif /* PASS2VISITOR_H_ */

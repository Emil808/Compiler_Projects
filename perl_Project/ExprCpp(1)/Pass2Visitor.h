#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>
#include <unordered_map>
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "perlBaseVisitor.h"
#include "antlr4-runtime.h"
#include "perlVisitor.h"

using namespace wci;
using namespace wci::intermediate;
using namespace std;
class Pass2Visitor : public perlBaseVisitor
{
private:
	string program_name;
	string j_file_name;
	ofstream j_file;
	int label_counter;

public:
	Pass2Visitor();
    virtual ~Pass2Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(perlParser::ProgramContext *ctx) override;
    antlrcpp::Any visitVariable_delcaration(perlParser::Variable_delcarationContext *ctx) override;
    antlrcpp::Any visitStmt(perlParser::StmtContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(perlParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitVariableExpr(perlParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignednumExpr(perlParser::SignednumExprContext *ctx) override;
    antlrcpp::Any visitPrintStmt(perlParser::PrintStmtContext *ctx) override;
    antlrcpp::Any visitIf_stmt(perlParser::If_stmtContext *ctx) override;
    antlrcpp::Any visitPowerExpr(perlParser::PowerExprContext *ctx) override;
    antlrcpp::Any visitAddsubExpr(perlParser::AddsubExprContext *ctx) override;
    antlrcpp::Any visitMuldivExpr(perlParser::MuldivExprContext *ctx) override;
    antlrcpp::Any visitRelopExpr(perlParser::RelopExprContext *ctx) override;
    antlrcpp::Any visitShiftExpr(perlParser::ShiftExprContext *ctx) override;
    antlrcpp::Any visitBitopExpr(perlParser::BitopExprContext *ctx) override;
 
    antlrcpp::Any visitWhile_stmt(perlParser::While_stmtContext *ctx) override;
    antlrcpp::Any visitUntil_stmt(perlParser::Until_stmtContext *ctx) override;
    antlrcpp::Any visitDo_while_stmt(perlParser::Do_while_stmtContext *ctx) override;

    antlrcpp::Any visitINTConst(perlParser::INTConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(perlParser::FloatConstContext *ctx) override;
    antlrcpp::Any visitBOOLConst(perlParser::BOOLConstContext *ctx) override;

    //todo: other visitor functions in here

};




#endif /* PASS2VISITOR_H_ */

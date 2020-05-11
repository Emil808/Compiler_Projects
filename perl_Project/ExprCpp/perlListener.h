
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;


// Generated from perl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "perlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by perlParser.
 */
class  perlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(perlParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(perlParser::ProgramContext *ctx) = 0;

  virtual void enterMain_method(perlParser::Main_methodContext *ctx) = 0;
  virtual void exitMain_method(perlParser::Main_methodContext *ctx) = 0;

  virtual void enterDeclarations(perlParser::DeclarationsContext *ctx) = 0;
  virtual void exitDeclarations(perlParser::DeclarationsContext *ctx) = 0;

  virtual void enterMethod_delcarations(perlParser::Method_delcarationsContext *ctx) = 0;
  virtual void exitMethod_delcarations(perlParser::Method_delcarationsContext *ctx) = 0;

  virtual void enterFunction(perlParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(perlParser::FunctionContext *ctx) = 0;

  virtual void enterProcedure(perlParser::ProcedureContext *ctx) = 0;
  virtual void exitProcedure(perlParser::ProcedureContext *ctx) = 0;

  virtual void enterParameters(perlParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(perlParser::ParametersContext *ctx) = 0;

  virtual void enterVariable_delcaration(perlParser::Variable_delcarationContext *ctx) = 0;
  virtual void exitVariable_delcaration(perlParser::Variable_delcarationContext *ctx) = 0;

  virtual void enterCompound_stmt(perlParser::Compound_stmtContext *ctx) = 0;
  virtual void exitCompound_stmt(perlParser::Compound_stmtContext *ctx) = 0;

  virtual void enterStmt(perlParser::StmtContext *ctx) = 0;
  virtual void exitStmt(perlParser::StmtContext *ctx) = 0;

  virtual void enterAssignment_stmt(perlParser::Assignment_stmtContext *ctx) = 0;
  virtual void exitAssignment_stmt(perlParser::Assignment_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(perlParser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(perlParser::Return_stmtContext *ctx) = 0;

  virtual void enterProcedure_call_stmt(perlParser::Procedure_call_stmtContext *ctx) = 0;
  virtual void exitProcedure_call_stmt(perlParser::Procedure_call_stmtContext *ctx) = 0;

  virtual void enterIf_stmt(perlParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(perlParser::If_stmtContext *ctx) = 0;

  virtual void enterPrintStmt(perlParser::PrintStmtContext *ctx) = 0;
  virtual void exitPrintStmt(perlParser::PrintStmtContext *ctx) = 0;

  virtual void enterFormatString(perlParser::FormatStringContext *ctx) = 0;
  virtual void exitFormatString(perlParser::FormatStringContext *ctx) = 0;

  virtual void enterPrintArg(perlParser::PrintArgContext *ctx) = 0;
  virtual void exitPrintArg(perlParser::PrintArgContext *ctx) = 0;

  virtual void enterWhile_stmt(perlParser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(perlParser::While_stmtContext *ctx) = 0;

  virtual void enterUntil_stmt(perlParser::Until_stmtContext *ctx) = 0;
  virtual void exitUntil_stmt(perlParser::Until_stmtContext *ctx) = 0;

  virtual void enterDo_while_stmt(perlParser::Do_while_stmtContext *ctx) = 0;
  virtual void exitDo_while_stmt(perlParser::Do_while_stmtContext *ctx) = 0;

  virtual void enterFunction_call(perlParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(perlParser::Function_callContext *ctx) = 0;

  virtual void enterArguments(perlParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(perlParser::ArgumentsContext *ctx) = 0;

  virtual void enterVariableExpr(perlParser::VariableExprContext *ctx) = 0;
  virtual void exitVariableExpr(perlParser::VariableExprContext *ctx) = 0;

  virtual void enterPowerExpr(perlParser::PowerExprContext *ctx) = 0;
  virtual void exitPowerExpr(perlParser::PowerExprContext *ctx) = 0;

  virtual void enterMuldivExpr(perlParser::MuldivExprContext *ctx) = 0;
  virtual void exitMuldivExpr(perlParser::MuldivExprContext *ctx) = 0;

  virtual void enterBitopExpr(perlParser::BitopExprContext *ctx) = 0;
  virtual void exitBitopExpr(perlParser::BitopExprContext *ctx) = 0;

  virtual void enterSignednumExpr(perlParser::SignednumExprContext *ctx) = 0;
  virtual void exitSignednumExpr(perlParser::SignednumExprContext *ctx) = 0;

  virtual void enterRelopExpr(perlParser::RelopExprContext *ctx) = 0;
  virtual void exitRelopExpr(perlParser::RelopExprContext *ctx) = 0;

  virtual void enterAddsubExpr(perlParser::AddsubExprContext *ctx) = 0;
  virtual void exitAddsubExpr(perlParser::AddsubExprContext *ctx) = 0;

  virtual void enterUnsignednumExpr(perlParser::UnsignednumExprContext *ctx) = 0;
  virtual void exitUnsignednumExpr(perlParser::UnsignednumExprContext *ctx) = 0;

  virtual void enterParenthExpr(perlParser::ParenthExprContext *ctx) = 0;
  virtual void exitParenthExpr(perlParser::ParenthExprContext *ctx) = 0;

  virtual void enterFunctionExpr(perlParser::FunctionExprContext *ctx) = 0;
  virtual void exitFunctionExpr(perlParser::FunctionExprContext *ctx) = 0;

  virtual void enterShiftExpr(perlParser::ShiftExprContext *ctx) = 0;
  virtual void exitShiftExpr(perlParser::ShiftExprContext *ctx) = 0;

  virtual void enterVariable(perlParser::VariableContext *ctx) = 0;
  virtual void exitVariable(perlParser::VariableContext *ctx) = 0;

  virtual void enterPower_op(perlParser::Power_opContext *ctx) = 0;
  virtual void exitPower_op(perlParser::Power_opContext *ctx) = 0;

  virtual void enterMul_div_op(perlParser::Mul_div_opContext *ctx) = 0;
  virtual void exitMul_div_op(perlParser::Mul_div_opContext *ctx) = 0;

  virtual void enterShift_op(perlParser::Shift_opContext *ctx) = 0;
  virtual void exitShift_op(perlParser::Shift_opContext *ctx) = 0;

  virtual void enterAdd_sub_op(perlParser::Add_sub_opContext *ctx) = 0;
  virtual void exitAdd_sub_op(perlParser::Add_sub_opContext *ctx) = 0;

  virtual void enterRel_op(perlParser::Rel_opContext *ctx) = 0;
  virtual void exitRel_op(perlParser::Rel_opContext *ctx) = 0;

  virtual void enterBit_op(perlParser::Bit_opContext *ctx) = 0;
  virtual void exitBit_op(perlParser::Bit_opContext *ctx) = 0;

  virtual void enterSign(perlParser::SignContext *ctx) = 0;
  virtual void exitSign(perlParser::SignContext *ctx) = 0;

  virtual void enterINTConst(perlParser::INTConstContext *ctx) = 0;
  virtual void exitINTConst(perlParser::INTConstContext *ctx) = 0;

  virtual void enterFloatConst(perlParser::FloatConstContext *ctx) = 0;
  virtual void exitFloatConst(perlParser::FloatConstContext *ctx) = 0;

  virtual void enterExponent(perlParser::ExponentContext *ctx) = 0;
  virtual void exitExponent(perlParser::ExponentContext *ctx) = 0;

  virtual void enterBOOLConst(perlParser::BOOLConstContext *ctx) = 0;
  virtual void exitBOOLConst(perlParser::BOOLConstContext *ctx) = 0;

  virtual void enterSigned_number(perlParser::Signed_numberContext *ctx) = 0;
  virtual void exitSigned_number(perlParser::Signed_numberContext *ctx) = 0;


};


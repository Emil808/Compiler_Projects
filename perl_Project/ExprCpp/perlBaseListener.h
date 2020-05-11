
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;


// Generated from perl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "perlListener.h"


/**
 * This class provides an empty implementation of perlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  perlBaseListener : public perlListener {
public:

  virtual void enterProgram(perlParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(perlParser::ProgramContext * /*ctx*/) override { }

  virtual void enterMain_method(perlParser::Main_methodContext * /*ctx*/) override { }
  virtual void exitMain_method(perlParser::Main_methodContext * /*ctx*/) override { }

  virtual void enterDeclarations(perlParser::DeclarationsContext * /*ctx*/) override { }
  virtual void exitDeclarations(perlParser::DeclarationsContext * /*ctx*/) override { }

  virtual void enterMethod_delcarations(perlParser::Method_delcarationsContext * /*ctx*/) override { }
  virtual void exitMethod_delcarations(perlParser::Method_delcarationsContext * /*ctx*/) override { }

  virtual void enterFunction(perlParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(perlParser::FunctionContext * /*ctx*/) override { }

  virtual void enterProcedure(perlParser::ProcedureContext * /*ctx*/) override { }
  virtual void exitProcedure(perlParser::ProcedureContext * /*ctx*/) override { }

  virtual void enterParameters(perlParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(perlParser::ParametersContext * /*ctx*/) override { }

  virtual void enterVariable_delcaration(perlParser::Variable_delcarationContext * /*ctx*/) override { }
  virtual void exitVariable_delcaration(perlParser::Variable_delcarationContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(perlParser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(perlParser::Compound_stmtContext * /*ctx*/) override { }

  virtual void enterStmt(perlParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(perlParser::StmtContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt(perlParser::Assignment_stmtContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt(perlParser::Assignment_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(perlParser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(perlParser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterProcedure_call_stmt(perlParser::Procedure_call_stmtContext * /*ctx*/) override { }
  virtual void exitProcedure_call_stmt(perlParser::Procedure_call_stmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(perlParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(perlParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterPrintStmt(perlParser::PrintStmtContext * /*ctx*/) override { }
  virtual void exitPrintStmt(perlParser::PrintStmtContext * /*ctx*/) override { }

  virtual void enterFormatString(perlParser::FormatStringContext * /*ctx*/) override { }
  virtual void exitFormatString(perlParser::FormatStringContext * /*ctx*/) override { }

  virtual void enterPrintArg(perlParser::PrintArgContext * /*ctx*/) override { }
  virtual void exitPrintArg(perlParser::PrintArgContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(perlParser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(perlParser::While_stmtContext * /*ctx*/) override { }

  virtual void enterUntil_stmt(perlParser::Until_stmtContext * /*ctx*/) override { }
  virtual void exitUntil_stmt(perlParser::Until_stmtContext * /*ctx*/) override { }

  virtual void enterDo_while_stmt(perlParser::Do_while_stmtContext * /*ctx*/) override { }
  virtual void exitDo_while_stmt(perlParser::Do_while_stmtContext * /*ctx*/) override { }

  virtual void enterFunction_call(perlParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(perlParser::Function_callContext * /*ctx*/) override { }

  virtual void enterArguments(perlParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(perlParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterVariableExpr(perlParser::VariableExprContext * /*ctx*/) override { }
  virtual void exitVariableExpr(perlParser::VariableExprContext * /*ctx*/) override { }

  virtual void enterPowerExpr(perlParser::PowerExprContext * /*ctx*/) override { }
  virtual void exitPowerExpr(perlParser::PowerExprContext * /*ctx*/) override { }

  virtual void enterMuldivExpr(perlParser::MuldivExprContext * /*ctx*/) override { }
  virtual void exitMuldivExpr(perlParser::MuldivExprContext * /*ctx*/) override { }

  virtual void enterBitopExpr(perlParser::BitopExprContext * /*ctx*/) override { }
  virtual void exitBitopExpr(perlParser::BitopExprContext * /*ctx*/) override { }

  virtual void enterSignednumExpr(perlParser::SignednumExprContext * /*ctx*/) override { }
  virtual void exitSignednumExpr(perlParser::SignednumExprContext * /*ctx*/) override { }

  virtual void enterRelopExpr(perlParser::RelopExprContext * /*ctx*/) override { }
  virtual void exitRelopExpr(perlParser::RelopExprContext * /*ctx*/) override { }

  virtual void enterAddsubExpr(perlParser::AddsubExprContext * /*ctx*/) override { }
  virtual void exitAddsubExpr(perlParser::AddsubExprContext * /*ctx*/) override { }

  virtual void enterUnsignednumExpr(perlParser::UnsignednumExprContext * /*ctx*/) override { }
  virtual void exitUnsignednumExpr(perlParser::UnsignednumExprContext * /*ctx*/) override { }

  virtual void enterParenthExpr(perlParser::ParenthExprContext * /*ctx*/) override { }
  virtual void exitParenthExpr(perlParser::ParenthExprContext * /*ctx*/) override { }

  virtual void enterFunctionExpr(perlParser::FunctionExprContext * /*ctx*/) override { }
  virtual void exitFunctionExpr(perlParser::FunctionExprContext * /*ctx*/) override { }

  virtual void enterShiftExpr(perlParser::ShiftExprContext * /*ctx*/) override { }
  virtual void exitShiftExpr(perlParser::ShiftExprContext * /*ctx*/) override { }

  virtual void enterVariable(perlParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(perlParser::VariableContext * /*ctx*/) override { }

  virtual void enterPower_op(perlParser::Power_opContext * /*ctx*/) override { }
  virtual void exitPower_op(perlParser::Power_opContext * /*ctx*/) override { }

  virtual void enterMul_div_op(perlParser::Mul_div_opContext * /*ctx*/) override { }
  virtual void exitMul_div_op(perlParser::Mul_div_opContext * /*ctx*/) override { }

  virtual void enterShift_op(perlParser::Shift_opContext * /*ctx*/) override { }
  virtual void exitShift_op(perlParser::Shift_opContext * /*ctx*/) override { }

  virtual void enterAdd_sub_op(perlParser::Add_sub_opContext * /*ctx*/) override { }
  virtual void exitAdd_sub_op(perlParser::Add_sub_opContext * /*ctx*/) override { }

  virtual void enterRel_op(perlParser::Rel_opContext * /*ctx*/) override { }
  virtual void exitRel_op(perlParser::Rel_opContext * /*ctx*/) override { }

  virtual void enterBit_op(perlParser::Bit_opContext * /*ctx*/) override { }
  virtual void exitBit_op(perlParser::Bit_opContext * /*ctx*/) override { }

  virtual void enterSign(perlParser::SignContext * /*ctx*/) override { }
  virtual void exitSign(perlParser::SignContext * /*ctx*/) override { }

  virtual void enterINTConst(perlParser::INTConstContext * /*ctx*/) override { }
  virtual void exitINTConst(perlParser::INTConstContext * /*ctx*/) override { }

  virtual void enterFloatConst(perlParser::FloatConstContext * /*ctx*/) override { }
  virtual void exitFloatConst(perlParser::FloatConstContext * /*ctx*/) override { }

  virtual void enterExponent(perlParser::ExponentContext * /*ctx*/) override { }
  virtual void exitExponent(perlParser::ExponentContext * /*ctx*/) override { }

  virtual void enterBOOLConst(perlParser::BOOLConstContext * /*ctx*/) override { }
  virtual void exitBOOLConst(perlParser::BOOLConstContext * /*ctx*/) override { }

  virtual void enterSigned_number(perlParser::Signed_numberContext * /*ctx*/) override { }
  virtual void exitSigned_number(perlParser::Signed_numberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


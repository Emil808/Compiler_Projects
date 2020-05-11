// Generated from perl.g4 by ANTLR 4.8

#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link perlParser}.
 */
public interface perlListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link perlParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(perlParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(perlParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#main_method}.
	 * @param ctx the parse tree
	 */
	void enterMain_method(perlParser.Main_methodContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#main_method}.
	 * @param ctx the parse tree
	 */
	void exitMain_method(perlParser.Main_methodContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#declarations}.
	 * @param ctx the parse tree
	 */
	void enterDeclarations(perlParser.DeclarationsContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#declarations}.
	 * @param ctx the parse tree
	 */
	void exitDeclarations(perlParser.DeclarationsContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#method_delcarations}.
	 * @param ctx the parse tree
	 */
	void enterMethod_delcarations(perlParser.Method_delcarationsContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#method_delcarations}.
	 * @param ctx the parse tree
	 */
	void exitMethod_delcarations(perlParser.Method_delcarationsContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#function}.
	 * @param ctx the parse tree
	 */
	void enterFunction(perlParser.FunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#function}.
	 * @param ctx the parse tree
	 */
	void exitFunction(perlParser.FunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#procedure}.
	 * @param ctx the parse tree
	 */
	void enterProcedure(perlParser.ProcedureContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#procedure}.
	 * @param ctx the parse tree
	 */
	void exitProcedure(perlParser.ProcedureContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#parameters}.
	 * @param ctx the parse tree
	 */
	void enterParameters(perlParser.ParametersContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#parameters}.
	 * @param ctx the parse tree
	 */
	void exitParameters(perlParser.ParametersContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#variable_delcaration}.
	 * @param ctx the parse tree
	 */
	void enterVariable_delcaration(perlParser.Variable_delcarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#variable_delcaration}.
	 * @param ctx the parse tree
	 */
	void exitVariable_delcaration(perlParser.Variable_delcarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#compound_stmt}.
	 * @param ctx the parse tree
	 */
	void enterCompound_stmt(perlParser.Compound_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#compound_stmt}.
	 * @param ctx the parse tree
	 */
	void exitCompound_stmt(perlParser.Compound_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmt(perlParser.StmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmt(perlParser.StmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#assignment_stmt}.
	 * @param ctx the parse tree
	 */
	void enterAssignment_stmt(perlParser.Assignment_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#assignment_stmt}.
	 * @param ctx the parse tree
	 */
	void exitAssignment_stmt(perlParser.Assignment_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void enterReturn_stmt(perlParser.Return_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void exitReturn_stmt(perlParser.Return_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#procedure_call_stmt}.
	 * @param ctx the parse tree
	 */
	void enterProcedure_call_stmt(perlParser.Procedure_call_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#procedure_call_stmt}.
	 * @param ctx the parse tree
	 */
	void exitProcedure_call_stmt(perlParser.Procedure_call_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#if_stmt}.
	 * @param ctx the parse tree
	 */
	void enterIf_stmt(perlParser.If_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#if_stmt}.
	 * @param ctx the parse tree
	 */
	void exitIf_stmt(perlParser.If_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#printStmt}.
	 * @param ctx the parse tree
	 */
	void enterPrintStmt(perlParser.PrintStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#printStmt}.
	 * @param ctx the parse tree
	 */
	void exitPrintStmt(perlParser.PrintStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#formatString}.
	 * @param ctx the parse tree
	 */
	void enterFormatString(perlParser.FormatStringContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#formatString}.
	 * @param ctx the parse tree
	 */
	void exitFormatString(perlParser.FormatStringContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#printArg}.
	 * @param ctx the parse tree
	 */
	void enterPrintArg(perlParser.PrintArgContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#printArg}.
	 * @param ctx the parse tree
	 */
	void exitPrintArg(perlParser.PrintArgContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#while_stmt}.
	 * @param ctx the parse tree
	 */
	void enterWhile_stmt(perlParser.While_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#while_stmt}.
	 * @param ctx the parse tree
	 */
	void exitWhile_stmt(perlParser.While_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#until_stmt}.
	 * @param ctx the parse tree
	 */
	void enterUntil_stmt(perlParser.Until_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#until_stmt}.
	 * @param ctx the parse tree
	 */
	void exitUntil_stmt(perlParser.Until_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#do_while_stmt}.
	 * @param ctx the parse tree
	 */
	void enterDo_while_stmt(perlParser.Do_while_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#do_while_stmt}.
	 * @param ctx the parse tree
	 */
	void exitDo_while_stmt(perlParser.Do_while_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#function_call}.
	 * @param ctx the parse tree
	 */
	void enterFunction_call(perlParser.Function_callContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#function_call}.
	 * @param ctx the parse tree
	 */
	void exitFunction_call(perlParser.Function_callContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#arguments}.
	 * @param ctx the parse tree
	 */
	void enterArguments(perlParser.ArgumentsContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#arguments}.
	 * @param ctx the parse tree
	 */
	void exitArguments(perlParser.ArgumentsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code variableExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterVariableExpr(perlParser.VariableExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code variableExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitVariableExpr(perlParser.VariableExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code powerExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterPowerExpr(perlParser.PowerExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code powerExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitPowerExpr(perlParser.PowerExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code muldivExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterMuldivExpr(perlParser.MuldivExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code muldivExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitMuldivExpr(perlParser.MuldivExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code bitopExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterBitopExpr(perlParser.BitopExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code bitopExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitBitopExpr(perlParser.BitopExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code signednumExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterSignednumExpr(perlParser.SignednumExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code signednumExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitSignednumExpr(perlParser.SignednumExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code relopExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterRelopExpr(perlParser.RelopExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code relopExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitRelopExpr(perlParser.RelopExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code addsubExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterAddsubExpr(perlParser.AddsubExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code addsubExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitAddsubExpr(perlParser.AddsubExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unsignednumExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterUnsignednumExpr(perlParser.UnsignednumExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unsignednumExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitUnsignednumExpr(perlParser.UnsignednumExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code parenthExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterParenthExpr(perlParser.ParenthExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code parenthExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitParenthExpr(perlParser.ParenthExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code functionExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterFunctionExpr(perlParser.FunctionExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code functionExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitFunctionExpr(perlParser.FunctionExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code shiftExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterShiftExpr(perlParser.ShiftExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code shiftExpr}
	 * labeled alternative in {@link perlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitShiftExpr(perlParser.ShiftExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#variable}.
	 * @param ctx the parse tree
	 */
	void enterVariable(perlParser.VariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#variable}.
	 * @param ctx the parse tree
	 */
	void exitVariable(perlParser.VariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#power_op}.
	 * @param ctx the parse tree
	 */
	void enterPower_op(perlParser.Power_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#power_op}.
	 * @param ctx the parse tree
	 */
	void exitPower_op(perlParser.Power_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#mul_div_op}.
	 * @param ctx the parse tree
	 */
	void enterMul_div_op(perlParser.Mul_div_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#mul_div_op}.
	 * @param ctx the parse tree
	 */
	void exitMul_div_op(perlParser.Mul_div_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#shift_op}.
	 * @param ctx the parse tree
	 */
	void enterShift_op(perlParser.Shift_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#shift_op}.
	 * @param ctx the parse tree
	 */
	void exitShift_op(perlParser.Shift_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#add_sub_op}.
	 * @param ctx the parse tree
	 */
	void enterAdd_sub_op(perlParser.Add_sub_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#add_sub_op}.
	 * @param ctx the parse tree
	 */
	void exitAdd_sub_op(perlParser.Add_sub_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#rel_op}.
	 * @param ctx the parse tree
	 */
	void enterRel_op(perlParser.Rel_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#rel_op}.
	 * @param ctx the parse tree
	 */
	void exitRel_op(perlParser.Rel_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#bit_op}.
	 * @param ctx the parse tree
	 */
	void enterBit_op(perlParser.Bit_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#bit_op}.
	 * @param ctx the parse tree
	 */
	void exitBit_op(perlParser.Bit_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#sign}.
	 * @param ctx the parse tree
	 */
	void enterSign(perlParser.SignContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#sign}.
	 * @param ctx the parse tree
	 */
	void exitSign(perlParser.SignContext ctx);
	/**
	 * Enter a parse tree produced by the {@code INTConst}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void enterINTConst(perlParser.INTConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code INTConst}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void exitINTConst(perlParser.INTConstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code FloatConst}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void enterFloatConst(perlParser.FloatConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code FloatConst}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void exitFloatConst(perlParser.FloatConstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Exponent}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void enterExponent(perlParser.ExponentContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Exponent}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void exitExponent(perlParser.ExponentContext ctx);
	/**
	 * Enter a parse tree produced by the {@code BOOLConst}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void enterBOOLConst(perlParser.BOOLConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code BOOLConst}
	 * labeled alternative in {@link perlParser#number}.
	 * @param ctx the parse tree
	 */
	void exitBOOLConst(perlParser.BOOLConstContext ctx);
	/**
	 * Enter a parse tree produced by {@link perlParser#signed_number}.
	 * @param ctx the parse tree
	 */
	void enterSigned_number(perlParser.Signed_numberContext ctx);
	/**
	 * Exit a parse tree produced by {@link perlParser#signed_number}.
	 * @param ctx the parse tree
	 */
	void exitSigned_number(perlParser.Signed_numberContext ctx);
}
// Generated from perl.g4 by ANTLR 4.8

#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class perlParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, TYPEID=9, 
		IF=10, ELSE=11, ELSE_IF=12, WHILE=13, UNTIL=14, DO=15, MAIN=16, TRUE=17, 
		FALSE=18, PRINTF=19, IDENTIFIER=20, INTEGER=21, EXPONENT=22, REAL=23, 
		BOOL=24, MUL_OP=25, DIV_OP=26, ADD_OP=27, SUB_OP=28, POWER_OP=29, MOD_OP=30, 
		ASSIGN=31, EQ_OP=32, NE_OP=33, LT_OP=34, LE_OP=35, GT_OP=36, GE_OP=37, 
		LShift_OP=38, RShift_OP=39, OR_OP=40, AND_OP=41, NAND_OP=42, NOR_OP=43, 
		Neg_OP=44, NEWLINE=45, WS=46, QUOTE=47, STRING=48, BLOCK_COMMENT=49, LINE_COMMENT=50;
	public static final int
		RULE_program = 0, RULE_main_method = 1, RULE_declarations = 2, RULE_method_delcarations = 3, 
		RULE_function = 4, RULE_procedure = 5, RULE_parameters = 6, RULE_variable_delcaration = 7, 
		RULE_compound_stmt = 8, RULE_stmt = 9, RULE_assignment_stmt = 10, RULE_return_stmt = 11, 
		RULE_procedure_call_stmt = 12, RULE_if_stmt = 13, RULE_printStmt = 14, 
		RULE_formatString = 15, RULE_printArg = 16, RULE_while_stmt = 17, RULE_until_stmt = 18, 
		RULE_do_while_stmt = 19, RULE_function_call = 20, RULE_arguments = 21, 
		RULE_expr = 22, RULE_variable = 23, RULE_power_op = 24, RULE_mul_div_op = 25, 
		RULE_shift_op = 26, RULE_add_sub_op = 27, RULE_rel_op = 28, RULE_bit_op = 29, 
		RULE_sign = 30, RULE_number = 31, RULE_signed_number = 32;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "main_method", "declarations", "method_delcarations", "function", 
			"procedure", "parameters", "variable_delcaration", "compound_stmt", "stmt", 
			"assignment_stmt", "return_stmt", "procedure_call_stmt", "if_stmt", "printStmt", 
			"formatString", "printArg", "while_stmt", "until_stmt", "do_while_stmt", 
			"function_call", "arguments", "expr", "variable", "power_op", "mul_div_op", 
			"shift_op", "add_sub_op", "rel_op", "bit_op", "sign", "number", "signed_number"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'{'", "'}'", "'('", "')'", "';'", "'return'", "','", "'$'", null, 
			"'if'", "'else'", "'elseif'", "'while'", "'until'", "'do'", "'main'", 
			"'TRUE'", "'FALSE'", "'printf'", null, null, null, null, null, "'*'", 
			"'/'", "'+'", "'-'", "'^'", "'%'", "'='", "'=='", "'!='", "'<'", "'<='", 
			"'>'", "'>='", "'<<'", "'>>'", "'|'", "'&'", "'/&'", "'/|'", "'/~'", 
			null, null, "'''"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "TYPEID", "IF", 
			"ELSE", "ELSE_IF", "WHILE", "UNTIL", "DO", "MAIN", "TRUE", "FALSE", "PRINTF", 
			"IDENTIFIER", "INTEGER", "EXPONENT", "REAL", "BOOL", "MUL_OP", "DIV_OP", 
			"ADD_OP", "SUB_OP", "POWER_OP", "MOD_OP", "ASSIGN", "EQ_OP", "NE_OP", 
			"LT_OP", "LE_OP", "GT_OP", "GE_OP", "LShift_OP", "RShift_OP", "OR_OP", 
			"AND_OP", "NAND_OP", "NOR_OP", "Neg_OP", "NEWLINE", "WS", "QUOTE", "STRING", 
			"BLOCK_COMMENT", "LINE_COMMENT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "perl.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public perlParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgramContext extends ParserRuleContext {
		public DeclarationsContext declarations() {
			return getRuleContext(DeclarationsContext.class,0);
		}
		public Method_delcarationsContext method_delcarations() {
			return getRuleContext(Method_delcarationsContext.class,0);
		}
		public Main_methodContext main_method() {
			return getRuleContext(Main_methodContext.class,0);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterProgram(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitProgram(this);
		}
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(66);
			declarations();
			setState(67);
			method_delcarations();
			setState(68);
			main_method();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Main_methodContext extends ParserRuleContext {
		public TerminalNode MAIN() { return getToken(perlParser.MAIN, 0); }
		public List<Compound_stmtContext> compound_stmt() {
			return getRuleContexts(Compound_stmtContext.class);
		}
		public Compound_stmtContext compound_stmt(int i) {
			return getRuleContext(Compound_stmtContext.class,i);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(perlParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(perlParser.NEWLINE, i);
		}
		public Main_methodContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_main_method; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterMain_method(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitMain_method(this);
		}
	}

	public final Main_methodContext main_method() throws RecognitionException {
		Main_methodContext _localctx = new Main_methodContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_main_method);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			match(MAIN);
			setState(71);
			match(T__0);
			setState(75);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__7) | (1L << IF) | (1L << WHILE) | (1L << UNTIL) | (1L << DO) | (1L << PRINTF) | (1L << IDENTIFIER))) != 0)) {
				{
				{
				setState(72);
				compound_stmt();
				}
				}
				setState(77);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(81);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(78);
				match(NEWLINE);
				}
				}
				setState(83);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(84);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationsContext extends ParserRuleContext {
		public List<Variable_delcarationContext> variable_delcaration() {
			return getRuleContexts(Variable_delcarationContext.class);
		}
		public Variable_delcarationContext variable_delcaration(int i) {
			return getRuleContext(Variable_delcarationContext.class,i);
		}
		public DeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarations; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterDeclarations(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitDeclarations(this);
		}
	}

	public final DeclarationsContext declarations() throws RecognitionException {
		DeclarationsContext _localctx = new DeclarationsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_declarations);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TYPEID) {
				{
				{
				setState(86);
				variable_delcaration();
				}
				}
				setState(91);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Method_delcarationsContext extends ParserRuleContext {
		public List<FunctionContext> function() {
			return getRuleContexts(FunctionContext.class);
		}
		public FunctionContext function(int i) {
			return getRuleContext(FunctionContext.class,i);
		}
		public List<ProcedureContext> procedure() {
			return getRuleContexts(ProcedureContext.class);
		}
		public ProcedureContext procedure(int i) {
			return getRuleContext(ProcedureContext.class,i);
		}
		public Method_delcarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_method_delcarations; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterMethod_delcarations(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitMethod_delcarations(this);
		}
	}

	public final Method_delcarationsContext method_delcarations() throws RecognitionException {
		Method_delcarationsContext _localctx = new Method_delcarationsContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_method_delcarations);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==IDENTIFIER) {
				{
				setState(94);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
				case 1:
					{
					setState(92);
					function();
					}
					break;
				case 2:
					{
					setState(93);
					procedure();
					}
					break;
				}
				}
				setState(98);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionContext extends ParserRuleContext {
		public int locals_var;
		public int stack_var;
		public TerminalNode IDENTIFIER() { return getToken(perlParser.IDENTIFIER, 0); }
		public ParametersContext parameters() {
			return getRuleContext(ParametersContext.class,0);
		}
		public TerminalNode TYPEID() { return getToken(perlParser.TYPEID, 0); }
		public DeclarationsContext declarations() {
			return getRuleContext(DeclarationsContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterFunction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitFunction(this);
		}
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_function);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			match(IDENTIFIER);
			setState(100);
			match(T__2);
			setState(101);
			parameters();
			setState(102);
			match(T__3);
			setState(103);
			match(TYPEID);
			setState(104);
			match(T__0);
			setState(105);
			declarations();
			setState(106);
			compound_stmt();
			setState(107);
			match(T__1);
			setState(108);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProcedureContext extends ParserRuleContext {
		public int locals_var;
		public int stack_var;
		public TerminalNode IDENTIFIER() { return getToken(perlParser.IDENTIFIER, 0); }
		public ParametersContext parameters() {
			return getRuleContext(ParametersContext.class,0);
		}
		public DeclarationsContext declarations() {
			return getRuleContext(DeclarationsContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public ProcedureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_procedure; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterProcedure(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitProcedure(this);
		}
	}

	public final ProcedureContext procedure() throws RecognitionException {
		ProcedureContext _localctx = new ProcedureContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_procedure);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(110);
			match(IDENTIFIER);
			setState(111);
			match(T__2);
			setState(112);
			parameters();
			setState(113);
			match(T__3);
			setState(114);
			match(T__0);
			setState(115);
			declarations();
			setState(116);
			compound_stmt();
			setState(117);
			match(T__1);
			setState(118);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParametersContext extends ParserRuleContext {
		public List<Variable_delcarationContext> variable_delcaration() {
			return getRuleContexts(Variable_delcarationContext.class);
		}
		public Variable_delcarationContext variable_delcaration(int i) {
			return getRuleContext(Variable_delcarationContext.class,i);
		}
		public ParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameters; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterParameters(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitParameters(this);
		}
	}

	public final ParametersContext parameters() throws RecognitionException {
		ParametersContext _localctx = new ParametersContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_parameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TYPEID) {
				{
				{
				setState(120);
				variable_delcaration();
				}
				}
				setState(125);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_delcarationContext extends ParserRuleContext {
		public TerminalNode TYPEID() { return getToken(perlParser.TYPEID, 0); }
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public Variable_delcarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_delcaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterVariable_delcaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitVariable_delcaration(this);
		}
	}

	public final Variable_delcarationContext variable_delcaration() throws RecognitionException {
		Variable_delcarationContext _localctx = new Variable_delcarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_variable_delcaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			match(TYPEID);
			setState(127);
			variable();
			setState(128);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compound_stmtContext extends ParserRuleContext {
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public Compound_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compound_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterCompound_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitCompound_stmt(this);
		}
	}

	public final Compound_stmtContext compound_stmt() throws RecognitionException {
		Compound_stmtContext _localctx = new Compound_stmtContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_compound_stmt);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(131); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(130);
					stmt();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(133); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtContext extends ParserRuleContext {
		public Assignment_stmtContext assignment_stmt() {
			return getRuleContext(Assignment_stmtContext.class,0);
		}
		public If_stmtContext if_stmt() {
			return getRuleContext(If_stmtContext.class,0);
		}
		public While_stmtContext while_stmt() {
			return getRuleContext(While_stmtContext.class,0);
		}
		public Until_stmtContext until_stmt() {
			return getRuleContext(Until_stmtContext.class,0);
		}
		public Do_while_stmtContext do_while_stmt() {
			return getRuleContext(Do_while_stmtContext.class,0);
		}
		public PrintStmtContext printStmt() {
			return getRuleContext(PrintStmtContext.class,0);
		}
		public Return_stmtContext return_stmt() {
			return getRuleContext(Return_stmtContext.class,0);
		}
		public Procedure_call_stmtContext procedure_call_stmt() {
			return getRuleContext(Procedure_call_stmtContext.class,0);
		}
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitStmt(this);
		}
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_stmt);
		try {
			setState(143);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(135);
				assignment_stmt();
				}
				break;
			case IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(136);
				if_stmt();
				}
				break;
			case WHILE:
				enterOuterAlt(_localctx, 3);
				{
				setState(137);
				while_stmt();
				}
				break;
			case UNTIL:
				enterOuterAlt(_localctx, 4);
				{
				setState(138);
				until_stmt();
				}
				break;
			case DO:
				enterOuterAlt(_localctx, 5);
				{
				setState(139);
				do_while_stmt();
				}
				break;
			case PRINTF:
				enterOuterAlt(_localctx, 6);
				{
				setState(140);
				printStmt();
				}
				break;
			case T__5:
				enterOuterAlt(_localctx, 7);
				{
				setState(141);
				return_stmt();
				}
				break;
			case IDENTIFIER:
				enterOuterAlt(_localctx, 8);
				{
				setState(142);
				procedure_call_stmt();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Assignment_stmtContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(perlParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Assignment_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterAssignment_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitAssignment_stmt(this);
		}
	}

	public final Assignment_stmtContext assignment_stmt() throws RecognitionException {
		Assignment_stmtContext _localctx = new Assignment_stmtContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_assignment_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(145);
			variable();
			setState(146);
			match(ASSIGN);
			setState(147);
			expr(0);
			setState(148);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Return_stmtContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Return_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterReturn_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitReturn_stmt(this);
		}
	}

	public final Return_stmtContext return_stmt() throws RecognitionException {
		Return_stmtContext _localctx = new Return_stmtContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_return_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			match(T__5);
			setState(151);
			expr(0);
			setState(152);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Procedure_call_stmtContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(perlParser.IDENTIFIER, 0); }
		public ArgumentsContext arguments() {
			return getRuleContext(ArgumentsContext.class,0);
		}
		public Procedure_call_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_procedure_call_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterProcedure_call_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitProcedure_call_stmt(this);
		}
	}

	public final Procedure_call_stmtContext procedure_call_stmt() throws RecognitionException {
		Procedure_call_stmtContext _localctx = new Procedure_call_stmtContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_procedure_call_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(154);
			match(IDENTIFIER);
			setState(155);
			match(T__2);
			setState(156);
			arguments();
			setState(157);
			match(T__3);
			setState(158);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class If_stmtContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(perlParser.IF, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<Compound_stmtContext> compound_stmt() {
			return getRuleContexts(Compound_stmtContext.class);
		}
		public Compound_stmtContext compound_stmt(int i) {
			return getRuleContext(Compound_stmtContext.class,i);
		}
		public List<TerminalNode> ELSE_IF() { return getTokens(perlParser.ELSE_IF); }
		public TerminalNode ELSE_IF(int i) {
			return getToken(perlParser.ELSE_IF, i);
		}
		public TerminalNode ELSE() { return getToken(perlParser.ELSE, 0); }
		public If_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterIf_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitIf_stmt(this);
		}
	}

	public final If_stmtContext if_stmt() throws RecognitionException {
		If_stmtContext _localctx = new If_stmtContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_if_stmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			match(IF);
			setState(161);
			match(T__2);
			setState(162);
			expr(0);
			setState(163);
			match(T__3);
			setState(164);
			match(T__0);
			setState(165);
			compound_stmt();
			setState(166);
			match(T__1);
			setState(177);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ELSE_IF) {
				{
				{
				setState(167);
				match(ELSE_IF);
				setState(168);
				match(T__2);
				setState(169);
				expr(0);
				setState(170);
				match(T__3);
				setState(171);
				match(T__0);
				setState(172);
				compound_stmt();
				setState(173);
				match(T__1);
				}
				}
				setState(179);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(185);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(180);
				match(ELSE);
				setState(181);
				match(T__0);
				setState(182);
				compound_stmt();
				setState(183);
				match(T__1);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintStmtContext extends ParserRuleContext {
		public TerminalNode PRINTF() { return getToken(perlParser.PRINTF, 0); }
		public FormatStringContext formatString() {
			return getRuleContext(FormatStringContext.class,0);
		}
		public List<PrintArgContext> printArg() {
			return getRuleContexts(PrintArgContext.class);
		}
		public PrintArgContext printArg(int i) {
			return getRuleContext(PrintArgContext.class,i);
		}
		public PrintStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterPrintStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitPrintStmt(this);
		}
	}

	public final PrintStmtContext printStmt() throws RecognitionException {
		PrintStmtContext _localctx = new PrintStmtContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_printStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(187);
			match(PRINTF);
			setState(188);
			match(T__2);
			setState(189);
			formatString();
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__6) {
				{
				{
				setState(190);
				printArg();
				}
				}
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(196);
			match(T__3);
			setState(197);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FormatStringContext extends ParserRuleContext {
		public TerminalNode STRING() { return getToken(perlParser.STRING, 0); }
		public FormatStringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formatString; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterFormatString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitFormatString(this);
		}
	}

	public final FormatStringContext formatString() throws RecognitionException {
		FormatStringContext _localctx = new FormatStringContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_formatString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			match(STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintArgContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public PrintArgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printArg; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterPrintArg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitPrintArg(this);
		}
	}

	public final PrintArgContext printArg() throws RecognitionException {
		PrintArgContext _localctx = new PrintArgContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_printArg);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			match(T__6);
			setState(202);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class While_stmtContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(perlParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public While_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterWhile_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitWhile_stmt(this);
		}
	}

	public final While_stmtContext while_stmt() throws RecognitionException {
		While_stmtContext _localctx = new While_stmtContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_while_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(204);
			match(WHILE);
			setState(205);
			match(T__2);
			setState(206);
			expr(0);
			setState(207);
			match(T__3);
			setState(208);
			match(T__0);
			setState(209);
			compound_stmt();
			setState(210);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Until_stmtContext extends ParserRuleContext {
		public TerminalNode UNTIL() { return getToken(perlParser.UNTIL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public Until_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_until_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterUntil_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitUntil_stmt(this);
		}
	}

	public final Until_stmtContext until_stmt() throws RecognitionException {
		Until_stmtContext _localctx = new Until_stmtContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_until_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			match(UNTIL);
			setState(213);
			match(T__2);
			setState(214);
			expr(0);
			setState(215);
			match(T__3);
			setState(216);
			match(T__0);
			setState(217);
			compound_stmt();
			setState(218);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Do_while_stmtContext extends ParserRuleContext {
		public TerminalNode DO() { return getToken(perlParser.DO, 0); }
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public TerminalNode WHILE() { return getToken(perlParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Do_while_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_do_while_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterDo_while_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitDo_while_stmt(this);
		}
	}

	public final Do_while_stmtContext do_while_stmt() throws RecognitionException {
		Do_while_stmtContext _localctx = new Do_while_stmtContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_do_while_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(220);
			match(DO);
			setState(221);
			match(T__0);
			setState(222);
			compound_stmt();
			setState(223);
			match(T__1);
			setState(224);
			match(WHILE);
			setState(225);
			match(T__2);
			setState(226);
			expr(0);
			setState(227);
			match(T__3);
			setState(228);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_callContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(perlParser.IDENTIFIER, 0); }
		public ArgumentsContext arguments() {
			return getRuleContext(ArgumentsContext.class,0);
		}
		public Function_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterFunction_call(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitFunction_call(this);
		}
	}

	public final Function_callContext function_call() throws RecognitionException {
		Function_callContext _localctx = new Function_callContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_function_call);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(230);
			match(IDENTIFIER);
			setState(231);
			match(T__2);
			setState(232);
			arguments();
			setState(233);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArgumentsContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ArgumentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arguments; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterArguments(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitArguments(this);
		}
	}

	public final ArgumentsContext arguments() throws RecognitionException {
		ArgumentsContext _localctx = new ArgumentsContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_arguments);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << T__7) | (1L << IDENTIFIER) | (1L << INTEGER) | (1L << EXPONENT) | (1L << REAL) | (1L << BOOL) | (1L << ADD_OP) | (1L << SUB_OP))) != 0)) {
				{
				{
				setState(235);
				expr(0);
				}
				}
				setState(240);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public TypeSpec * type = nullptr;
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
			this.type = ctx.type;
		}
	}
	public static class VariableExprContext extends ExprContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public VariableExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterVariableExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitVariableExpr(this);
		}
	}
	public static class PowerExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Power_opContext power_op() {
			return getRuleContext(Power_opContext.class,0);
		}
		public PowerExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterPowerExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitPowerExpr(this);
		}
	}
	public static class MuldivExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Mul_div_opContext mul_div_op() {
			return getRuleContext(Mul_div_opContext.class,0);
		}
		public MuldivExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterMuldivExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitMuldivExpr(this);
		}
	}
	public static class BitopExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Bit_opContext bit_op() {
			return getRuleContext(Bit_opContext.class,0);
		}
		public BitopExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterBitopExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitBitopExpr(this);
		}
	}
	public static class SignednumExprContext extends ExprContext {
		public Signed_numberContext signed_number() {
			return getRuleContext(Signed_numberContext.class,0);
		}
		public SignednumExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterSignednumExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitSignednumExpr(this);
		}
	}
	public static class RelopExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Rel_opContext rel_op() {
			return getRuleContext(Rel_opContext.class,0);
		}
		public RelopExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterRelopExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitRelopExpr(this);
		}
	}
	public static class AddsubExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Add_sub_opContext add_sub_op() {
			return getRuleContext(Add_sub_opContext.class,0);
		}
		public AddsubExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterAddsubExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitAddsubExpr(this);
		}
	}
	public static class UnsignednumExprContext extends ExprContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public UnsignednumExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterUnsignednumExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitUnsignednumExpr(this);
		}
	}
	public static class ParenthExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParenthExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterParenthExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitParenthExpr(this);
		}
	}
	public static class FunctionExprContext extends ExprContext {
		public Function_callContext function_call() {
			return getRuleContext(Function_callContext.class,0);
		}
		public FunctionExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterFunctionExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitFunctionExpr(this);
		}
	}
	public static class ShiftExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Shift_opContext shift_op() {
			return getRuleContext(Shift_opContext.class,0);
		}
		public ShiftExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterShiftExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitShiftExpr(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 44;
		enterRecursionRule(_localctx, 44, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INTEGER:
			case EXPONENT:
			case REAL:
			case BOOL:
				{
				_localctx = new UnsignednumExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(242);
				number();
				}
				break;
			case ADD_OP:
			case SUB_OP:
				{
				_localctx = new SignednumExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(243);
				signed_number();
				}
				break;
			case T__7:
				{
				_localctx = new VariableExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(244);
				variable();
				}
				break;
			case T__2:
				{
				_localctx = new ParenthExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(245);
				match(T__2);
				setState(246);
				expr(0);
				setState(247);
				match(T__3);
				}
				break;
			case IDENTIFIER:
				{
				_localctx = new FunctionExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(249);
				function_call();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(278);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(276);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
					case 1:
						{
						_localctx = new PowerExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(252);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(253);
						power_op();
						setState(254);
						expr(12);
						}
						break;
					case 2:
						{
						_localctx = new MuldivExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(256);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(257);
						mul_div_op();
						setState(258);
						expr(11);
						}
						break;
					case 3:
						{
						_localctx = new AddsubExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(260);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(261);
						add_sub_op();
						setState(262);
						expr(10);
						}
						break;
					case 4:
						{
						_localctx = new RelopExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(264);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(265);
						rel_op();
						setState(266);
						expr(9);
						}
						break;
					case 5:
						{
						_localctx = new ShiftExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(268);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(269);
						shift_op();
						setState(270);
						expr(8);
						}
						break;
					case 6:
						{
						_localctx = new BitopExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(272);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(273);
						bit_op();
						setState(274);
						expr(7);
						}
						break;
					}
					} 
				}
				setState(280);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class VariableContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(perlParser.IDENTIFIER, 0); }
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterVariable(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitVariable(this);
		}
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_variable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(281);
			match(T__7);
			setState(282);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Power_opContext extends ParserRuleContext {
		public TerminalNode POWER_OP() { return getToken(perlParser.POWER_OP, 0); }
		public Power_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_power_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterPower_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitPower_op(this);
		}
	}

	public final Power_opContext power_op() throws RecognitionException {
		Power_opContext _localctx = new Power_opContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_power_op);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(284);
			match(POWER_OP);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mul_div_opContext extends ParserRuleContext {
		public TerminalNode MUL_OP() { return getToken(perlParser.MUL_OP, 0); }
		public TerminalNode DIV_OP() { return getToken(perlParser.DIV_OP, 0); }
		public TerminalNode MOD_OP() { return getToken(perlParser.MOD_OP, 0); }
		public Mul_div_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mul_div_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterMul_div_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitMul_div_op(this);
		}
	}

	public final Mul_div_opContext mul_div_op() throws RecognitionException {
		Mul_div_opContext _localctx = new Mul_div_opContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_mul_div_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(286);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL_OP) | (1L << DIV_OP) | (1L << MOD_OP))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Shift_opContext extends ParserRuleContext {
		public TerminalNode LShift_OP() { return getToken(perlParser.LShift_OP, 0); }
		public TerminalNode RShift_OP() { return getToken(perlParser.RShift_OP, 0); }
		public Shift_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shift_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterShift_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitShift_op(this);
		}
	}

	public final Shift_opContext shift_op() throws RecognitionException {
		Shift_opContext _localctx = new Shift_opContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_shift_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(288);
			_la = _input.LA(1);
			if ( !(_la==LShift_OP || _la==RShift_OP) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Add_sub_opContext extends ParserRuleContext {
		public TerminalNode ADD_OP() { return getToken(perlParser.ADD_OP, 0); }
		public TerminalNode SUB_OP() { return getToken(perlParser.SUB_OP, 0); }
		public Add_sub_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_add_sub_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterAdd_sub_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitAdd_sub_op(this);
		}
	}

	public final Add_sub_opContext add_sub_op() throws RecognitionException {
		Add_sub_opContext _localctx = new Add_sub_opContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_add_sub_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(290);
			_la = _input.LA(1);
			if ( !(_la==ADD_OP || _la==SUB_OP) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Rel_opContext extends ParserRuleContext {
		public TerminalNode EQ_OP() { return getToken(perlParser.EQ_OP, 0); }
		public TerminalNode NE_OP() { return getToken(perlParser.NE_OP, 0); }
		public TerminalNode LT_OP() { return getToken(perlParser.LT_OP, 0); }
		public TerminalNode LE_OP() { return getToken(perlParser.LE_OP, 0); }
		public TerminalNode GT_OP() { return getToken(perlParser.GT_OP, 0); }
		public TerminalNode GE_OP() { return getToken(perlParser.GE_OP, 0); }
		public Rel_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rel_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterRel_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitRel_op(this);
		}
	}

	public final Rel_opContext rel_op() throws RecognitionException {
		Rel_opContext _localctx = new Rel_opContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_rel_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(292);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQ_OP) | (1L << NE_OP) | (1L << LT_OP) | (1L << LE_OP) | (1L << GT_OP) | (1L << GE_OP))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Bit_opContext extends ParserRuleContext {
		public TerminalNode OR_OP() { return getToken(perlParser.OR_OP, 0); }
		public TerminalNode AND_OP() { return getToken(perlParser.AND_OP, 0); }
		public TerminalNode NAND_OP() { return getToken(perlParser.NAND_OP, 0); }
		public TerminalNode NOR_OP() { return getToken(perlParser.NOR_OP, 0); }
		public TerminalNode Neg_OP() { return getToken(perlParser.Neg_OP, 0); }
		public Bit_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bit_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterBit_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitBit_op(this);
		}
	}

	public final Bit_opContext bit_op() throws RecognitionException {
		Bit_opContext _localctx = new Bit_opContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_bit_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(294);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << OR_OP) | (1L << AND_OP) | (1L << NAND_OP) | (1L << NOR_OP) | (1L << Neg_OP))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SignContext extends ParserRuleContext {
		public TerminalNode ADD_OP() { return getToken(perlParser.ADD_OP, 0); }
		public TerminalNode SUB_OP() { return getToken(perlParser.SUB_OP, 0); }
		public SignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sign; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterSign(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitSign(this);
		}
	}

	public final SignContext sign() throws RecognitionException {
		SignContext _localctx = new SignContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_sign);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(296);
			_la = _input.LA(1);
			if ( !(_la==ADD_OP || _la==SUB_OP) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberContext extends ParserRuleContext {
		public TypeSpec * type = nullptr;
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	 
		public NumberContext() { }
		public void copyFrom(NumberContext ctx) {
			super.copyFrom(ctx);
			this.type = ctx.type;
		}
	}
	public static class INTConstContext extends NumberContext {
		public TerminalNode INTEGER() { return getToken(perlParser.INTEGER, 0); }
		public INTConstContext(NumberContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterINTConst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitINTConst(this);
		}
	}
	public static class ExponentContext extends NumberContext {
		public TerminalNode EXPONENT() { return getToken(perlParser.EXPONENT, 0); }
		public ExponentContext(NumberContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterExponent(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitExponent(this);
		}
	}
	public static class BOOLConstContext extends NumberContext {
		public TerminalNode BOOL() { return getToken(perlParser.BOOL, 0); }
		public BOOLConstContext(NumberContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterBOOLConst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitBOOLConst(this);
		}
	}
	public static class FloatConstContext extends NumberContext {
		public TerminalNode REAL() { return getToken(perlParser.REAL, 0); }
		public FloatConstContext(NumberContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterFloatConst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitFloatConst(this);
		}
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_number);
		try {
			setState(302);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INTEGER:
				_localctx = new INTConstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(298);
				match(INTEGER);
				}
				break;
			case REAL:
				_localctx = new FloatConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(299);
				match(REAL);
				}
				break;
			case EXPONENT:
				_localctx = new ExponentContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(300);
				match(EXPONENT);
				}
				break;
			case BOOL:
				_localctx = new BOOLConstContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(301);
				match(BOOL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Signed_numberContext extends ParserRuleContext {
		public SignContext sign() {
			return getRuleContext(SignContext.class,0);
		}
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public Signed_numberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signed_number; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).enterSigned_number(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof perlListener ) ((perlListener)listener).exitSigned_number(this);
		}
	}

	public final Signed_numberContext signed_number() throws RecognitionException {
		Signed_numberContext _localctx = new Signed_numberContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_signed_number);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(304);
			sign();
			setState(305);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 22:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 11);
		case 1:
			return precpred(_ctx, 10);
		case 2:
			return precpred(_ctx, 9);
		case 3:
			return precpred(_ctx, 8);
		case 4:
			return precpred(_ctx, 7);
		case 5:
			return precpred(_ctx, 6);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\64\u0136\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\3\2\3\2\3\2\3\2\3\3\3\3\3\3\7\3L\n\3\f\3\16\3O\13\3\3\3\7"+
		"\3R\n\3\f\3\16\3U\13\3\3\3\3\3\3\4\7\4Z\n\4\f\4\16\4]\13\4\3\5\3\5\7\5"+
		"a\n\5\f\5\16\5d\13\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\7\b|\n\b\f\b\16\b\177\13\b\3\t"+
		"\3\t\3\t\3\t\3\n\6\n\u0086\n\n\r\n\16\n\u0087\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\5\13\u0092\n\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3"+
		"\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\3\17\3\17\7\17\u00b2\n\17\f\17\16\17\u00b5\13"+
		"\17\3\17\3\17\3\17\3\17\3\17\5\17\u00bc\n\17\3\20\3\20\3\20\3\20\7\20"+
		"\u00c2\n\20\f\20\16\20\u00c5\13\20\3\20\3\20\3\20\3\21\3\21\3\22\3\22"+
		"\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\26"+
		"\3\26\3\26\3\26\3\26\3\27\7\27\u00ef\n\27\f\27\16\27\u00f2\13\27\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u00fd\n\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\7\30\u0117\n\30\f\30\16\30\u011a\13"+
		"\30\3\31\3\31\3\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36\3\36\3"+
		"\37\3\37\3 \3 \3!\3!\3!\3!\5!\u0131\n!\3\"\3\"\3\"\3\"\2\3.#\2\4\6\b\n"+
		"\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@B\2\7\4\2\33\34"+
		"  \3\2()\3\2\35\36\3\2\"\'\3\2*.\2\u0133\2D\3\2\2\2\4H\3\2\2\2\6[\3\2"+
		"\2\2\bb\3\2\2\2\ne\3\2\2\2\fp\3\2\2\2\16}\3\2\2\2\20\u0080\3\2\2\2\22"+
		"\u0085\3\2\2\2\24\u0091\3\2\2\2\26\u0093\3\2\2\2\30\u0098\3\2\2\2\32\u009c"+
		"\3\2\2\2\34\u00a2\3\2\2\2\36\u00bd\3\2\2\2 \u00c9\3\2\2\2\"\u00cb\3\2"+
		"\2\2$\u00ce\3\2\2\2&\u00d6\3\2\2\2(\u00de\3\2\2\2*\u00e8\3\2\2\2,\u00f0"+
		"\3\2\2\2.\u00fc\3\2\2\2\60\u011b\3\2\2\2\62\u011e\3\2\2\2\64\u0120\3\2"+
		"\2\2\66\u0122\3\2\2\28\u0124\3\2\2\2:\u0126\3\2\2\2<\u0128\3\2\2\2>\u012a"+
		"\3\2\2\2@\u0130\3\2\2\2B\u0132\3\2\2\2DE\5\6\4\2EF\5\b\5\2FG\5\4\3\2G"+
		"\3\3\2\2\2HI\7\22\2\2IM\7\3\2\2JL\5\22\n\2KJ\3\2\2\2LO\3\2\2\2MK\3\2\2"+
		"\2MN\3\2\2\2NS\3\2\2\2OM\3\2\2\2PR\7/\2\2QP\3\2\2\2RU\3\2\2\2SQ\3\2\2"+
		"\2ST\3\2\2\2TV\3\2\2\2US\3\2\2\2VW\7\4\2\2W\5\3\2\2\2XZ\5\20\t\2YX\3\2"+
		"\2\2Z]\3\2\2\2[Y\3\2\2\2[\\\3\2\2\2\\\7\3\2\2\2][\3\2\2\2^a\5\n\6\2_a"+
		"\5\f\7\2`^\3\2\2\2`_\3\2\2\2ad\3\2\2\2b`\3\2\2\2bc\3\2\2\2c\t\3\2\2\2"+
		"db\3\2\2\2ef\7\26\2\2fg\7\5\2\2gh\5\16\b\2hi\7\6\2\2ij\7\13\2\2jk\7\3"+
		"\2\2kl\5\6\4\2lm\5\22\n\2mn\7\4\2\2no\7\7\2\2o\13\3\2\2\2pq\7\26\2\2q"+
		"r\7\5\2\2rs\5\16\b\2st\7\6\2\2tu\7\3\2\2uv\5\6\4\2vw\5\22\n\2wx\7\4\2"+
		"\2xy\7\7\2\2y\r\3\2\2\2z|\5\20\t\2{z\3\2\2\2|\177\3\2\2\2}{\3\2\2\2}~"+
		"\3\2\2\2~\17\3\2\2\2\177}\3\2\2\2\u0080\u0081\7\13\2\2\u0081\u0082\5\60"+
		"\31\2\u0082\u0083\7\7\2\2\u0083\21\3\2\2\2\u0084\u0086\5\24\13\2\u0085"+
		"\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2"+
		"\2\2\u0088\23\3\2\2\2\u0089\u0092\5\26\f\2\u008a\u0092\5\34\17\2\u008b"+
		"\u0092\5$\23\2\u008c\u0092\5&\24\2\u008d\u0092\5(\25\2\u008e\u0092\5\36"+
		"\20\2\u008f\u0092\5\30\r\2\u0090\u0092\5\32\16\2\u0091\u0089\3\2\2\2\u0091"+
		"\u008a\3\2\2\2\u0091\u008b\3\2\2\2\u0091\u008c\3\2\2\2\u0091\u008d\3\2"+
		"\2\2\u0091\u008e\3\2\2\2\u0091\u008f\3\2\2\2\u0091\u0090\3\2\2\2\u0092"+
		"\25\3\2\2\2\u0093\u0094\5\60\31\2\u0094\u0095\7!\2\2\u0095\u0096\5.\30"+
		"\2\u0096\u0097\7\7\2\2\u0097\27\3\2\2\2\u0098\u0099\7\b\2\2\u0099\u009a"+
		"\5.\30\2\u009a\u009b\7\7\2\2\u009b\31\3\2\2\2\u009c\u009d\7\26\2\2\u009d"+
		"\u009e\7\5\2\2\u009e\u009f\5,\27\2\u009f\u00a0\7\6\2\2\u00a0\u00a1\7\7"+
		"\2\2\u00a1\33\3\2\2\2\u00a2\u00a3\7\f\2\2\u00a3\u00a4\7\5\2\2\u00a4\u00a5"+
		"\5.\30\2\u00a5\u00a6\7\6\2\2\u00a6\u00a7\7\3\2\2\u00a7\u00a8\5\22\n\2"+
		"\u00a8\u00b3\7\4\2\2\u00a9\u00aa\7\16\2\2\u00aa\u00ab\7\5\2\2\u00ab\u00ac"+
		"\5.\30\2\u00ac\u00ad\7\6\2\2\u00ad\u00ae\7\3\2\2\u00ae\u00af\5\22\n\2"+
		"\u00af\u00b0\7\4\2\2\u00b0\u00b2\3\2\2\2\u00b1\u00a9\3\2\2\2\u00b2\u00b5"+
		"\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b3\u00b4\3\2\2\2\u00b4\u00bb\3\2\2\2\u00b5"+
		"\u00b3\3\2\2\2\u00b6\u00b7\7\r\2\2\u00b7\u00b8\7\3\2\2\u00b8\u00b9\5\22"+
		"\n\2\u00b9\u00ba\7\4\2\2\u00ba\u00bc\3\2\2\2\u00bb\u00b6\3\2\2\2\u00bb"+
		"\u00bc\3\2\2\2\u00bc\35\3\2\2\2\u00bd\u00be\7\25\2\2\u00be\u00bf\7\5\2"+
		"\2\u00bf\u00c3\5 \21\2\u00c0\u00c2\5\"\22\2\u00c1\u00c0\3\2\2\2\u00c2"+
		"\u00c5\3\2\2\2\u00c3\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c6\3\2"+
		"\2\2\u00c5\u00c3\3\2\2\2\u00c6\u00c7\7\6\2\2\u00c7\u00c8\7\7\2\2\u00c8"+
		"\37\3\2\2\2\u00c9\u00ca\7\62\2\2\u00ca!\3\2\2\2\u00cb\u00cc\7\t\2\2\u00cc"+
		"\u00cd\5.\30\2\u00cd#\3\2\2\2\u00ce\u00cf\7\17\2\2\u00cf\u00d0\7\5\2\2"+
		"\u00d0\u00d1\5.\30\2\u00d1\u00d2\7\6\2\2\u00d2\u00d3\7\3\2\2\u00d3\u00d4"+
		"\5\22\n\2\u00d4\u00d5\7\4\2\2\u00d5%\3\2\2\2\u00d6\u00d7\7\20\2\2\u00d7"+
		"\u00d8\7\5\2\2\u00d8\u00d9\5.\30\2\u00d9\u00da\7\6\2\2\u00da\u00db\7\3"+
		"\2\2\u00db\u00dc\5\22\n\2\u00dc\u00dd\7\4\2\2\u00dd\'\3\2\2\2\u00de\u00df"+
		"\7\21\2\2\u00df\u00e0\7\3\2\2\u00e0\u00e1\5\22\n\2\u00e1\u00e2\7\4\2\2"+
		"\u00e2\u00e3\7\17\2\2\u00e3\u00e4\7\5\2\2\u00e4\u00e5\5.\30\2\u00e5\u00e6"+
		"\7\6\2\2\u00e6\u00e7\7\7\2\2\u00e7)\3\2\2\2\u00e8\u00e9\7\26\2\2\u00e9"+
		"\u00ea\7\5\2\2\u00ea\u00eb\5,\27\2\u00eb\u00ec\7\6\2\2\u00ec+\3\2\2\2"+
		"\u00ed\u00ef\5.\30\2\u00ee\u00ed\3\2\2\2\u00ef\u00f2\3\2\2\2\u00f0\u00ee"+
		"\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1-\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f3"+
		"\u00f4\b\30\1\2\u00f4\u00fd\5@!\2\u00f5\u00fd\5B\"\2\u00f6\u00fd\5\60"+
		"\31\2\u00f7\u00f8\7\5\2\2\u00f8\u00f9\5.\30\2\u00f9\u00fa\7\6\2\2\u00fa"+
		"\u00fd\3\2\2\2\u00fb\u00fd\5*\26\2\u00fc\u00f3\3\2\2\2\u00fc\u00f5\3\2"+
		"\2\2\u00fc\u00f6\3\2\2\2\u00fc\u00f7\3\2\2\2\u00fc\u00fb\3\2\2\2\u00fd"+
		"\u0118\3\2\2\2\u00fe\u00ff\f\r\2\2\u00ff\u0100\5\62\32\2\u0100\u0101\5"+
		".\30\16\u0101\u0117\3\2\2\2\u0102\u0103\f\f\2\2\u0103\u0104\5\64\33\2"+
		"\u0104\u0105\5.\30\r\u0105\u0117\3\2\2\2\u0106\u0107\f\13\2\2\u0107\u0108"+
		"\58\35\2\u0108\u0109\5.\30\f\u0109\u0117\3\2\2\2\u010a\u010b\f\n\2\2\u010b"+
		"\u010c\5:\36\2\u010c\u010d\5.\30\13\u010d\u0117\3\2\2\2\u010e\u010f\f"+
		"\t\2\2\u010f\u0110\5\66\34\2\u0110\u0111\5.\30\n\u0111\u0117\3\2\2\2\u0112"+
		"\u0113\f\b\2\2\u0113\u0114\5<\37\2\u0114\u0115\5.\30\t\u0115\u0117\3\2"+
		"\2\2\u0116\u00fe\3\2\2\2\u0116\u0102\3\2\2\2\u0116\u0106\3\2\2\2\u0116"+
		"\u010a\3\2\2\2\u0116\u010e\3\2\2\2\u0116\u0112\3\2\2\2\u0117\u011a\3\2"+
		"\2\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119/\3\2\2\2\u011a\u0118"+
		"\3\2\2\2\u011b\u011c\7\n\2\2\u011c\u011d\7\26\2\2\u011d\61\3\2\2\2\u011e"+
		"\u011f\7\37\2\2\u011f\63\3\2\2\2\u0120\u0121\t\2\2\2\u0121\65\3\2\2\2"+
		"\u0122\u0123\t\3\2\2\u0123\67\3\2\2\2\u0124\u0125\t\4\2\2\u01259\3\2\2"+
		"\2\u0126\u0127\t\5\2\2\u0127;\3\2\2\2\u0128\u0129\t\6\2\2\u0129=\3\2\2"+
		"\2\u012a\u012b\t\4\2\2\u012b?\3\2\2\2\u012c\u0131\7\27\2\2\u012d\u0131"+
		"\7\31\2\2\u012e\u0131\7\30\2\2\u012f\u0131\7\32\2\2\u0130\u012c\3\2\2"+
		"\2\u0130\u012d\3\2\2\2\u0130\u012e\3\2\2\2\u0130\u012f\3\2\2\2\u0131A"+
		"\3\2\2\2\u0132\u0133\5> \2\u0133\u0134\5@!\2\u0134C\3\2\2\2\22MS[`b}\u0087"+
		"\u0091\u00b3\u00bb\u00c3\u00f0\u00fc\u0116\u0118\u0130";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
// Generated from perl.g4 by ANTLR 4.8

#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class perlLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "TYPEID", 
			"IF", "ELSE", "ELSE_IF", "WHILE", "UNTIL", "DO", "MAIN", "TRUE", "FALSE", 
			"PRINTF", "IDENTIFIER", "INTEGER", "EXPONENT", "REAL", "BOOL", "MUL_OP", 
			"DIV_OP", "ADD_OP", "SUB_OP", "POWER_OP", "MOD_OP", "ASSIGN", "EQ_OP", 
			"NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "LShift_OP", "RShift_OP", 
			"OR_OP", "AND_OP", "NAND_OP", "NOR_OP", "Neg_OP", "NEWLINE", "WS", "QUOTE", 
			"STRING", "BLOCK_COMMENT", "LINE_COMMENT", "STRING_CHAR"
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


	public perlLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "perl.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\64\u0139\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64"+
		"\t\64\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3"+
		"\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24\3"+
		"\24\3\25\3\25\7\25\u00b8\n\25\f\25\16\25\u00bb\13\25\3\26\6\26\u00be\n"+
		"\26\r\26\16\26\u00bf\3\27\3\27\3\27\3\27\3\27\5\27\u00c7\n\27\3\30\3\30"+
		"\3\30\3\30\3\31\3\31\5\31\u00cf\n\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35"+
		"\3\35\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3!\3\"\3\"\3\"\3#\3#\3$\3$\3$\3"+
		"%\3%\3&\3&\3&\3\'\3\'\3\'\3(\3(\3(\3)\3)\3*\3*\3+\3+\3+\3,\3,\3,\3-\3"+
		"-\3-\3.\5.\u0103\n.\3.\3.\3.\3.\3/\6/\u010a\n/\r/\16/\u010b\3/\3/\3\60"+
		"\3\60\3\61\3\61\7\61\u0114\n\61\f\61\16\61\u0117\13\61\3\61\3\61\3\62"+
		"\3\62\3\62\3\62\7\62\u011f\n\62\f\62\16\62\u0122\13\62\3\62\3\62\3\62"+
		"\3\62\3\62\3\63\3\63\3\63\3\63\7\63\u012d\n\63\f\63\16\63\u0130\13\63"+
		"\3\63\3\63\3\64\3\64\3\64\3\64\5\64\u0138\n\64\3\u0120\2\65\3\3\5\4\7"+
		"\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22"+
		"#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C"+
		"#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\2\3\2\t\5\2ddhhkk\4\2"+
		"C\\c|\6\2\62;C\\aac|\3\2\62;\4\2\13\13\"\"\4\2\f\f\17\17\3\2))\2\u0141"+
		"\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2"+
		"\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2"+
		"\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2"+
		"\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3"+
		"\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2"+
		"\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2"+
		"U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3"+
		"\2\2\2\2c\3\2\2\2\2e\3\2\2\2\3i\3\2\2\2\5k\3\2\2\2\7m\3\2\2\2\to\3\2\2"+
		"\2\13q\3\2\2\2\rs\3\2\2\2\17z\3\2\2\2\21|\3\2\2\2\23~\3\2\2\2\25\u0080"+
		"\3\2\2\2\27\u0083\3\2\2\2\31\u0088\3\2\2\2\33\u008f\3\2\2\2\35\u0095\3"+
		"\2\2\2\37\u009b\3\2\2\2!\u009e\3\2\2\2#\u00a3\3\2\2\2%\u00a8\3\2\2\2\'"+
		"\u00ae\3\2\2\2)\u00b5\3\2\2\2+\u00bd\3\2\2\2-\u00c6\3\2\2\2/\u00c8\3\2"+
		"\2\2\61\u00ce\3\2\2\2\63\u00d0\3\2\2\2\65\u00d2\3\2\2\2\67\u00d4\3\2\2"+
		"\29\u00d6\3\2\2\2;\u00d8\3\2\2\2=\u00da\3\2\2\2?\u00dc\3\2\2\2A\u00de"+
		"\3\2\2\2C\u00e1\3\2\2\2E\u00e4\3\2\2\2G\u00e6\3\2\2\2I\u00e9\3\2\2\2K"+
		"\u00eb\3\2\2\2M\u00ee\3\2\2\2O\u00f1\3\2\2\2Q\u00f4\3\2\2\2S\u00f6\3\2"+
		"\2\2U\u00f8\3\2\2\2W\u00fb\3\2\2\2Y\u00fe\3\2\2\2[\u0102\3\2\2\2]\u0109"+
		"\3\2\2\2_\u010f\3\2\2\2a\u0111\3\2\2\2c\u011a\3\2\2\2e\u0128\3\2\2\2g"+
		"\u0137\3\2\2\2ij\7}\2\2j\4\3\2\2\2kl\7\177\2\2l\6\3\2\2\2mn\7*\2\2n\b"+
		"\3\2\2\2op\7+\2\2p\n\3\2\2\2qr\7=\2\2r\f\3\2\2\2st\7t\2\2tu\7g\2\2uv\7"+
		"v\2\2vw\7w\2\2wx\7t\2\2xy\7p\2\2y\16\3\2\2\2z{\7.\2\2{\20\3\2\2\2|}\7"+
		"&\2\2}\22\3\2\2\2~\177\t\2\2\2\177\24\3\2\2\2\u0080\u0081\7k\2\2\u0081"+
		"\u0082\7h\2\2\u0082\26\3\2\2\2\u0083\u0084\7g\2\2\u0084\u0085\7n\2\2\u0085"+
		"\u0086\7u\2\2\u0086\u0087\7g\2\2\u0087\30\3\2\2\2\u0088\u0089\7g\2\2\u0089"+
		"\u008a\7n\2\2\u008a\u008b\7u\2\2\u008b\u008c\7g\2\2\u008c\u008d\7k\2\2"+
		"\u008d\u008e\7h\2\2\u008e\32\3\2\2\2\u008f\u0090\7y\2\2\u0090\u0091\7"+
		"j\2\2\u0091\u0092\7k\2\2\u0092\u0093\7n\2\2\u0093\u0094\7g\2\2\u0094\34"+
		"\3\2\2\2\u0095\u0096\7w\2\2\u0096\u0097\7p\2\2\u0097\u0098\7v\2\2\u0098"+
		"\u0099\7k\2\2\u0099\u009a\7n\2\2\u009a\36\3\2\2\2\u009b\u009c\7f\2\2\u009c"+
		"\u009d\7q\2\2\u009d \3\2\2\2\u009e\u009f\7o\2\2\u009f\u00a0\7c\2\2\u00a0"+
		"\u00a1\7k\2\2\u00a1\u00a2\7p\2\2\u00a2\"\3\2\2\2\u00a3\u00a4\7V\2\2\u00a4"+
		"\u00a5\7T\2\2\u00a5\u00a6\7W\2\2\u00a6\u00a7\7G\2\2\u00a7$\3\2\2\2\u00a8"+
		"\u00a9\7H\2\2\u00a9\u00aa\7C\2\2\u00aa\u00ab\7N\2\2\u00ab\u00ac\7U\2\2"+
		"\u00ac\u00ad\7G\2\2\u00ad&\3\2\2\2\u00ae\u00af\7r\2\2\u00af\u00b0\7t\2"+
		"\2\u00b0\u00b1\7k\2\2\u00b1\u00b2\7p\2\2\u00b2\u00b3\7v\2\2\u00b3\u00b4"+
		"\7h\2\2\u00b4(\3\2\2\2\u00b5\u00b9\t\3\2\2\u00b6\u00b8\t\4\2\2\u00b7\u00b6"+
		"\3\2\2\2\u00b8\u00bb\3\2\2\2\u00b9\u00b7\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba"+
		"*\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bc\u00be\t\5\2\2\u00bd\u00bc\3\2\2\2"+
		"\u00be\u00bf\3\2\2\2\u00bf\u00bd\3\2\2\2\u00bf\u00c0\3\2\2\2\u00c0,\3"+
		"\2\2\2\u00c1\u00c2\5+\26\2\u00c2\u00c3\5;\36\2\u00c3\u00c4\5+\26\2\u00c4"+
		"\u00c7\3\2\2\2\u00c5\u00c7\5+\26\2\u00c6\u00c1\3\2\2\2\u00c6\u00c5\3\2"+
		"\2\2\u00c7.\3\2\2\2\u00c8\u00c9\5+\26\2\u00c9\u00ca\7\60\2\2\u00ca\u00cb"+
		"\5+\26\2\u00cb\60\3\2\2\2\u00cc\u00cf\5#\22\2\u00cd\u00cf\5%\23\2\u00ce"+
		"\u00cc\3\2\2\2\u00ce\u00cd\3\2\2\2\u00cf\62\3\2\2\2\u00d0\u00d1\7,\2\2"+
		"\u00d1\64\3\2\2\2\u00d2\u00d3\7\61\2\2\u00d3\66\3\2\2\2\u00d4\u00d5\7"+
		"-\2\2\u00d58\3\2\2\2\u00d6\u00d7\7/\2\2\u00d7:\3\2\2\2\u00d8\u00d9\7`"+
		"\2\2\u00d9<\3\2\2\2\u00da\u00db\7\'\2\2\u00db>\3\2\2\2\u00dc\u00dd\7?"+
		"\2\2\u00dd@\3\2\2\2\u00de\u00df\7?\2\2\u00df\u00e0\7?\2\2\u00e0B\3\2\2"+
		"\2\u00e1\u00e2\7#\2\2\u00e2\u00e3\7?\2\2\u00e3D\3\2\2\2\u00e4\u00e5\7"+
		">\2\2\u00e5F\3\2\2\2\u00e6\u00e7\7>\2\2\u00e7\u00e8\7?\2\2\u00e8H\3\2"+
		"\2\2\u00e9\u00ea\7@\2\2\u00eaJ\3\2\2\2\u00eb\u00ec\7@\2\2\u00ec\u00ed"+
		"\7?\2\2\u00edL\3\2\2\2\u00ee\u00ef\7>\2\2\u00ef\u00f0\7>\2\2\u00f0N\3"+
		"\2\2\2\u00f1\u00f2\7@\2\2\u00f2\u00f3\7@\2\2\u00f3P\3\2\2\2\u00f4\u00f5"+
		"\7~\2\2\u00f5R\3\2\2\2\u00f6\u00f7\7(\2\2\u00f7T\3\2\2\2\u00f8\u00f9\7"+
		"\61\2\2\u00f9\u00fa\7(\2\2\u00faV\3\2\2\2\u00fb\u00fc\7\61\2\2\u00fc\u00fd"+
		"\7~\2\2\u00fdX\3\2\2\2\u00fe\u00ff\7\61\2\2\u00ff\u0100\7\u0080\2\2\u0100"+
		"Z\3\2\2\2\u0101\u0103\7\17\2\2\u0102\u0101\3\2\2\2\u0102\u0103\3\2\2\2"+
		"\u0103\u0104\3\2\2\2\u0104\u0105\7\f\2\2\u0105\u0106\3\2\2\2\u0106\u0107"+
		"\b.\2\2\u0107\\\3\2\2\2\u0108\u010a\t\6\2\2\u0109\u0108\3\2\2\2\u010a"+
		"\u010b\3\2\2\2\u010b\u0109\3\2\2\2\u010b\u010c\3\2\2\2\u010c\u010d\3\2"+
		"\2\2\u010d\u010e\b/\2\2\u010e^\3\2\2\2\u010f\u0110\7)\2\2\u0110`\3\2\2"+
		"\2\u0111\u0115\5_\60\2\u0112\u0114\5g\64\2\u0113\u0112\3\2\2\2\u0114\u0117"+
		"\3\2\2\2\u0115\u0113\3\2\2\2\u0115\u0116\3\2\2\2\u0116\u0118\3\2\2\2\u0117"+
		"\u0115\3\2\2\2\u0118\u0119\5_\60\2\u0119b\3\2\2\2\u011a\u011b\7\61\2\2"+
		"\u011b\u011c\7,\2\2\u011c\u0120\3\2\2\2\u011d\u011f\13\2\2\2\u011e\u011d"+
		"\3\2\2\2\u011f\u0122\3\2\2\2\u0120\u0121\3\2\2\2\u0120\u011e\3\2\2\2\u0121"+
		"\u0123\3\2\2\2\u0122\u0120\3\2\2\2\u0123\u0124\7,\2\2\u0124\u0125\7\61"+
		"\2\2\u0125\u0126\3\2\2\2\u0126\u0127\b\62\3\2\u0127d\3\2\2\2\u0128\u0129"+
		"\7\61\2\2\u0129\u012a\7\61\2\2\u012a\u012e\3\2\2\2\u012b\u012d\n\7\2\2"+
		"\u012c\u012b\3\2\2\2\u012d\u0130\3\2\2\2\u012e\u012c\3\2\2\2\u012e\u012f"+
		"\3\2\2\2\u012f\u0131\3\2\2\2\u0130\u012e\3\2\2\2\u0131\u0132\b\63\3\2"+
		"\u0132f\3\2\2\2\u0133\u0134\5_\60\2\u0134\u0135\5_\60\2\u0135\u0138\3"+
		"\2\2\2\u0136\u0138\n\b\2\2\u0137\u0133\3\2\2\2\u0137\u0136\3\2\2\2\u0138"+
		"h\3\2\2\2\r\2\u00b9\u00bf\u00c6\u00ce\u0102\u010b\u0115\u0120\u012e\u0137"+
		"\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
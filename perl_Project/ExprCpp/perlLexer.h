
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;


// Generated from perl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  perlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, TYPEID = 9, IF = 10, ELSE = 11, ELSE_IF = 12, WHILE = 13, 
    UNTIL = 14, DO = 15, MAIN = 16, TRUE = 17, FALSE = 18, PRINTF = 19, 
    IDENTIFIER = 20, INTEGER = 21, EXPONENT = 22, REAL = 23, BOOL = 24, 
    MUL_OP = 25, DIV_OP = 26, ADD_OP = 27, SUB_OP = 28, POWER_OP = 29, MOD_OP = 30, 
    ASSIGN = 31, EQ_OP = 32, NE_OP = 33, LT_OP = 34, LE_OP = 35, GT_OP = 36, 
    GE_OP = 37, LShift_OP = 38, RShift_OP = 39, OR_OP = 40, AND_OP = 41, 
    NAND_OP = 42, NOR_OP = 43, Neg_OP = 44, NEWLINE = 45, WS = 46, QUOTE = 47, 
    STRING = 48, BLOCK_COMMENT = 49, LINE_COMMENT = 50
  };

  perlLexer(antlr4::CharStream *input);
  ~perlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


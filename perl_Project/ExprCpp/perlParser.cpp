
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/icodeimpl/ICodeImpl.h"
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;


// Generated from perl.g4 by ANTLR 4.8


#include "perlListener.h"

#include "perlParser.h"


using namespace antlrcpp;
using namespace antlr4;

perlParser::perlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

perlParser::~perlParser() {
  delete _interpreter;
}

std::string perlParser::getGrammarFileName() const {
  return "perl.g4";
}

const std::vector<std::string>& perlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& perlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

perlParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

perlParser::DeclarationsContext* perlParser::ProgramContext::declarations() {
  return getRuleContext<perlParser::DeclarationsContext>(0);
}

perlParser::Method_delcarationsContext* perlParser::ProgramContext::method_delcarations() {
  return getRuleContext<perlParser::Method_delcarationsContext>(0);
}

perlParser::Main_methodContext* perlParser::ProgramContext::main_method() {
  return getRuleContext<perlParser::Main_methodContext>(0);
}


size_t perlParser::ProgramContext::getRuleIndex() const {
  return perlParser::RuleProgram;
}

void perlParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void perlParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

perlParser::ProgramContext* perlParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, perlParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    declarations();
    setState(67);
    method_delcarations();
    setState(68);
    main_method();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Main_methodContext ------------------------------------------------------------------

perlParser::Main_methodContext::Main_methodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Main_methodContext::MAIN() {
  return getToken(perlParser::MAIN, 0);
}

std::vector<perlParser::Compound_stmtContext *> perlParser::Main_methodContext::compound_stmt() {
  return getRuleContexts<perlParser::Compound_stmtContext>();
}

perlParser::Compound_stmtContext* perlParser::Main_methodContext::compound_stmt(size_t i) {
  return getRuleContext<perlParser::Compound_stmtContext>(i);
}

std::vector<tree::TerminalNode *> perlParser::Main_methodContext::NEWLINE() {
  return getTokens(perlParser::NEWLINE);
}

tree::TerminalNode* perlParser::Main_methodContext::NEWLINE(size_t i) {
  return getToken(perlParser::NEWLINE, i);
}


size_t perlParser::Main_methodContext::getRuleIndex() const {
  return perlParser::RuleMain_method;
}

void perlParser::Main_methodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMain_method(this);
}

void perlParser::Main_methodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMain_method(this);
}

perlParser::Main_methodContext* perlParser::main_method() {
  Main_methodContext *_localctx = _tracker.createInstance<Main_methodContext>(_ctx, getState());
  enterRule(_localctx, 2, perlParser::RuleMain_method);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(perlParser::MAIN);
    setState(71);
    match(perlParser::T__0);
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << perlParser::T__5)
      | (1ULL << perlParser::T__7)
      | (1ULL << perlParser::IF)
      | (1ULL << perlParser::WHILE)
      | (1ULL << perlParser::UNTIL)
      | (1ULL << perlParser::DO)
      | (1ULL << perlParser::PRINTF)
      | (1ULL << perlParser::IDENTIFIER))) != 0)) {
      setState(72);
      compound_stmt();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(81);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == perlParser::NEWLINE) {
      setState(78);
      match(perlParser::NEWLINE);
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(84);
    match(perlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

perlParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<perlParser::Variable_delcarationContext *> perlParser::DeclarationsContext::variable_delcaration() {
  return getRuleContexts<perlParser::Variable_delcarationContext>();
}

perlParser::Variable_delcarationContext* perlParser::DeclarationsContext::variable_delcaration(size_t i) {
  return getRuleContext<perlParser::Variable_delcarationContext>(i);
}


size_t perlParser::DeclarationsContext::getRuleIndex() const {
  return perlParser::RuleDeclarations;
}

void perlParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void perlParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}

perlParser::DeclarationsContext* perlParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 4, perlParser::RuleDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == perlParser::TYPEID) {
      setState(86);
      variable_delcaration();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_delcarationsContext ------------------------------------------------------------------

perlParser::Method_delcarationsContext::Method_delcarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<perlParser::FunctionContext *> perlParser::Method_delcarationsContext::function() {
  return getRuleContexts<perlParser::FunctionContext>();
}

perlParser::FunctionContext* perlParser::Method_delcarationsContext::function(size_t i) {
  return getRuleContext<perlParser::FunctionContext>(i);
}

std::vector<perlParser::ProcedureContext *> perlParser::Method_delcarationsContext::procedure() {
  return getRuleContexts<perlParser::ProcedureContext>();
}

perlParser::ProcedureContext* perlParser::Method_delcarationsContext::procedure(size_t i) {
  return getRuleContext<perlParser::ProcedureContext>(i);
}


size_t perlParser::Method_delcarationsContext::getRuleIndex() const {
  return perlParser::RuleMethod_delcarations;
}

void perlParser::Method_delcarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_delcarations(this);
}

void perlParser::Method_delcarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_delcarations(this);
}

perlParser::Method_delcarationsContext* perlParser::method_delcarations() {
  Method_delcarationsContext *_localctx = _tracker.createInstance<Method_delcarationsContext>(_ctx, getState());
  enterRule(_localctx, 6, perlParser::RuleMethod_delcarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == perlParser::IDENTIFIER) {
      setState(94);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(92);
        function();
        break;
      }

      case 2: {
        setState(93);
        procedure();
        break;
      }

      }
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

perlParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::FunctionContext::IDENTIFIER() {
  return getToken(perlParser::IDENTIFIER, 0);
}

perlParser::ParametersContext* perlParser::FunctionContext::parameters() {
  return getRuleContext<perlParser::ParametersContext>(0);
}

tree::TerminalNode* perlParser::FunctionContext::TYPEID() {
  return getToken(perlParser::TYPEID, 0);
}

perlParser::DeclarationsContext* perlParser::FunctionContext::declarations() {
  return getRuleContext<perlParser::DeclarationsContext>(0);
}

perlParser::Compound_stmtContext* perlParser::FunctionContext::compound_stmt() {
  return getRuleContext<perlParser::Compound_stmtContext>(0);
}


size_t perlParser::FunctionContext::getRuleIndex() const {
  return perlParser::RuleFunction;
}

void perlParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void perlParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

perlParser::FunctionContext* perlParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 8, perlParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(perlParser::IDENTIFIER);
    setState(100);
    match(perlParser::T__2);
    setState(101);
    parameters();
    setState(102);
    match(perlParser::T__3);
    setState(103);
    match(perlParser::TYPEID);
    setState(104);
    match(perlParser::T__0);
    setState(105);
    declarations();
    setState(106);
    compound_stmt();
    setState(107);
    match(perlParser::T__1);
    setState(108);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

perlParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::ProcedureContext::IDENTIFIER() {
  return getToken(perlParser::IDENTIFIER, 0);
}

perlParser::ParametersContext* perlParser::ProcedureContext::parameters() {
  return getRuleContext<perlParser::ParametersContext>(0);
}

perlParser::DeclarationsContext* perlParser::ProcedureContext::declarations() {
  return getRuleContext<perlParser::DeclarationsContext>(0);
}

perlParser::Compound_stmtContext* perlParser::ProcedureContext::compound_stmt() {
  return getRuleContext<perlParser::Compound_stmtContext>(0);
}


size_t perlParser::ProcedureContext::getRuleIndex() const {
  return perlParser::RuleProcedure;
}

void perlParser::ProcedureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedure(this);
}

void perlParser::ProcedureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedure(this);
}

perlParser::ProcedureContext* perlParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 10, perlParser::RuleProcedure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(perlParser::IDENTIFIER);
    setState(111);
    match(perlParser::T__2);
    setState(112);
    parameters();
    setState(113);
    match(perlParser::T__3);
    setState(114);
    match(perlParser::T__0);
    setState(115);
    declarations();
    setState(116);
    compound_stmt();
    setState(117);
    match(perlParser::T__1);
    setState(118);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

perlParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<perlParser::Variable_delcarationContext *> perlParser::ParametersContext::variable_delcaration() {
  return getRuleContexts<perlParser::Variable_delcarationContext>();
}

perlParser::Variable_delcarationContext* perlParser::ParametersContext::variable_delcaration(size_t i) {
  return getRuleContext<perlParser::Variable_delcarationContext>(i);
}


size_t perlParser::ParametersContext::getRuleIndex() const {
  return perlParser::RuleParameters;
}

void perlParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void perlParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}

perlParser::ParametersContext* perlParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 12, perlParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == perlParser::TYPEID) {
      setState(120);
      variable_delcaration();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_delcarationContext ------------------------------------------------------------------

perlParser::Variable_delcarationContext::Variable_delcarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Variable_delcarationContext::TYPEID() {
  return getToken(perlParser::TYPEID, 0);
}

perlParser::VariableContext* perlParser::Variable_delcarationContext::variable() {
  return getRuleContext<perlParser::VariableContext>(0);
}


size_t perlParser::Variable_delcarationContext::getRuleIndex() const {
  return perlParser::RuleVariable_delcaration;
}

void perlParser::Variable_delcarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_delcaration(this);
}

void perlParser::Variable_delcarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_delcaration(this);
}

perlParser::Variable_delcarationContext* perlParser::variable_delcaration() {
  Variable_delcarationContext *_localctx = _tracker.createInstance<Variable_delcarationContext>(_ctx, getState());
  enterRule(_localctx, 14, perlParser::RuleVariable_delcaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(perlParser::TYPEID);
    setState(127);
    variable();
    setState(128);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

perlParser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<perlParser::StmtContext *> perlParser::Compound_stmtContext::stmt() {
  return getRuleContexts<perlParser::StmtContext>();
}

perlParser::StmtContext* perlParser::Compound_stmtContext::stmt(size_t i) {
  return getRuleContext<perlParser::StmtContext>(i);
}


size_t perlParser::Compound_stmtContext::getRuleIndex() const {
  return perlParser::RuleCompound_stmt;
}

void perlParser::Compound_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_stmt(this);
}

void perlParser::Compound_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_stmt(this);
}

perlParser::Compound_stmtContext* perlParser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, perlParser::RuleCompound_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(131); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(130);
              stmt();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(133); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

perlParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

perlParser::Assignment_stmtContext* perlParser::StmtContext::assignment_stmt() {
  return getRuleContext<perlParser::Assignment_stmtContext>(0);
}

perlParser::If_stmtContext* perlParser::StmtContext::if_stmt() {
  return getRuleContext<perlParser::If_stmtContext>(0);
}

perlParser::While_stmtContext* perlParser::StmtContext::while_stmt() {
  return getRuleContext<perlParser::While_stmtContext>(0);
}

perlParser::Until_stmtContext* perlParser::StmtContext::until_stmt() {
  return getRuleContext<perlParser::Until_stmtContext>(0);
}

perlParser::Do_while_stmtContext* perlParser::StmtContext::do_while_stmt() {
  return getRuleContext<perlParser::Do_while_stmtContext>(0);
}

perlParser::PrintStmtContext* perlParser::StmtContext::printStmt() {
  return getRuleContext<perlParser::PrintStmtContext>(0);
}

perlParser::Return_stmtContext* perlParser::StmtContext::return_stmt() {
  return getRuleContext<perlParser::Return_stmtContext>(0);
}

perlParser::Procedure_call_stmtContext* perlParser::StmtContext::procedure_call_stmt() {
  return getRuleContext<perlParser::Procedure_call_stmtContext>(0);
}


size_t perlParser::StmtContext::getRuleIndex() const {
  return perlParser::RuleStmt;
}

void perlParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void perlParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}

perlParser::StmtContext* perlParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 18, perlParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(143);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case perlParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(135);
        assignment_stmt();
        break;
      }

      case perlParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(136);
        if_stmt();
        break;
      }

      case perlParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(137);
        while_stmt();
        break;
      }

      case perlParser::UNTIL: {
        enterOuterAlt(_localctx, 4);
        setState(138);
        until_stmt();
        break;
      }

      case perlParser::DO: {
        enterOuterAlt(_localctx, 5);
        setState(139);
        do_while_stmt();
        break;
      }

      case perlParser::PRINTF: {
        enterOuterAlt(_localctx, 6);
        setState(140);
        printStmt();
        break;
      }

      case perlParser::T__5: {
        enterOuterAlt(_localctx, 7);
        setState(141);
        return_stmt();
        break;
      }

      case perlParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 8);
        setState(142);
        procedure_call_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

perlParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

perlParser::VariableContext* perlParser::Assignment_stmtContext::variable() {
  return getRuleContext<perlParser::VariableContext>(0);
}

tree::TerminalNode* perlParser::Assignment_stmtContext::ASSIGN() {
  return getToken(perlParser::ASSIGN, 0);
}

perlParser::ExprContext* perlParser::Assignment_stmtContext::expr() {
  return getRuleContext<perlParser::ExprContext>(0);
}


size_t perlParser::Assignment_stmtContext::getRuleIndex() const {
  return perlParser::RuleAssignment_stmt;
}

void perlParser::Assignment_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_stmt(this);
}

void perlParser::Assignment_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_stmt(this);
}

perlParser::Assignment_stmtContext* perlParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, perlParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    variable();
    setState(146);
    match(perlParser::ASSIGN);
    setState(147);
    expr(0);
    setState(148);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

perlParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

perlParser::ExprContext* perlParser::Return_stmtContext::expr() {
  return getRuleContext<perlParser::ExprContext>(0);
}


size_t perlParser::Return_stmtContext::getRuleIndex() const {
  return perlParser::RuleReturn_stmt;
}

void perlParser::Return_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_stmt(this);
}

void perlParser::Return_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_stmt(this);
}

perlParser::Return_stmtContext* perlParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, perlParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(perlParser::T__5);
    setState(151);
    expr(0);
    setState(152);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedure_call_stmtContext ------------------------------------------------------------------

perlParser::Procedure_call_stmtContext::Procedure_call_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Procedure_call_stmtContext::IDENTIFIER() {
  return getToken(perlParser::IDENTIFIER, 0);
}

perlParser::ArgumentsContext* perlParser::Procedure_call_stmtContext::arguments() {
  return getRuleContext<perlParser::ArgumentsContext>(0);
}


size_t perlParser::Procedure_call_stmtContext::getRuleIndex() const {
  return perlParser::RuleProcedure_call_stmt;
}

void perlParser::Procedure_call_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedure_call_stmt(this);
}

void perlParser::Procedure_call_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedure_call_stmt(this);
}

perlParser::Procedure_call_stmtContext* perlParser::procedure_call_stmt() {
  Procedure_call_stmtContext *_localctx = _tracker.createInstance<Procedure_call_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, perlParser::RuleProcedure_call_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(perlParser::IDENTIFIER);
    setState(155);
    match(perlParser::T__2);
    setState(156);
    arguments();
    setState(157);
    match(perlParser::T__3);
    setState(158);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

perlParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::If_stmtContext::IF() {
  return getToken(perlParser::IF, 0);
}

std::vector<perlParser::ExprContext *> perlParser::If_stmtContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::If_stmtContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}

std::vector<perlParser::Compound_stmtContext *> perlParser::If_stmtContext::compound_stmt() {
  return getRuleContexts<perlParser::Compound_stmtContext>();
}

perlParser::Compound_stmtContext* perlParser::If_stmtContext::compound_stmt(size_t i) {
  return getRuleContext<perlParser::Compound_stmtContext>(i);
}

std::vector<tree::TerminalNode *> perlParser::If_stmtContext::ELSE_IF() {
  return getTokens(perlParser::ELSE_IF);
}

tree::TerminalNode* perlParser::If_stmtContext::ELSE_IF(size_t i) {
  return getToken(perlParser::ELSE_IF, i);
}

tree::TerminalNode* perlParser::If_stmtContext::ELSE() {
  return getToken(perlParser::ELSE, 0);
}


size_t perlParser::If_stmtContext::getRuleIndex() const {
  return perlParser::RuleIf_stmt;
}

void perlParser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void perlParser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}

perlParser::If_stmtContext* perlParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, perlParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(perlParser::IF);
    setState(161);
    match(perlParser::T__2);
    setState(162);
    expr(0);
    setState(163);
    match(perlParser::T__3);
    setState(164);
    match(perlParser::T__0);
    setState(165);
    compound_stmt();
    setState(166);
    match(perlParser::T__1);
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == perlParser::ELSE_IF) {
      setState(167);
      match(perlParser::ELSE_IF);
      setState(168);
      match(perlParser::T__2);
      setState(169);
      expr(0);
      setState(170);
      match(perlParser::T__3);
      setState(171);
      match(perlParser::T__0);
      setState(172);
      compound_stmt();
      setState(173);
      match(perlParser::T__1);
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == perlParser::ELSE) {
      setState(180);
      match(perlParser::ELSE);
      setState(181);
      match(perlParser::T__0);
      setState(182);
      compound_stmt();
      setState(183);
      match(perlParser::T__1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStmtContext ------------------------------------------------------------------

perlParser::PrintStmtContext::PrintStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::PrintStmtContext::PRINTF() {
  return getToken(perlParser::PRINTF, 0);
}

perlParser::FormatStringContext* perlParser::PrintStmtContext::formatString() {
  return getRuleContext<perlParser::FormatStringContext>(0);
}

std::vector<perlParser::PrintArgContext *> perlParser::PrintStmtContext::printArg() {
  return getRuleContexts<perlParser::PrintArgContext>();
}

perlParser::PrintArgContext* perlParser::PrintStmtContext::printArg(size_t i) {
  return getRuleContext<perlParser::PrintArgContext>(i);
}


size_t perlParser::PrintStmtContext::getRuleIndex() const {
  return perlParser::RulePrintStmt;
}

void perlParser::PrintStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStmt(this);
}

void perlParser::PrintStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStmt(this);
}

perlParser::PrintStmtContext* perlParser::printStmt() {
  PrintStmtContext *_localctx = _tracker.createInstance<PrintStmtContext>(_ctx, getState());
  enterRule(_localctx, 28, perlParser::RulePrintStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(perlParser::PRINTF);
    setState(188);
    match(perlParser::T__2);
    setState(189);
    formatString();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == perlParser::T__6) {
      setState(190);
      printArg();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(196);
    match(perlParser::T__3);
    setState(197);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormatStringContext ------------------------------------------------------------------

perlParser::FormatStringContext::FormatStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::FormatStringContext::STRING() {
  return getToken(perlParser::STRING, 0);
}


size_t perlParser::FormatStringContext::getRuleIndex() const {
  return perlParser::RuleFormatString;
}

void perlParser::FormatStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormatString(this);
}

void perlParser::FormatStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormatString(this);
}

perlParser::FormatStringContext* perlParser::formatString() {
  FormatStringContext *_localctx = _tracker.createInstance<FormatStringContext>(_ctx, getState());
  enterRule(_localctx, 30, perlParser::RuleFormatString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(perlParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintArgContext ------------------------------------------------------------------

perlParser::PrintArgContext::PrintArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

perlParser::ExprContext* perlParser::PrintArgContext::expr() {
  return getRuleContext<perlParser::ExprContext>(0);
}


size_t perlParser::PrintArgContext::getRuleIndex() const {
  return perlParser::RulePrintArg;
}

void perlParser::PrintArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintArg(this);
}

void perlParser::PrintArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintArg(this);
}

perlParser::PrintArgContext* perlParser::printArg() {
  PrintArgContext *_localctx = _tracker.createInstance<PrintArgContext>(_ctx, getState());
  enterRule(_localctx, 32, perlParser::RulePrintArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(perlParser::T__6);
    setState(202);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

perlParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::While_stmtContext::WHILE() {
  return getToken(perlParser::WHILE, 0);
}

perlParser::ExprContext* perlParser::While_stmtContext::expr() {
  return getRuleContext<perlParser::ExprContext>(0);
}

perlParser::Compound_stmtContext* perlParser::While_stmtContext::compound_stmt() {
  return getRuleContext<perlParser::Compound_stmtContext>(0);
}


size_t perlParser::While_stmtContext::getRuleIndex() const {
  return perlParser::RuleWhile_stmt;
}

void perlParser::While_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_stmt(this);
}

void perlParser::While_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_stmt(this);
}

perlParser::While_stmtContext* perlParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, perlParser::RuleWhile_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(perlParser::WHILE);
    setState(205);
    match(perlParser::T__2);
    setState(206);
    expr(0);
    setState(207);
    match(perlParser::T__3);
    setState(208);
    match(perlParser::T__0);
    setState(209);
    compound_stmt();
    setState(210);
    match(perlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Until_stmtContext ------------------------------------------------------------------

perlParser::Until_stmtContext::Until_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Until_stmtContext::UNTIL() {
  return getToken(perlParser::UNTIL, 0);
}

perlParser::ExprContext* perlParser::Until_stmtContext::expr() {
  return getRuleContext<perlParser::ExprContext>(0);
}

perlParser::Compound_stmtContext* perlParser::Until_stmtContext::compound_stmt() {
  return getRuleContext<perlParser::Compound_stmtContext>(0);
}


size_t perlParser::Until_stmtContext::getRuleIndex() const {
  return perlParser::RuleUntil_stmt;
}

void perlParser::Until_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntil_stmt(this);
}

void perlParser::Until_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntil_stmt(this);
}

perlParser::Until_stmtContext* perlParser::until_stmt() {
  Until_stmtContext *_localctx = _tracker.createInstance<Until_stmtContext>(_ctx, getState());
  enterRule(_localctx, 36, perlParser::RuleUntil_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(perlParser::UNTIL);
    setState(213);
    match(perlParser::T__2);
    setState(214);
    expr(0);
    setState(215);
    match(perlParser::T__3);
    setState(216);
    match(perlParser::T__0);
    setState(217);
    compound_stmt();
    setState(218);
    match(perlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_while_stmtContext ------------------------------------------------------------------

perlParser::Do_while_stmtContext::Do_while_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Do_while_stmtContext::DO() {
  return getToken(perlParser::DO, 0);
}

perlParser::Compound_stmtContext* perlParser::Do_while_stmtContext::compound_stmt() {
  return getRuleContext<perlParser::Compound_stmtContext>(0);
}

tree::TerminalNode* perlParser::Do_while_stmtContext::WHILE() {
  return getToken(perlParser::WHILE, 0);
}

perlParser::ExprContext* perlParser::Do_while_stmtContext::expr() {
  return getRuleContext<perlParser::ExprContext>(0);
}


size_t perlParser::Do_while_stmtContext::getRuleIndex() const {
  return perlParser::RuleDo_while_stmt;
}

void perlParser::Do_while_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_while_stmt(this);
}

void perlParser::Do_while_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_while_stmt(this);
}

perlParser::Do_while_stmtContext* perlParser::do_while_stmt() {
  Do_while_stmtContext *_localctx = _tracker.createInstance<Do_while_stmtContext>(_ctx, getState());
  enterRule(_localctx, 38, perlParser::RuleDo_while_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(perlParser::DO);
    setState(221);
    match(perlParser::T__0);
    setState(222);
    compound_stmt();
    setState(223);
    match(perlParser::T__1);
    setState(224);
    match(perlParser::WHILE);
    setState(225);
    match(perlParser::T__2);
    setState(226);
    expr(0);
    setState(227);
    match(perlParser::T__3);
    setState(228);
    match(perlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

perlParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Function_callContext::IDENTIFIER() {
  return getToken(perlParser::IDENTIFIER, 0);
}

perlParser::ArgumentsContext* perlParser::Function_callContext::arguments() {
  return getRuleContext<perlParser::ArgumentsContext>(0);
}


size_t perlParser::Function_callContext::getRuleIndex() const {
  return perlParser::RuleFunction_call;
}

void perlParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void perlParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}

perlParser::Function_callContext* perlParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 40, perlParser::RuleFunction_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(perlParser::IDENTIFIER);
    setState(231);
    match(perlParser::T__2);
    setState(232);
    arguments();
    setState(233);
    match(perlParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

perlParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<perlParser::ExprContext *> perlParser::ArgumentsContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::ArgumentsContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}


size_t perlParser::ArgumentsContext::getRuleIndex() const {
  return perlParser::RuleArguments;
}

void perlParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void perlParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}

perlParser::ArgumentsContext* perlParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 42, perlParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << perlParser::T__2)
      | (1ULL << perlParser::T__7)
      | (1ULL << perlParser::IDENTIFIER)
      | (1ULL << perlParser::INTEGER)
      | (1ULL << perlParser::EXPONENT)
      | (1ULL << perlParser::REAL)
      | (1ULL << perlParser::BOOL)
      | (1ULL << perlParser::ADD_OP)
      | (1ULL << perlParser::SUB_OP))) != 0)) {
      setState(235);
      expr(0);
      setState(240);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

perlParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t perlParser::ExprContext::getRuleIndex() const {
  return perlParser::RuleExpr;
}

void perlParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

perlParser::VariableContext* perlParser::VariableExprContext::variable() {
  return getRuleContext<perlParser::VariableContext>(0);
}

perlParser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::VariableExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableExpr(this);
}
void perlParser::VariableExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableExpr(this);
}
//----------------- PowerExprContext ------------------------------------------------------------------

std::vector<perlParser::ExprContext *> perlParser::PowerExprContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::PowerExprContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}

perlParser::Power_opContext* perlParser::PowerExprContext::power_op() {
  return getRuleContext<perlParser::Power_opContext>(0);
}

perlParser::PowerExprContext::PowerExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::PowerExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpr(this);
}
void perlParser::PowerExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpr(this);
}
//----------------- MuldivExprContext ------------------------------------------------------------------

std::vector<perlParser::ExprContext *> perlParser::MuldivExprContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::MuldivExprContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}

perlParser::Mul_div_opContext* perlParser::MuldivExprContext::mul_div_op() {
  return getRuleContext<perlParser::Mul_div_opContext>(0);
}

perlParser::MuldivExprContext::MuldivExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::MuldivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMuldivExpr(this);
}
void perlParser::MuldivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMuldivExpr(this);
}
//----------------- BitopExprContext ------------------------------------------------------------------

std::vector<perlParser::ExprContext *> perlParser::BitopExprContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::BitopExprContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}

perlParser::Bit_opContext* perlParser::BitopExprContext::bit_op() {
  return getRuleContext<perlParser::Bit_opContext>(0);
}

perlParser::BitopExprContext::BitopExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::BitopExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitopExpr(this);
}
void perlParser::BitopExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitopExpr(this);
}
//----------------- SignednumExprContext ------------------------------------------------------------------

perlParser::Signed_numberContext* perlParser::SignednumExprContext::signed_number() {
  return getRuleContext<perlParser::Signed_numberContext>(0);
}

perlParser::SignednumExprContext::SignednumExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::SignednumExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignednumExpr(this);
}
void perlParser::SignednumExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignednumExpr(this);
}
//----------------- RelopExprContext ------------------------------------------------------------------

std::vector<perlParser::ExprContext *> perlParser::RelopExprContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::RelopExprContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}

perlParser::Rel_opContext* perlParser::RelopExprContext::rel_op() {
  return getRuleContext<perlParser::Rel_opContext>(0);
}

perlParser::RelopExprContext::RelopExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::RelopExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelopExpr(this);
}
void perlParser::RelopExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelopExpr(this);
}
//----------------- AddsubExprContext ------------------------------------------------------------------

std::vector<perlParser::ExprContext *> perlParser::AddsubExprContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::AddsubExprContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}

perlParser::Add_sub_opContext* perlParser::AddsubExprContext::add_sub_op() {
  return getRuleContext<perlParser::Add_sub_opContext>(0);
}

perlParser::AddsubExprContext::AddsubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::AddsubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddsubExpr(this);
}
void perlParser::AddsubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddsubExpr(this);
}
//----------------- UnsignednumExprContext ------------------------------------------------------------------

perlParser::NumberContext* perlParser::UnsignednumExprContext::number() {
  return getRuleContext<perlParser::NumberContext>(0);
}

perlParser::UnsignednumExprContext::UnsignednumExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::UnsignednumExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsignednumExpr(this);
}
void perlParser::UnsignednumExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsignednumExpr(this);
}
//----------------- ParenthExprContext ------------------------------------------------------------------

perlParser::ExprContext* perlParser::ParenthExprContext::expr() {
  return getRuleContext<perlParser::ExprContext>(0);
}

perlParser::ParenthExprContext::ParenthExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::ParenthExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthExpr(this);
}
void perlParser::ParenthExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthExpr(this);
}
//----------------- FunctionExprContext ------------------------------------------------------------------

perlParser::Function_callContext* perlParser::FunctionExprContext::function_call() {
  return getRuleContext<perlParser::Function_callContext>(0);
}

perlParser::FunctionExprContext::FunctionExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::FunctionExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionExpr(this);
}
void perlParser::FunctionExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionExpr(this);
}
//----------------- ShiftExprContext ------------------------------------------------------------------

std::vector<perlParser::ExprContext *> perlParser::ShiftExprContext::expr() {
  return getRuleContexts<perlParser::ExprContext>();
}

perlParser::ExprContext* perlParser::ShiftExprContext::expr(size_t i) {
  return getRuleContext<perlParser::ExprContext>(i);
}

perlParser::Shift_opContext* perlParser::ShiftExprContext::shift_op() {
  return getRuleContext<perlParser::Shift_opContext>(0);
}

perlParser::ShiftExprContext::ShiftExprContext(ExprContext *ctx) { copyFrom(ctx); }

void perlParser::ShiftExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpr(this);
}
void perlParser::ShiftExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpr(this);
}

perlParser::ExprContext* perlParser::expr() {
   return expr(0);
}

perlParser::ExprContext* perlParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  perlParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  perlParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, perlParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case perlParser::INTEGER:
      case perlParser::EXPONENT:
      case perlParser::REAL:
      case perlParser::BOOL: {
        _localctx = _tracker.createInstance<UnsignednumExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(242);
        number();
        break;
      }

      case perlParser::ADD_OP:
      case perlParser::SUB_OP: {
        _localctx = _tracker.createInstance<SignednumExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(243);
        signed_number();
        break;
      }

      case perlParser::T__7: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(244);
        variable();
        break;
      }

      case perlParser::T__2: {
        _localctx = _tracker.createInstance<ParenthExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(245);
        match(perlParser::T__2);
        setState(246);
        expr(0);
        setState(247);
        match(perlParser::T__3);
        break;
      }

      case perlParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<FunctionExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(249);
        function_call();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(278);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(276);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(252);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(253);
          power_op();
          setState(254);
          expr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MuldivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(256);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(257);
          mul_div_op();
          setState(258);
          expr(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddsubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(260);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(261);
          add_sub_op();
          setState(262);
          expr(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelopExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(264);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(265);
          rel_op();
          setState(266);
          expr(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ShiftExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(268);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(269);
          shift_op();
          setState(270);
          expr(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BitopExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(272);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(273);
          bit_op();
          setState(274);
          expr(7);
          break;
        }

        } 
      }
      setState(280);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

perlParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::VariableContext::IDENTIFIER() {
  return getToken(perlParser::IDENTIFIER, 0);
}


size_t perlParser::VariableContext::getRuleIndex() const {
  return perlParser::RuleVariable;
}

void perlParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void perlParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

perlParser::VariableContext* perlParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 46, perlParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(perlParser::T__7);
    setState(282);
    match(perlParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Power_opContext ------------------------------------------------------------------

perlParser::Power_opContext::Power_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Power_opContext::POWER_OP() {
  return getToken(perlParser::POWER_OP, 0);
}


size_t perlParser::Power_opContext::getRuleIndex() const {
  return perlParser::RulePower_op;
}

void perlParser::Power_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPower_op(this);
}

void perlParser::Power_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPower_op(this);
}

perlParser::Power_opContext* perlParser::power_op() {
  Power_opContext *_localctx = _tracker.createInstance<Power_opContext>(_ctx, getState());
  enterRule(_localctx, 48, perlParser::RulePower_op);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(perlParser::POWER_OP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_div_opContext ------------------------------------------------------------------

perlParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Mul_div_opContext::MUL_OP() {
  return getToken(perlParser::MUL_OP, 0);
}

tree::TerminalNode* perlParser::Mul_div_opContext::DIV_OP() {
  return getToken(perlParser::DIV_OP, 0);
}

tree::TerminalNode* perlParser::Mul_div_opContext::MOD_OP() {
  return getToken(perlParser::MOD_OP, 0);
}


size_t perlParser::Mul_div_opContext::getRuleIndex() const {
  return perlParser::RuleMul_div_op;
}

void perlParser::Mul_div_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul_div_op(this);
}

void perlParser::Mul_div_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul_div_op(this);
}

perlParser::Mul_div_opContext* perlParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 50, perlParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << perlParser::MUL_OP)
      | (1ULL << perlParser::DIV_OP)
      | (1ULL << perlParser::MOD_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Shift_opContext ------------------------------------------------------------------

perlParser::Shift_opContext::Shift_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Shift_opContext::LShift_OP() {
  return getToken(perlParser::LShift_OP, 0);
}

tree::TerminalNode* perlParser::Shift_opContext::RShift_OP() {
  return getToken(perlParser::RShift_OP, 0);
}


size_t perlParser::Shift_opContext::getRuleIndex() const {
  return perlParser::RuleShift_op;
}

void perlParser::Shift_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_op(this);
}

void perlParser::Shift_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_op(this);
}

perlParser::Shift_opContext* perlParser::shift_op() {
  Shift_opContext *_localctx = _tracker.createInstance<Shift_opContext>(_ctx, getState());
  enterRule(_localctx, 52, perlParser::RuleShift_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    _la = _input->LA(1);
    if (!(_la == perlParser::LShift_OP

    || _la == perlParser::RShift_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

perlParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Add_sub_opContext::ADD_OP() {
  return getToken(perlParser::ADD_OP, 0);
}

tree::TerminalNode* perlParser::Add_sub_opContext::SUB_OP() {
  return getToken(perlParser::SUB_OP, 0);
}


size_t perlParser::Add_sub_opContext::getRuleIndex() const {
  return perlParser::RuleAdd_sub_op;
}

void perlParser::Add_sub_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_sub_op(this);
}

void perlParser::Add_sub_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_sub_op(this);
}

perlParser::Add_sub_opContext* perlParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 54, perlParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    _la = _input->LA(1);
    if (!(_la == perlParser::ADD_OP

    || _la == perlParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

perlParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Rel_opContext::EQ_OP() {
  return getToken(perlParser::EQ_OP, 0);
}

tree::TerminalNode* perlParser::Rel_opContext::NE_OP() {
  return getToken(perlParser::NE_OP, 0);
}

tree::TerminalNode* perlParser::Rel_opContext::LT_OP() {
  return getToken(perlParser::LT_OP, 0);
}

tree::TerminalNode* perlParser::Rel_opContext::LE_OP() {
  return getToken(perlParser::LE_OP, 0);
}

tree::TerminalNode* perlParser::Rel_opContext::GT_OP() {
  return getToken(perlParser::GT_OP, 0);
}

tree::TerminalNode* perlParser::Rel_opContext::GE_OP() {
  return getToken(perlParser::GE_OP, 0);
}


size_t perlParser::Rel_opContext::getRuleIndex() const {
  return perlParser::RuleRel_op;
}

void perlParser::Rel_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_op(this);
}

void perlParser::Rel_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_op(this);
}

perlParser::Rel_opContext* perlParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 56, perlParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << perlParser::EQ_OP)
      | (1ULL << perlParser::NE_OP)
      | (1ULL << perlParser::LT_OP)
      | (1ULL << perlParser::LE_OP)
      | (1ULL << perlParser::GT_OP)
      | (1ULL << perlParser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bit_opContext ------------------------------------------------------------------

perlParser::Bit_opContext::Bit_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::Bit_opContext::OR_OP() {
  return getToken(perlParser::OR_OP, 0);
}

tree::TerminalNode* perlParser::Bit_opContext::AND_OP() {
  return getToken(perlParser::AND_OP, 0);
}

tree::TerminalNode* perlParser::Bit_opContext::NAND_OP() {
  return getToken(perlParser::NAND_OP, 0);
}

tree::TerminalNode* perlParser::Bit_opContext::NOR_OP() {
  return getToken(perlParser::NOR_OP, 0);
}

tree::TerminalNode* perlParser::Bit_opContext::Neg_OP() {
  return getToken(perlParser::Neg_OP, 0);
}


size_t perlParser::Bit_opContext::getRuleIndex() const {
  return perlParser::RuleBit_op;
}

void perlParser::Bit_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBit_op(this);
}

void perlParser::Bit_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBit_op(this);
}

perlParser::Bit_opContext* perlParser::bit_op() {
  Bit_opContext *_localctx = _tracker.createInstance<Bit_opContext>(_ctx, getState());
  enterRule(_localctx, 58, perlParser::RuleBit_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << perlParser::OR_OP)
      | (1ULL << perlParser::AND_OP)
      | (1ULL << perlParser::NAND_OP)
      | (1ULL << perlParser::NOR_OP)
      | (1ULL << perlParser::Neg_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

perlParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* perlParser::SignContext::ADD_OP() {
  return getToken(perlParser::ADD_OP, 0);
}

tree::TerminalNode* perlParser::SignContext::SUB_OP() {
  return getToken(perlParser::SUB_OP, 0);
}


size_t perlParser::SignContext::getRuleIndex() const {
  return perlParser::RuleSign;
}

void perlParser::SignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSign(this);
}

void perlParser::SignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSign(this);
}

perlParser::SignContext* perlParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 60, perlParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    _la = _input->LA(1);
    if (!(_la == perlParser::ADD_OP

    || _la == perlParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

perlParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t perlParser::NumberContext::getRuleIndex() const {
  return perlParser::RuleNumber;
}

void perlParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- INTConstContext ------------------------------------------------------------------

tree::TerminalNode* perlParser::INTConstContext::INTEGER() {
  return getToken(perlParser::INTEGER, 0);
}

perlParser::INTConstContext::INTConstContext(NumberContext *ctx) { copyFrom(ctx); }

void perlParser::INTConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterINTConst(this);
}
void perlParser::INTConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitINTConst(this);
}
//----------------- ExponentContext ------------------------------------------------------------------

tree::TerminalNode* perlParser::ExponentContext::EXPONENT() {
  return getToken(perlParser::EXPONENT, 0);
}

perlParser::ExponentContext::ExponentContext(NumberContext *ctx) { copyFrom(ctx); }

void perlParser::ExponentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExponent(this);
}
void perlParser::ExponentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExponent(this);
}
//----------------- BOOLConstContext ------------------------------------------------------------------

tree::TerminalNode* perlParser::BOOLConstContext::BOOL() {
  return getToken(perlParser::BOOL, 0);
}

perlParser::BOOLConstContext::BOOLConstContext(NumberContext *ctx) { copyFrom(ctx); }

void perlParser::BOOLConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBOOLConst(this);
}
void perlParser::BOOLConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBOOLConst(this);
}
//----------------- FloatConstContext ------------------------------------------------------------------

tree::TerminalNode* perlParser::FloatConstContext::REAL() {
  return getToken(perlParser::REAL, 0);
}

perlParser::FloatConstContext::FloatConstContext(NumberContext *ctx) { copyFrom(ctx); }

void perlParser::FloatConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatConst(this);
}
void perlParser::FloatConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatConst(this);
}
perlParser::NumberContext* perlParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 62, perlParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(302);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case perlParser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<perlParser::INTConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(298);
        match(perlParser::INTEGER);
        break;
      }

      case perlParser::REAL: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<perlParser::FloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(299);
        match(perlParser::REAL);
        break;
      }

      case perlParser::EXPONENT: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<perlParser::ExponentContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(300);
        match(perlParser::EXPONENT);
        break;
      }

      case perlParser::BOOL: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<perlParser::BOOLConstContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(301);
        match(perlParser::BOOL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_numberContext ------------------------------------------------------------------

perlParser::Signed_numberContext::Signed_numberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

perlParser::SignContext* perlParser::Signed_numberContext::sign() {
  return getRuleContext<perlParser::SignContext>(0);
}

perlParser::NumberContext* perlParser::Signed_numberContext::number() {
  return getRuleContext<perlParser::NumberContext>(0);
}


size_t perlParser::Signed_numberContext::getRuleIndex() const {
  return perlParser::RuleSigned_number;
}

void perlParser::Signed_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSigned_number(this);
}

void perlParser::Signed_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<perlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSigned_number(this);
}

perlParser::Signed_numberContext* perlParser::signed_number() {
  Signed_numberContext *_localctx = _tracker.createInstance<Signed_numberContext>(_ctx, getState());
  enterRule(_localctx, 64, perlParser::RuleSigned_number);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    sign();
    setState(305);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool perlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 22: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool perlParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> perlParser::_decisionToDFA;
atn::PredictionContextCache perlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN perlParser::_atn;
std::vector<uint16_t> perlParser::_serializedATN;

std::vector<std::string> perlParser::_ruleNames = {
  "program", "main_method", "declarations", "method_delcarations", "function", 
  "procedure", "parameters", "variable_delcaration", "compound_stmt", "stmt", 
  "assignment_stmt", "return_stmt", "procedure_call_stmt", "if_stmt", "printStmt", 
  "formatString", "printArg", "while_stmt", "until_stmt", "do_while_stmt", 
  "function_call", "arguments", "expr", "variable", "power_op", "mul_div_op", 
  "shift_op", "add_sub_op", "rel_op", "bit_op", "sign", "number", "signed_number"
};

std::vector<std::string> perlParser::_literalNames = {
  "", "'{'", "'}'", "'('", "')'", "';'", "'return'", "','", "'$'", "", "'if'", 
  "'else'", "'elseif'", "'while'", "'until'", "'do'", "'main'", "'TRUE'", 
  "'FALSE'", "'printf'", "", "", "", "", "", "'*'", "'/'", "'+'", "'-'", 
  "'^'", "'%'", "'='", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'<<'", 
  "'>>'", "'|'", "'&'", "'/&'", "'/|'", "'/~'", "", "", "'''"
};

std::vector<std::string> perlParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "TYPEID", "IF", "ELSE", "ELSE_IF", 
  "WHILE", "UNTIL", "DO", "MAIN", "TRUE", "FALSE", "PRINTF", "IDENTIFIER", 
  "INTEGER", "EXPONENT", "REAL", "BOOL", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", 
  "POWER_OP", "MOD_OP", "ASSIGN", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", 
  "GE_OP", "LShift_OP", "RShift_OP", "OR_OP", "AND_OP", "NAND_OP", "NOR_OP", 
  "Neg_OP", "NEWLINE", "WS", "QUOTE", "STRING", "BLOCK_COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary perlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> perlParser::_tokenNames;

perlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x34, 0x136, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x4c, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4f, 0xb, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x52, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x55, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x7, 0x4, 0x5a, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x5d, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x61, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x64, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x7, 0x8, 0x7c, 0xa, 0x8, 0xc, 
    0x8, 0xe, 0x8, 0x7f, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x6, 0xa, 0x86, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x87, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x92, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xb2, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0xb5, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0xbc, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0xc2, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xc5, 
    0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x7, 0x17, 0xef, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0xf2, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xfd, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x117, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x11a, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 
    0x21, 0x131, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x2, 0x3, 0x2e, 0x23, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
    0x2, 0x7, 0x4, 0x2, 0x1b, 0x1c, 0x20, 0x20, 0x3, 0x2, 0x28, 0x29, 0x3, 
    0x2, 0x1d, 0x1e, 0x3, 0x2, 0x22, 0x27, 0x3, 0x2, 0x2a, 0x2e, 0x2, 0x133, 
    0x2, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4, 0x48, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x62, 0x3, 0x2, 0x2, 0x2, 0xa, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x70, 0x3, 0x2, 0x2, 0x2, 0xe, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x80, 0x3, 0x2, 0x2, 0x2, 0x12, 0x85, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x16, 0x93, 0x3, 0x2, 0x2, 0x2, 0x18, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x24, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x28, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xfc, 0x3, 0x2, 0x2, 0x2, 0x30, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x32, 0x11e, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x120, 0x3, 0x2, 0x2, 0x2, 0x36, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x124, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x128, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x130, 0x3, 0x2, 0x2, 0x2, 0x42, 0x132, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x45, 0x5, 0x6, 0x4, 0x2, 0x45, 0x46, 0x5, 0x8, 0x5, 0x2, 0x46, 
    0x47, 0x5, 0x4, 0x3, 0x2, 0x47, 0x3, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 
    0x7, 0x12, 0x2, 0x2, 0x49, 0x4d, 0x7, 0x3, 0x2, 0x2, 0x4a, 0x4c, 0x5, 
    0x12, 0xa, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x53, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x52, 0x7, 0x2f, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0x4, 0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x5a, 0x5, 0x10, 0x9, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 0x5, 0xa, 0x6, 0x2, 0x5f, 0x61, 
    0x5, 0xc, 0x7, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x16, 0x2, 0x2, 
    0x66, 0x67, 0x7, 0x5, 0x2, 0x2, 0x67, 0x68, 0x5, 0xe, 0x8, 0x2, 0x68, 
    0x69, 0x7, 0x6, 0x2, 0x2, 0x69, 0x6a, 0x7, 0xb, 0x2, 0x2, 0x6a, 0x6b, 
    0x7, 0x3, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x6, 0x4, 0x2, 0x6c, 0x6d, 0x5, 
    0x12, 0xa, 0x2, 0x6d, 0x6e, 0x7, 0x4, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x7, 
    0x2, 0x2, 0x6f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x16, 0x2, 
    0x2, 0x71, 0x72, 0x7, 0x5, 0x2, 0x2, 0x72, 0x73, 0x5, 0xe, 0x8, 0x2, 
    0x73, 0x74, 0x7, 0x6, 0x2, 0x2, 0x74, 0x75, 0x7, 0x3, 0x2, 0x2, 0x75, 
    0x76, 0x5, 0x6, 0x4, 0x2, 0x76, 0x77, 0x5, 0x12, 0xa, 0x2, 0x77, 0x78, 
    0x7, 0x4, 0x2, 0x2, 0x78, 0x79, 0x7, 0x7, 0x2, 0x2, 0x79, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7c, 0x5, 0x10, 0x9, 0x2, 0x7b, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0xb, 0x2, 0x2, 0x81, 
    0x82, 0x5, 0x30, 0x19, 0x2, 0x82, 0x83, 0x7, 0x7, 0x2, 0x2, 0x83, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x5, 0x14, 0xb, 0x2, 0x85, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x92, 0x5, 0x16, 0xc, 0x2, 0x8a, 0x92, 0x5, 0x1c, 0xf, 0x2, 
    0x8b, 0x92, 0x5, 0x24, 0x13, 0x2, 0x8c, 0x92, 0x5, 0x26, 0x14, 0x2, 
    0x8d, 0x92, 0x5, 0x28, 0x15, 0x2, 0x8e, 0x92, 0x5, 0x1e, 0x10, 0x2, 
    0x8f, 0x92, 0x5, 0x18, 0xd, 0x2, 0x90, 0x92, 0x5, 0x1a, 0xe, 0x2, 0x91, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x94, 0x5, 0x30, 0x19, 0x2, 0x94, 0x95, 0x7, 0x21, 0x2, 0x2, 
    0x95, 0x96, 0x5, 0x2e, 0x18, 0x2, 0x96, 0x97, 0x7, 0x7, 0x2, 0x2, 0x97, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0x8, 0x2, 0x2, 0x99, 0x9a, 
    0x5, 0x2e, 0x18, 0x2, 0x9a, 0x9b, 0x7, 0x7, 0x2, 0x2, 0x9b, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x16, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x5, 
    0x2, 0x2, 0x9e, 0x9f, 0x5, 0x2c, 0x17, 0x2, 0x9f, 0xa0, 0x7, 0x6, 0x2, 
    0x2, 0xa0, 0xa1, 0x7, 0x7, 0x2, 0x2, 0xa1, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa3, 0x7, 0xc, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x5, 0x2, 0x2, 0xa4, 
    0xa5, 0x5, 0x2e, 0x18, 0x2, 0xa5, 0xa6, 0x7, 0x6, 0x2, 0x2, 0xa6, 0xa7, 
    0x7, 0x3, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x12, 0xa, 0x2, 0xa8, 0xb3, 0x7, 
    0x4, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0xe, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x5, 
    0x2, 0x2, 0xab, 0xac, 0x5, 0x2e, 0x18, 0x2, 0xac, 0xad, 0x7, 0x6, 0x2, 
    0x2, 0xad, 0xae, 0x7, 0x3, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x12, 0xa, 0x2, 
    0xaf, 0xb0, 0x7, 0x4, 0x2, 0x2, 0xb0, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0xd, 
    0x2, 0x2, 0xb7, 0xb8, 0x7, 0x3, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x12, 0xa, 
    0x2, 0xb9, 0xba, 0x7, 0x4, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x15, 0x2, 0x2, 0xbe, 0xbf, 
    0x7, 0x5, 0x2, 0x2, 0xbf, 0xc3, 0x5, 0x20, 0x11, 0x2, 0xc0, 0xc2, 0x5, 
    0x22, 0x12, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xc7, 0x7, 0x6, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x7, 0x2, 0x2, 0xc8, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x32, 0x2, 0x2, 0xca, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x9, 0x2, 0x2, 0xcc, 0xcd, 0x5, 
    0x2e, 0x18, 0x2, 0xcd, 0x23, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0xf, 
    0x2, 0x2, 0xcf, 0xd0, 0x7, 0x5, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x2e, 0x18, 
    0x2, 0xd1, 0xd2, 0x7, 0x6, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x3, 0x2, 0x2, 
    0xd3, 0xd4, 0x5, 0x12, 0xa, 0x2, 0xd4, 0xd5, 0x7, 0x4, 0x2, 0x2, 0xd5, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x10, 0x2, 0x2, 0xd7, 0xd8, 
    0x7, 0x5, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x2e, 0x18, 0x2, 0xd9, 0xda, 0x7, 
    0x6, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x3, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x12, 
    0xa, 0x2, 0xdc, 0xdd, 0x7, 0x4, 0x2, 0x2, 0xdd, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xde, 0xdf, 0x7, 0x11, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x3, 0x2, 0x2, 
    0xe0, 0xe1, 0x5, 0x12, 0xa, 0x2, 0xe1, 0xe2, 0x7, 0x4, 0x2, 0x2, 0xe2, 
    0xe3, 0x7, 0xf, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x5, 0x2, 0x2, 0xe4, 0xe5, 
    0x5, 0x2e, 0x18, 0x2, 0xe5, 0xe6, 0x7, 0x6, 0x2, 0x2, 0xe6, 0xe7, 0x7, 
    0x7, 0x2, 0x2, 0xe7, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x16, 
    0x2, 0x2, 0xe9, 0xea, 0x7, 0x5, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x2c, 0x17, 
    0x2, 0xeb, 0xec, 0x7, 0x6, 0x2, 0x2, 0xec, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xef, 0x5, 0x2e, 0x18, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf4, 0x8, 0x18, 0x1, 0x2, 0xf4, 0xfd, 0x5, 0x40, 
    0x21, 0x2, 0xf5, 0xfd, 0x5, 0x42, 0x22, 0x2, 0xf6, 0xfd, 0x5, 0x30, 
    0x19, 0x2, 0xf7, 0xf8, 0x7, 0x5, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x2e, 0x18, 
    0x2, 0xf9, 0xfa, 0x7, 0x6, 0x2, 0x2, 0xfa, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0xfd, 0x5, 0x2a, 0x16, 0x2, 0xfc, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0xff, 0xc, 0xd, 0x2, 0x2, 0xff, 0x100, 0x5, 0x32, 
    0x1a, 0x2, 0x100, 0x101, 0x5, 0x2e, 0x18, 0xe, 0x101, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x103, 0xc, 0xc, 0x2, 0x2, 0x103, 0x104, 0x5, 0x34, 
    0x1b, 0x2, 0x104, 0x105, 0x5, 0x2e, 0x18, 0xd, 0x105, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x107, 0xc, 0xb, 0x2, 0x2, 0x107, 0x108, 0x5, 0x38, 
    0x1d, 0x2, 0x108, 0x109, 0x5, 0x2e, 0x18, 0xc, 0x109, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x10a, 0x10b, 0xc, 0xa, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x3a, 
    0x1e, 0x2, 0x10c, 0x10d, 0x5, 0x2e, 0x18, 0xb, 0x10d, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x10e, 0x10f, 0xc, 0x9, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x36, 
    0x1c, 0x2, 0x110, 0x111, 0x5, 0x2e, 0x18, 0xa, 0x111, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x113, 0xc, 0x8, 0x2, 0x2, 0x113, 0x114, 0x5, 0x3c, 
    0x1f, 0x2, 0x114, 0x115, 0x5, 0x2e, 0x18, 0x9, 0x115, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x116, 0x102, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x106, 0x3, 0x2, 0x2, 0x2, 0x116, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x116, 0x112, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0xa, 0x2, 0x2, 
    0x11c, 0x11d, 0x7, 0x16, 0x2, 0x2, 0x11d, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x11f, 0x7, 0x1f, 0x2, 0x2, 0x11f, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x120, 0x121, 0x9, 0x2, 0x2, 0x2, 0x121, 0x35, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x123, 0x9, 0x3, 0x2, 0x2, 0x123, 0x37, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 
    0x9, 0x4, 0x2, 0x2, 0x125, 0x39, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x9, 
    0x5, 0x2, 0x2, 0x127, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x9, 0x6, 
    0x2, 0x2, 0x129, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x9, 0x4, 0x2, 
    0x2, 0x12b, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x131, 0x7, 0x17, 0x2, 
    0x2, 0x12d, 0x131, 0x7, 0x19, 0x2, 0x2, 0x12e, 0x131, 0x7, 0x18, 0x2, 
    0x2, 0x12f, 0x131, 0x7, 0x1a, 0x2, 0x2, 0x130, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x133, 0x5, 0x3e, 0x20, 0x2, 0x133, 0x134, 0x5, 0x40, 0x21, 0x2, 
    0x134, 0x43, 0x3, 0x2, 0x2, 0x2, 0x12, 0x4d, 0x53, 0x5b, 0x60, 0x62, 
    0x7d, 0x87, 0x91, 0xb3, 0xbb, 0xc3, 0xf0, 0xfc, 0x116, 0x118, 0x130, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

perlParser::Initializer perlParser::_init;

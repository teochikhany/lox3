
// Generated from lox.g4 by ANTLR 4.9


#include "loxListener.h"

#include "loxParser.h"


using namespace antlrcpp;
using namespace antlr4;

loxParser::loxParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

loxParser::~loxParser() {
  delete _interpreter;
}

std::string loxParser::getGrammarFileName() const {
  return "lox.g4";
}

const std::vector<std::string>& loxParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& loxParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

loxParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* loxParser::ProgramContext::EOF() {
  return getToken(loxParser::EOF, 0);
}

std::vector<loxParser::DeclarationContext *> loxParser::ProgramContext::declaration() {
  return getRuleContexts<loxParser::DeclarationContext>();
}

loxParser::DeclarationContext* loxParser::ProgramContext::declaration(size_t i) {
  return getRuleContext<loxParser::DeclarationContext>(i);
}


size_t loxParser::ProgramContext::getRuleIndex() const {
  return loxParser::RuleProgram;
}

void loxParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void loxParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

loxParser::ProgramContext* loxParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, loxParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << loxParser::T__0)
      | (1ULL << loxParser::T__2)
      | (1ULL << loxParser::T__4)
      | (1ULL << loxParser::T__5)
      | (1ULL << loxParser::T__8)
      | (1ULL << loxParser::T__9)
      | (1ULL << loxParser::T__11)
      | (1ULL << loxParser::T__13)
      | (1ULL << loxParser::T__14)
      | (1ULL << loxParser::T__15)
      | (1ULL << loxParser::T__27)
      | (1ULL << loxParser::T__28)
      | (1ULL << loxParser::T__29)
      | (1ULL << loxParser::T__30)
      | (1ULL << loxParser::T__31)
      | (1ULL << loxParser::T__32)
      | (1ULL << loxParser::T__33)
      | (1ULL << loxParser::NUMBER)
      | (1ULL << loxParser::STRING)
      | (1ULL << loxParser::IDENTIFIER))) != 0)) {
      setState(54);
      declaration();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(60);
    match(loxParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

loxParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::ClassDeclContext* loxParser::DeclarationContext::classDecl() {
  return getRuleContext<loxParser::ClassDeclContext>(0);
}

loxParser::FunDeclContext* loxParser::DeclarationContext::funDecl() {
  return getRuleContext<loxParser::FunDeclContext>(0);
}

loxParser::VarDeclContext* loxParser::DeclarationContext::varDecl() {
  return getRuleContext<loxParser::VarDeclContext>(0);
}

loxParser::StatementContext* loxParser::DeclarationContext::statement() {
  return getRuleContext<loxParser::StatementContext>(0);
}


size_t loxParser::DeclarationContext::getRuleIndex() const {
  return loxParser::RuleDeclaration;
}

void loxParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void loxParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

loxParser::DeclarationContext* loxParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, loxParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        classDecl();
        break;
      }

      case loxParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(63);
        funDecl();
        break;
      }

      case loxParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(64);
        varDecl();
        break;
      }

      case loxParser::T__2:
      case loxParser::T__8:
      case loxParser::T__9:
      case loxParser::T__11:
      case loxParser::T__13:
      case loxParser::T__14:
      case loxParser::T__15:
      case loxParser::T__27:
      case loxParser::T__28:
      case loxParser::T__29:
      case loxParser::T__30:
      case loxParser::T__31:
      case loxParser::T__32:
      case loxParser::T__33:
      case loxParser::NUMBER:
      case loxParser::STRING:
      case loxParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(65);
        statement();
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

//----------------- ClassDeclContext ------------------------------------------------------------------

loxParser::ClassDeclContext::ClassDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> loxParser::ClassDeclContext::IDENTIFIER() {
  return getTokens(loxParser::IDENTIFIER);
}

tree::TerminalNode* loxParser::ClassDeclContext::IDENTIFIER(size_t i) {
  return getToken(loxParser::IDENTIFIER, i);
}

std::vector<loxParser::FunctionContext *> loxParser::ClassDeclContext::function() {
  return getRuleContexts<loxParser::FunctionContext>();
}

loxParser::FunctionContext* loxParser::ClassDeclContext::function(size_t i) {
  return getRuleContext<loxParser::FunctionContext>(i);
}


size_t loxParser::ClassDeclContext::getRuleIndex() const {
  return loxParser::RuleClassDecl;
}

void loxParser::ClassDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDecl(this);
}

void loxParser::ClassDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDecl(this);
}

loxParser::ClassDeclContext* loxParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, loxParser::RuleClassDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(loxParser::T__0);
    setState(69);
    match(loxParser::IDENTIFIER);
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == loxParser::T__1) {
      setState(70);
      match(loxParser::T__1);
      setState(71);
      match(loxParser::IDENTIFIER);
    }
    setState(74);
    match(loxParser::T__2);
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::IDENTIFIER) {
      setState(75);
      function();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(81);
    match(loxParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunDeclContext ------------------------------------------------------------------

loxParser::FunDeclContext::FunDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::FunctionContext* loxParser::FunDeclContext::function() {
  return getRuleContext<loxParser::FunctionContext>(0);
}


size_t loxParser::FunDeclContext::getRuleIndex() const {
  return loxParser::RuleFunDecl;
}

void loxParser::FunDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunDecl(this);
}

void loxParser::FunDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunDecl(this);
}

loxParser::FunDeclContext* loxParser::funDecl() {
  FunDeclContext *_localctx = _tracker.createInstance<FunDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, loxParser::RuleFunDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(loxParser::T__4);
    setState(84);
    function();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

loxParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* loxParser::VarDeclContext::IDENTIFIER() {
  return getToken(loxParser::IDENTIFIER, 0);
}

loxParser::ExpressionContext* loxParser::VarDeclContext::expression() {
  return getRuleContext<loxParser::ExpressionContext>(0);
}


size_t loxParser::VarDeclContext::getRuleIndex() const {
  return loxParser::RuleVarDecl;
}

void loxParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void loxParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}

loxParser::VarDeclContext* loxParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, loxParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(loxParser::T__5);
    setState(87);
    match(loxParser::IDENTIFIER);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == loxParser::T__6) {
      setState(88);
      match(loxParser::T__6);
      setState(89);
      expression();
    }
    setState(92);
    match(loxParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

loxParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::ExprStmtContext* loxParser::StatementContext::exprStmt() {
  return getRuleContext<loxParser::ExprStmtContext>(0);
}

loxParser::ForStmtContext* loxParser::StatementContext::forStmt() {
  return getRuleContext<loxParser::ForStmtContext>(0);
}

loxParser::IfStmtContext* loxParser::StatementContext::ifStmt() {
  return getRuleContext<loxParser::IfStmtContext>(0);
}

loxParser::PrintStmtContext* loxParser::StatementContext::printStmt() {
  return getRuleContext<loxParser::PrintStmtContext>(0);
}

loxParser::ReturnStmtContext* loxParser::StatementContext::returnStmt() {
  return getRuleContext<loxParser::ReturnStmtContext>(0);
}

loxParser::WhileStmtContext* loxParser::StatementContext::whileStmt() {
  return getRuleContext<loxParser::WhileStmtContext>(0);
}

loxParser::BlockContext* loxParser::StatementContext::block() {
  return getRuleContext<loxParser::BlockContext>(0);
}


size_t loxParser::StatementContext::getRuleIndex() const {
  return loxParser::RuleStatement;
}

void loxParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void loxParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

loxParser::StatementContext* loxParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, loxParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__9:
      case loxParser::T__27:
      case loxParser::T__28:
      case loxParser::T__29:
      case loxParser::T__30:
      case loxParser::T__31:
      case loxParser::T__32:
      case loxParser::T__33:
      case loxParser::NUMBER:
      case loxParser::STRING:
      case loxParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(94);
        exprStmt();
        break;
      }

      case loxParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(95);
        forStmt();
        break;
      }

      case loxParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(96);
        ifStmt();
        break;
      }

      case loxParser::T__13: {
        enterOuterAlt(_localctx, 4);
        setState(97);
        printStmt();
        break;
      }

      case loxParser::T__14: {
        enterOuterAlt(_localctx, 5);
        setState(98);
        returnStmt();
        break;
      }

      case loxParser::T__15: {
        enterOuterAlt(_localctx, 6);
        setState(99);
        whileStmt();
        break;
      }

      case loxParser::T__2: {
        enterOuterAlt(_localctx, 7);
        setState(100);
        block();
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

//----------------- ExprStmtContext ------------------------------------------------------------------

loxParser::ExprStmtContext::ExprStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::ExpressionContext* loxParser::ExprStmtContext::expression() {
  return getRuleContext<loxParser::ExpressionContext>(0);
}


size_t loxParser::ExprStmtContext::getRuleIndex() const {
  return loxParser::RuleExprStmt;
}

void loxParser::ExprStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprStmt(this);
}

void loxParser::ExprStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprStmt(this);
}

loxParser::ExprStmtContext* loxParser::exprStmt() {
  ExprStmtContext *_localctx = _tracker.createInstance<ExprStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, loxParser::RuleExprStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    expression();
    setState(104);
    match(loxParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

loxParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::StatementContext* loxParser::ForStmtContext::statement() {
  return getRuleContext<loxParser::StatementContext>(0);
}

loxParser::VarDeclContext* loxParser::ForStmtContext::varDecl() {
  return getRuleContext<loxParser::VarDeclContext>(0);
}

loxParser::ExprStmtContext* loxParser::ForStmtContext::exprStmt() {
  return getRuleContext<loxParser::ExprStmtContext>(0);
}

std::vector<loxParser::ExpressionContext *> loxParser::ForStmtContext::expression() {
  return getRuleContexts<loxParser::ExpressionContext>();
}

loxParser::ExpressionContext* loxParser::ForStmtContext::expression(size_t i) {
  return getRuleContext<loxParser::ExpressionContext>(i);
}


size_t loxParser::ForStmtContext::getRuleIndex() const {
  return loxParser::RuleForStmt;
}

void loxParser::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}

void loxParser::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}

loxParser::ForStmtContext* loxParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, loxParser::RuleForStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(loxParser::T__8);
    setState(107);
    match(loxParser::T__9);
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__5: {
        setState(108);
        varDecl();
        break;
      }

      case loxParser::T__9:
      case loxParser::T__27:
      case loxParser::T__28:
      case loxParser::T__29:
      case loxParser::T__30:
      case loxParser::T__31:
      case loxParser::T__32:
      case loxParser::T__33:
      case loxParser::NUMBER:
      case loxParser::STRING:
      case loxParser::IDENTIFIER: {
        setState(109);
        exprStmt();
        break;
      }

      case loxParser::T__7: {
        setState(110);
        match(loxParser::T__7);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << loxParser::T__9)
      | (1ULL << loxParser::T__27)
      | (1ULL << loxParser::T__28)
      | (1ULL << loxParser::T__29)
      | (1ULL << loxParser::T__30)
      | (1ULL << loxParser::T__31)
      | (1ULL << loxParser::T__32)
      | (1ULL << loxParser::T__33)
      | (1ULL << loxParser::NUMBER)
      | (1ULL << loxParser::STRING)
      | (1ULL << loxParser::IDENTIFIER))) != 0)) {
      setState(113);
      expression();
    }
    setState(116);
    match(loxParser::T__7);
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << loxParser::T__9)
      | (1ULL << loxParser::T__27)
      | (1ULL << loxParser::T__28)
      | (1ULL << loxParser::T__29)
      | (1ULL << loxParser::T__30)
      | (1ULL << loxParser::T__31)
      | (1ULL << loxParser::T__32)
      | (1ULL << loxParser::T__33)
      | (1ULL << loxParser::NUMBER)
      | (1ULL << loxParser::STRING)
      | (1ULL << loxParser::IDENTIFIER))) != 0)) {
      setState(117);
      expression();
    }
    setState(120);
    match(loxParser::T__10);
    setState(121);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

loxParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::ExpressionContext* loxParser::IfStmtContext::expression() {
  return getRuleContext<loxParser::ExpressionContext>(0);
}

loxParser::StatementContext* loxParser::IfStmtContext::statement() {
  return getRuleContext<loxParser::StatementContext>(0);
}

loxParser::ElseStmtContext* loxParser::IfStmtContext::elseStmt() {
  return getRuleContext<loxParser::ElseStmtContext>(0);
}


size_t loxParser::IfStmtContext::getRuleIndex() const {
  return loxParser::RuleIfStmt;
}

void loxParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void loxParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

loxParser::IfStmtContext* loxParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, loxParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(loxParser::T__11);
    setState(124);
    match(loxParser::T__9);
    setState(125);
    expression();
    setState(126);
    match(loxParser::T__10);
    setState(127);
    statement();
    setState(129);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(128);
      elseStmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStmtContext ------------------------------------------------------------------

loxParser::ElseStmtContext::ElseStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::StatementContext* loxParser::ElseStmtContext::statement() {
  return getRuleContext<loxParser::StatementContext>(0);
}


size_t loxParser::ElseStmtContext::getRuleIndex() const {
  return loxParser::RuleElseStmt;
}

void loxParser::ElseStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStmt(this);
}

void loxParser::ElseStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStmt(this);
}

loxParser::ElseStmtContext* loxParser::elseStmt() {
  ElseStmtContext *_localctx = _tracker.createInstance<ElseStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, loxParser::RuleElseStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(loxParser::T__12);
    setState(132);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStmtContext ------------------------------------------------------------------

loxParser::PrintStmtContext::PrintStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::ExpressionContext* loxParser::PrintStmtContext::expression() {
  return getRuleContext<loxParser::ExpressionContext>(0);
}


size_t loxParser::PrintStmtContext::getRuleIndex() const {
  return loxParser::RulePrintStmt;
}

void loxParser::PrintStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStmt(this);
}

void loxParser::PrintStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStmt(this);
}

loxParser::PrintStmtContext* loxParser::printStmt() {
  PrintStmtContext *_localctx = _tracker.createInstance<PrintStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, loxParser::RulePrintStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(loxParser::T__13);
    setState(135);
    expression();
    setState(136);
    match(loxParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

loxParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::ExpressionContext* loxParser::ReturnStmtContext::expression() {
  return getRuleContext<loxParser::ExpressionContext>(0);
}


size_t loxParser::ReturnStmtContext::getRuleIndex() const {
  return loxParser::RuleReturnStmt;
}

void loxParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void loxParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}

loxParser::ReturnStmtContext* loxParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, loxParser::RuleReturnStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(loxParser::T__14);
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << loxParser::T__9)
      | (1ULL << loxParser::T__27)
      | (1ULL << loxParser::T__28)
      | (1ULL << loxParser::T__29)
      | (1ULL << loxParser::T__30)
      | (1ULL << loxParser::T__31)
      | (1ULL << loxParser::T__32)
      | (1ULL << loxParser::T__33)
      | (1ULL << loxParser::NUMBER)
      | (1ULL << loxParser::STRING)
      | (1ULL << loxParser::IDENTIFIER))) != 0)) {
      setState(139);
      expression();
    }
    setState(142);
    match(loxParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

loxParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::ExpressionContext* loxParser::WhileStmtContext::expression() {
  return getRuleContext<loxParser::ExpressionContext>(0);
}

loxParser::StatementContext* loxParser::WhileStmtContext::statement() {
  return getRuleContext<loxParser::StatementContext>(0);
}


size_t loxParser::WhileStmtContext::getRuleIndex() const {
  return loxParser::RuleWhileStmt;
}

void loxParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void loxParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}

loxParser::WhileStmtContext* loxParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, loxParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(loxParser::T__15);
    setState(145);
    match(loxParser::T__9);
    setState(146);
    expression();
    setState(147);
    match(loxParser::T__10);
    setState(148);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

loxParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<loxParser::DeclarationContext *> loxParser::BlockContext::declaration() {
  return getRuleContexts<loxParser::DeclarationContext>();
}

loxParser::DeclarationContext* loxParser::BlockContext::declaration(size_t i) {
  return getRuleContext<loxParser::DeclarationContext>(i);
}


size_t loxParser::BlockContext::getRuleIndex() const {
  return loxParser::RuleBlock;
}

void loxParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void loxParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

loxParser::BlockContext* loxParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, loxParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(loxParser::T__2);
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << loxParser::T__0)
      | (1ULL << loxParser::T__2)
      | (1ULL << loxParser::T__4)
      | (1ULL << loxParser::T__5)
      | (1ULL << loxParser::T__8)
      | (1ULL << loxParser::T__9)
      | (1ULL << loxParser::T__11)
      | (1ULL << loxParser::T__13)
      | (1ULL << loxParser::T__14)
      | (1ULL << loxParser::T__15)
      | (1ULL << loxParser::T__27)
      | (1ULL << loxParser::T__28)
      | (1ULL << loxParser::T__29)
      | (1ULL << loxParser::T__30)
      | (1ULL << loxParser::T__31)
      | (1ULL << loxParser::T__32)
      | (1ULL << loxParser::T__33)
      | (1ULL << loxParser::NUMBER)
      | (1ULL << loxParser::STRING)
      | (1ULL << loxParser::IDENTIFIER))) != 0)) {
      setState(151);
      declaration();
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(157);
    match(loxParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

loxParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::AssignmentContext* loxParser::ExpressionContext::assignment() {
  return getRuleContext<loxParser::AssignmentContext>(0);
}


size_t loxParser::ExpressionContext::getRuleIndex() const {
  return loxParser::RuleExpression;
}

void loxParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void loxParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

loxParser::ExpressionContext* loxParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, loxParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    assignment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

loxParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* loxParser::AssignmentContext::IDENTIFIER() {
  return getToken(loxParser::IDENTIFIER, 0);
}

loxParser::AssignmentContext* loxParser::AssignmentContext::assignment() {
  return getRuleContext<loxParser::AssignmentContext>(0);
}

loxParser::CallContext* loxParser::AssignmentContext::call() {
  return getRuleContext<loxParser::CallContext>(0);
}

loxParser::Logic_orContext* loxParser::AssignmentContext::logic_or() {
  return getRuleContext<loxParser::Logic_orContext>(0);
}


size_t loxParser::AssignmentContext::getRuleIndex() const {
  return loxParser::RuleAssignment;
}

void loxParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void loxParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

loxParser::AssignmentContext* loxParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 30, loxParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(164);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(161);
        call();
        setState(162);
        match(loxParser::T__16);
        break;
      }

      default:
        break;
      }
      setState(166);
      match(loxParser::IDENTIFIER);
      setState(167);
      match(loxParser::T__6);
      setState(168);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(169);
      logic_or();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logic_orContext ------------------------------------------------------------------

loxParser::Logic_orContext::Logic_orContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<loxParser::Logic_andContext *> loxParser::Logic_orContext::logic_and() {
  return getRuleContexts<loxParser::Logic_andContext>();
}

loxParser::Logic_andContext* loxParser::Logic_orContext::logic_and(size_t i) {
  return getRuleContext<loxParser::Logic_andContext>(i);
}


size_t loxParser::Logic_orContext::getRuleIndex() const {
  return loxParser::RuleLogic_or;
}

void loxParser::Logic_orContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_or(this);
}

void loxParser::Logic_orContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_or(this);
}

loxParser::Logic_orContext* loxParser::logic_or() {
  Logic_orContext *_localctx = _tracker.createInstance<Logic_orContext>(_ctx, getState());
  enterRule(_localctx, 32, loxParser::RuleLogic_or);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    logic_and();
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__17) {
      setState(173);
      match(loxParser::T__17);
      setState(174);
      logic_and();
      setState(179);
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

//----------------- Logic_andContext ------------------------------------------------------------------

loxParser::Logic_andContext::Logic_andContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<loxParser::EqualityContext *> loxParser::Logic_andContext::equality() {
  return getRuleContexts<loxParser::EqualityContext>();
}

loxParser::EqualityContext* loxParser::Logic_andContext::equality(size_t i) {
  return getRuleContext<loxParser::EqualityContext>(i);
}


size_t loxParser::Logic_andContext::getRuleIndex() const {
  return loxParser::RuleLogic_and;
}

void loxParser::Logic_andContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_and(this);
}

void loxParser::Logic_andContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_and(this);
}

loxParser::Logic_andContext* loxParser::logic_and() {
  Logic_andContext *_localctx = _tracker.createInstance<Logic_andContext>(_ctx, getState());
  enterRule(_localctx, 34, loxParser::RuleLogic_and);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    equality();
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__18) {
      setState(181);
      match(loxParser::T__18);
      setState(182);
      equality();
      setState(187);
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

//----------------- EqualityContext ------------------------------------------------------------------

loxParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<loxParser::ComparisonContext *> loxParser::EqualityContext::comparison() {
  return getRuleContexts<loxParser::ComparisonContext>();
}

loxParser::ComparisonContext* loxParser::EqualityContext::comparison(size_t i) {
  return getRuleContext<loxParser::ComparisonContext>(i);
}


size_t loxParser::EqualityContext::getRuleIndex() const {
  return loxParser::RuleEquality;
}

void loxParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}

void loxParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}

loxParser::EqualityContext* loxParser::equality() {
  EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, getState());
  enterRule(_localctx, 36, loxParser::RuleEquality);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    comparison();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__19

    || _la == loxParser::T__20) {
      setState(189);
      dynamic_cast<EqualityContext *>(_localctx)->sign = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == loxParser::T__19

      || _la == loxParser::T__20)) {
        dynamic_cast<EqualityContext *>(_localctx)->sign = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(190);
      comparison();
      setState(195);
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

//----------------- ComparisonContext ------------------------------------------------------------------

loxParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<loxParser::TermContext *> loxParser::ComparisonContext::term() {
  return getRuleContexts<loxParser::TermContext>();
}

loxParser::TermContext* loxParser::ComparisonContext::term(size_t i) {
  return getRuleContext<loxParser::TermContext>(i);
}


size_t loxParser::ComparisonContext::getRuleIndex() const {
  return loxParser::RuleComparison;
}

void loxParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void loxParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

loxParser::ComparisonContext* loxParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 38, loxParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    term(0);
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << loxParser::T__1)
      | (1ULL << loxParser::T__21)
      | (1ULL << loxParser::T__22)
      | (1ULL << loxParser::T__23))) != 0)) {
      setState(197);
      dynamic_cast<ComparisonContext *>(_localctx)->sign = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << loxParser::T__1)
        | (1ULL << loxParser::T__21)
        | (1ULL << loxParser::T__22)
        | (1ULL << loxParser::T__23))) != 0))) {
        dynamic_cast<ComparisonContext *>(_localctx)->sign = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(198);
      term(0);
      setState(203);
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

//----------------- TermContext ------------------------------------------------------------------

loxParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::UnaryContext* loxParser::TermContext::unary() {
  return getRuleContext<loxParser::UnaryContext>(0);
}

std::vector<loxParser::TermContext *> loxParser::TermContext::term() {
  return getRuleContexts<loxParser::TermContext>();
}

loxParser::TermContext* loxParser::TermContext::term(size_t i) {
  return getRuleContext<loxParser::TermContext>(i);
}


size_t loxParser::TermContext::getRuleIndex() const {
  return loxParser::RuleTerm;
}

void loxParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void loxParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


loxParser::TermContext* loxParser::term() {
   return term(0);
}

loxParser::TermContext* loxParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  loxParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  loxParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, loxParser::RuleTerm, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(205);
    unary();
    _ctx->stop = _input->LT(-1);
    setState(215);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(213);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(207);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(208);
          dynamic_cast<TermContext *>(_localctx)->sign = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == loxParser::T__24

          || _la == loxParser::T__25)) {
            dynamic_cast<TermContext *>(_localctx)->sign = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(209);
          term(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(210);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(211);
          dynamic_cast<TermContext *>(_localctx)->sign = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == loxParser::T__26

          || _la == loxParser::T__27)) {
            dynamic_cast<TermContext *>(_localctx)->sign = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(212);
          term(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(217);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

loxParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::UnaryContext* loxParser::UnaryContext::unary() {
  return getRuleContext<loxParser::UnaryContext>(0);
}

loxParser::CallContext* loxParser::UnaryContext::call() {
  return getRuleContext<loxParser::CallContext>(0);
}


size_t loxParser::UnaryContext::getRuleIndex() const {
  return loxParser::RuleUnary;
}

void loxParser::UnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary(this);
}

void loxParser::UnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary(this);
}

loxParser::UnaryContext* loxParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 42, loxParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__27:
      case loxParser::T__28: {
        enterOuterAlt(_localctx, 1);
        setState(218);
        _la = _input->LA(1);
        if (!(_la == loxParser::T__27

        || _la == loxParser::T__28)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(219);
        unary();
        break;
      }

      case loxParser::T__9:
      case loxParser::T__29:
      case loxParser::T__30:
      case loxParser::T__31:
      case loxParser::T__32:
      case loxParser::T__33:
      case loxParser::NUMBER:
      case loxParser::STRING:
      case loxParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(220);
        call();
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

//----------------- CallContext ------------------------------------------------------------------

loxParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

loxParser::PrimaryContext* loxParser::CallContext::primary() {
  return getRuleContext<loxParser::PrimaryContext>(0);
}

std::vector<tree::TerminalNode *> loxParser::CallContext::IDENTIFIER() {
  return getTokens(loxParser::IDENTIFIER);
}

tree::TerminalNode* loxParser::CallContext::IDENTIFIER(size_t i) {
  return getToken(loxParser::IDENTIFIER, i);
}

std::vector<loxParser::ArgumentsContext *> loxParser::CallContext::arguments() {
  return getRuleContexts<loxParser::ArgumentsContext>();
}

loxParser::ArgumentsContext* loxParser::CallContext::arguments(size_t i) {
  return getRuleContext<loxParser::ArgumentsContext>(i);
}


size_t loxParser::CallContext::getRuleIndex() const {
  return loxParser::RuleCall;
}

void loxParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void loxParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}

loxParser::CallContext* loxParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 44, loxParser::RuleCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(223);
    primary();
    setState(233);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(231);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case loxParser::T__9: {
            setState(224);
            match(loxParser::T__9);
            setState(226);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << loxParser::T__9)
              | (1ULL << loxParser::T__27)
              | (1ULL << loxParser::T__28)
              | (1ULL << loxParser::T__29)
              | (1ULL << loxParser::T__30)
              | (1ULL << loxParser::T__31)
              | (1ULL << loxParser::T__32)
              | (1ULL << loxParser::T__33)
              | (1ULL << loxParser::NUMBER)
              | (1ULL << loxParser::STRING)
              | (1ULL << loxParser::IDENTIFIER))) != 0)) {
              setState(225);
              arguments();
            }
            setState(228);
            match(loxParser::T__10);
            break;
          }

          case loxParser::T__16: {
            setState(229);
            match(loxParser::T__16);
            setState(230);
            match(loxParser::IDENTIFIER);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(235);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

loxParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* loxParser::PrimaryContext::NUMBER() {
  return getToken(loxParser::NUMBER, 0);
}

tree::TerminalNode* loxParser::PrimaryContext::STRING() {
  return getToken(loxParser::STRING, 0);
}

tree::TerminalNode* loxParser::PrimaryContext::IDENTIFIER() {
  return getToken(loxParser::IDENTIFIER, 0);
}

loxParser::ExpressionContext* loxParser::PrimaryContext::expression() {
  return getRuleContext<loxParser::ExpressionContext>(0);
}


size_t loxParser::PrimaryContext::getRuleIndex() const {
  return loxParser::RulePrimary;
}

void loxParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void loxParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

loxParser::PrimaryContext* loxParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 46, loxParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__29: {
        enterOuterAlt(_localctx, 1);
        setState(236);
        match(loxParser::T__29);
        break;
      }

      case loxParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(237);
        match(loxParser::T__30);
        break;
      }

      case loxParser::T__31: {
        enterOuterAlt(_localctx, 3);
        setState(238);
        match(loxParser::T__31);
        break;
      }

      case loxParser::T__32: {
        enterOuterAlt(_localctx, 4);
        setState(239);
        match(loxParser::T__32);
        break;
      }

      case loxParser::NUMBER: {
        enterOuterAlt(_localctx, 5);
        setState(240);
        match(loxParser::NUMBER);
        break;
      }

      case loxParser::STRING: {
        enterOuterAlt(_localctx, 6);
        setState(241);
        match(loxParser::STRING);
        break;
      }

      case loxParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 7);
        setState(242);
        match(loxParser::IDENTIFIER);
        break;
      }

      case loxParser::T__9: {
        enterOuterAlt(_localctx, 8);
        setState(243);
        match(loxParser::T__9);
        setState(244);
        expression();
        setState(245);
        match(loxParser::T__10);
        break;
      }

      case loxParser::T__33: {
        enterOuterAlt(_localctx, 9);
        setState(247);
        match(loxParser::T__33);
        setState(248);
        match(loxParser::T__16);
        setState(249);
        match(loxParser::IDENTIFIER);
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

//----------------- FunctionContext ------------------------------------------------------------------

loxParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* loxParser::FunctionContext::IDENTIFIER() {
  return getToken(loxParser::IDENTIFIER, 0);
}

loxParser::BlockContext* loxParser::FunctionContext::block() {
  return getRuleContext<loxParser::BlockContext>(0);
}

loxParser::ParametersContext* loxParser::FunctionContext::parameters() {
  return getRuleContext<loxParser::ParametersContext>(0);
}


size_t loxParser::FunctionContext::getRuleIndex() const {
  return loxParser::RuleFunction;
}

void loxParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void loxParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

loxParser::FunctionContext* loxParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 48, loxParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(loxParser::IDENTIFIER);
    setState(253);
    match(loxParser::T__9);
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == loxParser::IDENTIFIER) {
      setState(254);
      parameters();
    }
    setState(257);
    match(loxParser::T__10);
    setState(258);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

loxParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> loxParser::ParametersContext::IDENTIFIER() {
  return getTokens(loxParser::IDENTIFIER);
}

tree::TerminalNode* loxParser::ParametersContext::IDENTIFIER(size_t i) {
  return getToken(loxParser::IDENTIFIER, i);
}


size_t loxParser::ParametersContext::getRuleIndex() const {
  return loxParser::RuleParameters;
}

void loxParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void loxParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}

loxParser::ParametersContext* loxParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 50, loxParser::RuleParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(loxParser::IDENTIFIER);
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__34) {
      setState(261);
      match(loxParser::T__34);
      setState(262);
      match(loxParser::IDENTIFIER);
      setState(267);
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

//----------------- ArgumentsContext ------------------------------------------------------------------

loxParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<loxParser::ExpressionContext *> loxParser::ArgumentsContext::expression() {
  return getRuleContexts<loxParser::ExpressionContext>();
}

loxParser::ExpressionContext* loxParser::ArgumentsContext::expression(size_t i) {
  return getRuleContext<loxParser::ExpressionContext>(i);
}


size_t loxParser::ArgumentsContext::getRuleIndex() const {
  return loxParser::RuleArguments;
}

void loxParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void loxParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<loxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}

loxParser::ArgumentsContext* loxParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 52, loxParser::RuleArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    expression();
    setState(273);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__34) {
      setState(269);
      match(loxParser::T__34);
      setState(270);
      expression();
      setState(275);
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

bool loxParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 20: return termSempred(dynamic_cast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool loxParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> loxParser::_decisionToDFA;
atn::PredictionContextCache loxParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN loxParser::_atn;
std::vector<uint16_t> loxParser::_serializedATN;

std::vector<std::string> loxParser::_ruleNames = {
  "program", "declaration", "classDecl", "funDecl", "varDecl", "statement", 
  "exprStmt", "forStmt", "ifStmt", "elseStmt", "printStmt", "returnStmt", 
  "whileStmt", "block", "expression", "assignment", "logic_or", "logic_and", 
  "equality", "comparison", "term", "unary", "call", "primary", "function", 
  "parameters", "arguments"
};

std::vector<std::string> loxParser::_literalNames = {
  "", "'class'", "'<'", "'{'", "'}'", "'fun'", "'var'", "'='", "';'", "'for'", 
  "'('", "')'", "'if'", "'else'", "'print'", "'return'", "'while'", "'.'", 
  "'or'", "'and'", "'!='", "'=='", "'>'", "'>='", "'<='", "'*'", "'/'", 
  "'+'", "'-'", "'!'", "'true'", "'false'", "'nil'", "'this'", "'super'", 
  "','"
};

std::vector<std::string> loxParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "NUMBER", "STRING", "IDENTIFIER", "ALPHA", "DIGIT", "WS"
};

dfa::Vocabulary loxParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> loxParser::_tokenNames;

loxParser::Initializer::Initializer() {
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
    0x3, 0x2b, 0x117, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x3, 0x2, 0x7, 0x2, 0x3a, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x3d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x45, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x4b, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x4f, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x52, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x5d, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x68, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x72, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0x75, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x79, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x84, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x8f, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x9b, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x9e, 
    0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xa7, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xad, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x7, 0x12, 0xb2, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xb5, 0xb, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xba, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0xbd, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0xc2, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xc5, 0xb, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x7, 0x15, 0xca, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xcd, 
    0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xd8, 0xa, 0x16, 0xc, 
    0x16, 0xe, 0x16, 0xdb, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
    0x17, 0xe0, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xe5, 
    0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0xea, 0xa, 0x18, 
    0xc, 0x18, 0xe, 0x18, 0xed, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xfd, 0xa, 
    0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x102, 0xa, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 
    0x1b, 0x10a, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x10d, 0xb, 0x1b, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x112, 0xa, 0x1c, 0xc, 0x1c, 
    0xe, 0x1c, 0x115, 0xb, 0x1c, 0x3, 0x1c, 0x2, 0x3, 0x2a, 0x1d, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x2, 0x7, 0x3, 0x2, 0x16, 0x17, 0x4, 0x2, 0x4, 0x4, 0x18, 0x1a, 0x3, 
    0x2, 0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x1e, 0x1f, 0x2, 0x126, 
    0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x44, 0x3, 0x2, 0x2, 0x2, 0x6, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x55, 0x3, 0x2, 0x2, 0x2, 0xa, 0x58, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x67, 0x3, 0x2, 0x2, 0x2, 0xe, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x16, 0x88, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8c, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x92, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x20, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xae, 0x3, 0x2, 0x2, 0x2, 0x24, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x28, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xce, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0x30, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x32, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x106, 0x3, 0x2, 0x2, 0x2, 0x36, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x3a, 0x5, 0x4, 0x3, 0x2, 0x39, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x2, 0x2, 0x3, 0x3f, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x40, 0x45, 0x5, 0x6, 0x4, 0x2, 0x41, 0x45, 
    0x5, 0x8, 0x5, 0x2, 0x42, 0x45, 0x5, 0xa, 0x6, 0x2, 0x43, 0x45, 0x5, 
    0xc, 0x7, 0x2, 0x44, 0x40, 0x3, 0x2, 0x2, 0x2, 0x44, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x5, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x3, 0x2, 0x2, 
    0x47, 0x4a, 0x7, 0x28, 0x2, 0x2, 0x48, 0x49, 0x7, 0x4, 0x2, 0x2, 0x49, 
    0x4b, 0x7, 0x28, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x50, 0x7, 
    0x5, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x32, 0x1a, 0x2, 0x4e, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x6, 0x2, 0x2, 0x54, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x7, 0x2, 0x2, 0x56, 0x57, 
    0x5, 0x32, 0x1a, 0x2, 0x57, 0x9, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 
    0x8, 0x2, 0x2, 0x59, 0x5c, 0x7, 0x28, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x9, 
    0x2, 0x2, 0x5b, 0x5d, 0x5, 0x1e, 0x10, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x5f, 0x7, 0xa, 0x2, 0x2, 0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x68, 0x5, 0xe, 0x8, 0x2, 0x61, 0x68, 0x5, 0x10, 0x9, 0x2, 0x62, 0x68, 
    0x5, 0x12, 0xa, 0x2, 0x63, 0x68, 0x5, 0x16, 0xc, 0x2, 0x64, 0x68, 0x5, 
    0x18, 0xd, 0x2, 0x65, 0x68, 0x5, 0x1a, 0xe, 0x2, 0x66, 0x68, 0x5, 0x1c, 
    0xf, 0x2, 0x67, 0x60, 0x3, 0x2, 0x2, 0x2, 0x67, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x62, 0x3, 0x2, 0x2, 0x2, 0x67, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0xd, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x5, 0x1e, 0x10, 0x2, 0x6a, 0x6b, 0x7, 0xa, 0x2, 0x2, 0x6b, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0xb, 0x2, 0x2, 0x6d, 0x71, 0x7, 0xc, 
    0x2, 0x2, 0x6e, 0x72, 0x5, 0xa, 0x6, 0x2, 0x6f, 0x72, 0x5, 0xe, 0x8, 
    0x2, 0x70, 0x72, 0x7, 0xa, 0x2, 0x2, 0x71, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x5, 0x1e, 0x10, 0x2, 0x74, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x78, 0x7, 0xa, 0x2, 0x2, 0x77, 0x79, 0x5, 0x1e, 
    0x10, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xd, 0x2, 0x2, 
    0x7b, 0x7c, 0x5, 0xc, 0x7, 0x2, 0x7c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7e, 0x7, 0xe, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0xc, 0x2, 0x2, 0x7f, 0x80, 
    0x5, 0x1e, 0x10, 0x2, 0x80, 0x81, 0x7, 0xd, 0x2, 0x2, 0x81, 0x83, 0x5, 
    0xc, 0x7, 0x2, 0x82, 0x84, 0x5, 0x14, 0xb, 0x2, 0x83, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x86, 0x7, 0xf, 0x2, 0x2, 0x86, 0x87, 0x5, 0xc, 0x7, 0x2, 
    0x87, 0x15, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x10, 0x2, 0x2, 0x89, 
    0x8a, 0x5, 0x1e, 0x10, 0x2, 0x8a, 0x8b, 0x7, 0xa, 0x2, 0x2, 0x8b, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x8e, 0x7, 0x11, 0x2, 0x2, 0x8d, 0x8f, 0x5, 
    0x1e, 0x10, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0xa, 0x2, 
    0x2, 0x91, 0x19, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0x12, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0xc, 0x2, 0x2, 0x94, 0x95, 0x5, 0x1e, 0x10, 0x2, 0x95, 
    0x96, 0x7, 0xd, 0x2, 0x2, 0x96, 0x97, 0x5, 0xc, 0x7, 0x2, 0x97, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x9c, 0x7, 0x5, 0x2, 0x2, 0x99, 0x9b, 0x5, 
    0x4, 0x3, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xa0, 0x7, 0x6, 0x2, 0x2, 0xa0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa2, 0x5, 0x20, 0x11, 0x2, 0xa2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 
    0x5, 0x2e, 0x18, 0x2, 0xa4, 0xa5, 0x7, 0x13, 0x2, 0x2, 0xa5, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x28, 0x2, 
    0x2, 0xa9, 0xaa, 0x7, 0x9, 0x2, 0x2, 0xaa, 0xad, 0x5, 0x20, 0x11, 0x2, 
    0xab, 0xad, 0x5, 0x22, 0x12, 0x2, 0xac, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0x21, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb3, 
    0x5, 0x24, 0x13, 0x2, 0xaf, 0xb0, 0x7, 0x14, 0x2, 0x2, 0xb0, 0xb2, 0x5, 
    0x24, 0x13, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb6, 0xbb, 0x5, 0x26, 0x14, 0x2, 0xb7, 0xb8, 0x7, 0x15, 0x2, 0x2, 0xb8, 
    0xba, 0x5, 0x26, 0x14, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0x25, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xc3, 0x5, 0x28, 0x15, 0x2, 0xbf, 0xc0, 0x9, 0x2, 0x2, 
    0x2, 0xc0, 0xc2, 0x5, 0x28, 0x15, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x27, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xcb, 0x5, 0x2a, 0x16, 0x2, 0xc7, 0xc8, 0x9, 
    0x3, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x2a, 0x16, 0x2, 0xc9, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x8, 0x16, 0x1, 0x2, 0xcf, 
    0xd0, 0x5, 0x2c, 0x17, 0x2, 0xd0, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 
    0xc, 0x5, 0x2, 0x2, 0xd2, 0xd3, 0x9, 0x4, 0x2, 0x2, 0xd3, 0xd8, 0x5, 
    0x2a, 0x16, 0x6, 0xd4, 0xd5, 0xc, 0x4, 0x2, 0x2, 0xd5, 0xd6, 0x9, 0x5, 
    0x2, 0x2, 0xd6, 0xd8, 0x5, 0x2a, 0x16, 0x5, 0xd7, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 
    0x9, 0x6, 0x2, 0x2, 0xdd, 0xe0, 0x5, 0x2c, 0x17, 0x2, 0xde, 0xe0, 0x5, 
    0x2e, 0x18, 0x2, 0xdf, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xeb, 0x5, 0x30, 0x19, 
    0x2, 0xe2, 0xe4, 0x7, 0xc, 0x2, 0x2, 0xe3, 0xe5, 0x5, 0x36, 0x1c, 0x2, 
    0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 
    0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xea, 0x7, 0xd, 0x2, 0x2, 0xe7, 0xe8, 
    0x7, 0x13, 0x2, 0x2, 0xe8, 0xea, 0x7, 0x28, 0x2, 0x2, 0xe9, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xec, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xfd, 0x7, 0x20, 0x2, 0x2, 0xef, 0xfd, 0x7, 0x21, 0x2, 0x2, 0xf0, 
    0xfd, 0x7, 0x22, 0x2, 0x2, 0xf1, 0xfd, 0x7, 0x23, 0x2, 0x2, 0xf2, 0xfd, 
    0x7, 0x26, 0x2, 0x2, 0xf3, 0xfd, 0x7, 0x27, 0x2, 0x2, 0xf4, 0xfd, 0x7, 
    0x28, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0xc, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x1e, 
    0x10, 0x2, 0xf7, 0xf8, 0x7, 0xd, 0x2, 0x2, 0xf8, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfa, 0x7, 0x24, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x13, 0x2, 0x2, 
    0xfb, 0xfd, 0x7, 0x28, 0x2, 0x2, 0xfc, 0xee, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xff, 0x7, 0x28, 0x2, 0x2, 0xff, 0x101, 0x7, 0xc, 0x2, 0x2, 
    0x100, 0x102, 0x5, 0x34, 0x1b, 0x2, 0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x104, 0x7, 0xd, 0x2, 0x2, 0x104, 0x105, 0x5, 0x1c, 0xf, 0x2, 
    0x105, 0x33, 0x3, 0x2, 0x2, 0x2, 0x106, 0x10b, 0x7, 0x28, 0x2, 0x2, 
    0x107, 0x108, 0x7, 0x25, 0x2, 0x2, 0x108, 0x10a, 0x7, 0x28, 0x2, 0x2, 
    0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10d, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x113, 0x5, 0x1e, 0x10, 0x2, 0x10f, 0x110, 0x7, 0x25, 0x2, 0x2, 0x110, 
    0x112, 0x5, 0x1e, 0x10, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x37, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x3b, 0x44, 0x4a, 0x50, 0x5c, 0x67, 0x71, 
    0x74, 0x78, 0x83, 0x8e, 0x9c, 0xa6, 0xac, 0xb3, 0xbb, 0xc3, 0xcb, 0xd7, 
    0xd9, 0xdf, 0xe4, 0xe9, 0xeb, 0xfc, 0x101, 0x10b, 0x113, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

loxParser::Initializer loxParser::_init;

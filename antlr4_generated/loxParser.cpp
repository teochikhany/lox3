
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
    setState(55);
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
      setState(52);
      declaration();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
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
    setState(64);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(60);
        classDecl();
        break;
      }

      case loxParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(61);
        funDecl();
        break;
      }

      case loxParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(62);
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
        setState(63);
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
    setState(66);
    match(loxParser::T__0);
    setState(67);
    match(loxParser::IDENTIFIER);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == loxParser::T__1) {
      setState(68);
      match(loxParser::T__1);
      setState(69);
      match(loxParser::IDENTIFIER);
    }
    setState(72);
    match(loxParser::T__2);
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::IDENTIFIER) {
      setState(73);
      function();
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(79);
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
    setState(81);
    match(loxParser::T__4);
    setState(82);
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
    setState(84);
    match(loxParser::T__5);
    setState(85);
    match(loxParser::IDENTIFIER);
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == loxParser::T__6) {
      setState(86);
      match(loxParser::T__6);
      setState(87);
      expression();
    }
    setState(90);
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
    setState(99);
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
        setState(92);
        exprStmt();
        break;
      }

      case loxParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(93);
        forStmt();
        break;
      }

      case loxParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(94);
        ifStmt();
        break;
      }

      case loxParser::T__13: {
        enterOuterAlt(_localctx, 4);
        setState(95);
        printStmt();
        break;
      }

      case loxParser::T__14: {
        enterOuterAlt(_localctx, 5);
        setState(96);
        returnStmt();
        break;
      }

      case loxParser::T__15: {
        enterOuterAlt(_localctx, 6);
        setState(97);
        whileStmt();
        break;
      }

      case loxParser::T__2: {
        enterOuterAlt(_localctx, 7);
        setState(98);
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
    setState(101);
    expression();
    setState(102);
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
    setState(104);
    match(loxParser::T__8);
    setState(105);
    match(loxParser::T__9);
    setState(109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__5: {
        setState(106);
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
        setState(107);
        exprStmt();
        break;
      }

      case loxParser::T__7: {
        setState(108);
        match(loxParser::T__7);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(112);
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
      setState(111);
      expression();
    }
    setState(114);
    match(loxParser::T__7);
    setState(116);
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
      setState(115);
      expression();
    }
    setState(118);
    match(loxParser::T__10);
    setState(119);
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

std::vector<loxParser::StatementContext *> loxParser::IfStmtContext::statement() {
  return getRuleContexts<loxParser::StatementContext>();
}

loxParser::StatementContext* loxParser::IfStmtContext::statement(size_t i) {
  return getRuleContext<loxParser::StatementContext>(i);
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
    setState(121);
    match(loxParser::T__11);
    setState(122);
    match(loxParser::T__9);
    setState(123);
    expression();
    setState(124);
    match(loxParser::T__10);
    setState(125);
    statement();
    setState(128);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(126);
      match(loxParser::T__12);
      setState(127);
      statement();
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
  enterRule(_localctx, 18, loxParser::RulePrintStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(loxParser::T__13);
    setState(131);
    expression();
    setState(132);
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
  enterRule(_localctx, 20, loxParser::RuleReturnStmt);
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
    setState(134);
    match(loxParser::T__14);
    setState(136);
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
      setState(135);
      expression();
    }
    setState(138);
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
  enterRule(_localctx, 22, loxParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(loxParser::T__15);
    setState(141);
    match(loxParser::T__9);
    setState(142);
    expression();
    setState(143);
    match(loxParser::T__10);
    setState(144);
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
  enterRule(_localctx, 24, loxParser::RuleBlock);
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
    setState(146);
    match(loxParser::T__2);
    setState(150);
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
      setState(147);
      declaration();
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(153);
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
  enterRule(_localctx, 26, loxParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
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
  enterRule(_localctx, 28, loxParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(160);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(157);
        call();
        setState(158);
        match(loxParser::T__16);
        break;
      }

      default:
        break;
      }
      setState(162);
      match(loxParser::IDENTIFIER);
      setState(163);
      match(loxParser::T__6);
      setState(164);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(165);
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
  enterRule(_localctx, 30, loxParser::RuleLogic_or);
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
    setState(168);
    logic_and();
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__17) {
      setState(169);
      match(loxParser::T__17);
      setState(170);
      logic_and();
      setState(175);
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
  enterRule(_localctx, 32, loxParser::RuleLogic_and);
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
    setState(176);
    equality();
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__18) {
      setState(177);
      match(loxParser::T__18);
      setState(178);
      equality();
      setState(183);
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
  enterRule(_localctx, 34, loxParser::RuleEquality);
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
    setState(184);
    comparison();
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__19

    || _la == loxParser::T__20) {
      setState(185);
      _la = _input->LA(1);
      if (!(_la == loxParser::T__19

      || _la == loxParser::T__20)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(186);
      comparison();
      setState(191);
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
  enterRule(_localctx, 36, loxParser::RuleComparison);
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
    setState(192);
    term(0);
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << loxParser::T__1)
      | (1ULL << loxParser::T__21)
      | (1ULL << loxParser::T__22)
      | (1ULL << loxParser::T__23))) != 0)) {
      setState(193);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << loxParser::T__1)
        | (1ULL << loxParser::T__21)
        | (1ULL << loxParser::T__22)
        | (1ULL << loxParser::T__23))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(194);
      term(0);
      setState(199);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, loxParser::RuleTerm, precedence);

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
    setState(201);
    unary();
    _ctx->stop = _input->LT(-1);
    setState(211);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(209);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(203);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(204);
          _la = _input->LA(1);
          if (!(_la == loxParser::T__24

          || _la == loxParser::T__25)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(205);
          term(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(206);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(207);
          _la = _input->LA(1);
          if (!(_la == loxParser::T__26

          || _la == loxParser::T__27)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(208);
          term(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(213);
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
  enterRule(_localctx, 40, loxParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__27:
      case loxParser::T__28: {
        enterOuterAlt(_localctx, 1);
        setState(214);
        _la = _input->LA(1);
        if (!(_la == loxParser::T__27

        || _la == loxParser::T__28)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(215);
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
        setState(216);
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
  enterRule(_localctx, 42, loxParser::RuleCall);
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
    setState(219);
    primary();
    setState(229);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(227);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case loxParser::T__9: {
            setState(220);
            match(loxParser::T__9);
            setState(222);
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
              setState(221);
              arguments();
            }
            setState(224);
            match(loxParser::T__10);
            break;
          }

          case loxParser::T__16: {
            setState(225);
            match(loxParser::T__16);
            setState(226);
            match(loxParser::IDENTIFIER);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(231);
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
  enterRule(_localctx, 44, loxParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case loxParser::T__29: {
        enterOuterAlt(_localctx, 1);
        setState(232);
        match(loxParser::T__29);
        break;
      }

      case loxParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(233);
        match(loxParser::T__30);
        break;
      }

      case loxParser::T__31: {
        enterOuterAlt(_localctx, 3);
        setState(234);
        match(loxParser::T__31);
        break;
      }

      case loxParser::T__32: {
        enterOuterAlt(_localctx, 4);
        setState(235);
        match(loxParser::T__32);
        break;
      }

      case loxParser::NUMBER: {
        enterOuterAlt(_localctx, 5);
        setState(236);
        match(loxParser::NUMBER);
        break;
      }

      case loxParser::STRING: {
        enterOuterAlt(_localctx, 6);
        setState(237);
        match(loxParser::STRING);
        break;
      }

      case loxParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 7);
        setState(238);
        match(loxParser::IDENTIFIER);
        break;
      }

      case loxParser::T__9: {
        enterOuterAlt(_localctx, 8);
        setState(239);
        match(loxParser::T__9);
        setState(240);
        expression();
        setState(241);
        match(loxParser::T__10);
        break;
      }

      case loxParser::T__33: {
        enterOuterAlt(_localctx, 9);
        setState(243);
        match(loxParser::T__33);
        setState(244);
        match(loxParser::T__16);
        setState(245);
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
  enterRule(_localctx, 46, loxParser::RuleFunction);
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
    setState(248);
    match(loxParser::IDENTIFIER);
    setState(249);
    match(loxParser::T__9);
    setState(251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == loxParser::IDENTIFIER) {
      setState(250);
      parameters();
    }
    setState(253);
    match(loxParser::T__10);
    setState(254);
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
  enterRule(_localctx, 48, loxParser::RuleParameters);
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
    setState(256);
    match(loxParser::IDENTIFIER);
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__34) {
      setState(257);
      match(loxParser::T__34);
      setState(258);
      match(loxParser::IDENTIFIER);
      setState(263);
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
  enterRule(_localctx, 50, loxParser::RuleArguments);
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
    setState(264);
    expression();
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == loxParser::T__34) {
      setState(265);
      match(loxParser::T__34);
      setState(266);
      expression();
      setState(271);
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
    case 19: return termSempred(dynamic_cast<TermContext *>(context), predicateIndex);

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
  "exprStmt", "forStmt", "ifStmt", "printStmt", "returnStmt", "whileStmt", 
  "block", "expression", "assignment", "logic_or", "logic_and", "equality", 
  "comparison", "term", "unary", "call", "primary", "function", "parameters", 
  "arguments"
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
    0x3, 0x2b, 0x113, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x3, 0x2, 0x7, 0x2, 0x38, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3b, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x43, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x49, 
    0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x4d, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x50, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5b, 0xa, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x66, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x70, 0xa, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x73, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x77, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x83, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x8b, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x97, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x9a, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xa3, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xa9, 0xa, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xae, 0xa, 0x11, 0xc, 0x11, 0xe, 
    0x11, 0xb1, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xb6, 
    0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xb9, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0xbe, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xc1, 0xb, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xc6, 0xa, 0x14, 0xc, 
    0x14, 0xe, 0x14, 0xc9, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 
    0xd4, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xd7, 0xb, 0x15, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0xdc, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x5, 0x17, 0xe1, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 
    0x17, 0xe6, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xe9, 0xb, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0xf9, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0xfe, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x106, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x109, 
    0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x10e, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x111, 0xb, 0x1b, 0x3, 0x1b, 0x2, 0x3, 0x28, 0x1c, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x2, 0x7, 0x3, 0x2, 0x16, 0x17, 0x4, 0x2, 0x4, 0x4, 0x18, 0x1a, 
    0x3, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x1e, 0x1f, 0x2, 
    0x123, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x4, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x44, 0x3, 0x2, 0x2, 0x2, 0x8, 0x53, 0x3, 0x2, 0x2, 0x2, 0xa, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x65, 0x3, 0x2, 0x2, 0x2, 0xe, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x84, 0x3, 0x2, 0x2, 0x2, 0x16, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x94, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x20, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x28, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x30, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x102, 0x3, 0x2, 0x2, 0x2, 0x34, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x38, 0x5, 0x4, 0x3, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x7, 0x2, 0x2, 0x3, 0x3d, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x43, 0x5, 0x6, 0x4, 0x2, 0x3f, 0x43, 0x5, 0x8, 0x5, 0x2, 
    0x40, 0x43, 0x5, 0xa, 0x6, 0x2, 0x41, 0x43, 0x5, 0xc, 0x7, 0x2, 0x42, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x3, 0x2, 0x2, 0x45, 0x48, 0x7, 0x28, 
    0x2, 0x2, 0x46, 0x47, 0x7, 0x4, 0x2, 0x2, 0x47, 0x49, 0x7, 0x28, 0x2, 
    0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4e, 0x7, 0x5, 0x2, 0x2, 0x4b, 
    0x4d, 0x5, 0x30, 0x19, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x52, 0x7, 0x6, 0x2, 0x2, 0x52, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x54, 0x7, 0x7, 0x2, 0x2, 0x54, 0x55, 0x5, 0x30, 0x19, 0x2, 
    0x55, 0x9, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0x8, 0x2, 0x2, 0x57, 
    0x5a, 0x7, 0x28, 0x2, 0x2, 0x58, 0x59, 0x7, 0x9, 0x2, 0x2, 0x59, 0x5b, 
    0x5, 0x1c, 0xf, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0xa, 
    0x2, 0x2, 0x5d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x66, 0x5, 0xe, 0x8, 
    0x2, 0x5f, 0x66, 0x5, 0x10, 0x9, 0x2, 0x60, 0x66, 0x5, 0x12, 0xa, 0x2, 
    0x61, 0x66, 0x5, 0x14, 0xb, 0x2, 0x62, 0x66, 0x5, 0x16, 0xc, 0x2, 0x63, 
    0x66, 0x5, 0x18, 0xd, 0x2, 0x64, 0x66, 0x5, 0x1a, 0xe, 0x2, 0x65, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x65, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x61, 0x3, 0x2, 0x2, 0x2, 0x65, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0xd, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x5, 0x1c, 0xf, 0x2, 
    0x68, 0x69, 0x7, 0xa, 0x2, 0x2, 0x69, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6b, 0x7, 0xb, 0x2, 0x2, 0x6b, 0x6f, 0x7, 0xc, 0x2, 0x2, 0x6c, 0x70, 
    0x5, 0xa, 0x6, 0x2, 0x6d, 0x70, 0x5, 0xe, 0x8, 0x2, 0x6e, 0x70, 0x7, 
    0xa, 0x2, 0x2, 0x6f, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x73, 0x5, 0x1c, 0xf, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x76, 0x7, 0xa, 0x2, 0x2, 0x75, 0x77, 0x5, 0x1c, 0xf, 0x2, 0x76, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0xd, 0x2, 0x2, 0x79, 0x7a, 0x5, 0xc, 
    0x7, 0x2, 0x7a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0xe, 0x2, 
    0x2, 0x7c, 0x7d, 0x7, 0xc, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x1c, 0xf, 0x2, 
    0x7e, 0x7f, 0x7, 0xd, 0x2, 0x2, 0x7f, 0x82, 0x5, 0xc, 0x7, 0x2, 0x80, 
    0x81, 0x7, 0xf, 0x2, 0x2, 0x81, 0x83, 0x5, 0xc, 0x7, 0x2, 0x82, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x10, 0x2, 0x2, 0x85, 0x86, 0x5, 0x1c, 
    0xf, 0x2, 0x86, 0x87, 0x7, 0xa, 0x2, 0x2, 0x87, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x8a, 0x7, 0x11, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x1c, 0xf, 0x2, 
    0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0xa, 0x2, 0x2, 0x8d, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x12, 0x2, 0x2, 0x8f, 0x90, 0x7, 
    0xc, 0x2, 0x2, 0x90, 0x91, 0x5, 0x1c, 0xf, 0x2, 0x91, 0x92, 0x7, 0xd, 
    0x2, 0x2, 0x92, 0x93, 0x5, 0xc, 0x7, 0x2, 0x93, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x98, 0x7, 0x5, 0x2, 0x2, 0x95, 0x97, 0x5, 0x4, 0x3, 0x2, 
    0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 
    0x6, 0x2, 0x2, 0x9c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x1e, 
    0x10, 0x2, 0x9e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x2c, 0x17, 
    0x2, 0xa0, 0xa1, 0x7, 0x13, 0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x28, 0x2, 0x2, 0xa5, 0xa6, 
    0x7, 0x9, 0x2, 0x2, 0xa6, 0xa9, 0x5, 0x1e, 0x10, 0x2, 0xa7, 0xa9, 0x5, 
    0x20, 0x11, 0x2, 0xa8, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xaf, 0x5, 0x22, 0x12, 
    0x2, 0xab, 0xac, 0x7, 0x14, 0x2, 0x2, 0xac, 0xae, 0x5, 0x22, 0x12, 0x2, 
    0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb7, 0x5, 
    0x24, 0x13, 0x2, 0xb3, 0xb4, 0x7, 0x15, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0x24, 
    0x13, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbf, 0x5, 0x26, 0x14, 0x2, 0xbb, 0xbc, 0x9, 0x2, 0x2, 0x2, 0xbc, 0xbe, 
    0x5, 0x26, 0x14, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0x25, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xc7, 0x5, 0x28, 0x15, 0x2, 0xc3, 0xc4, 0x9, 0x3, 0x2, 0x2, 
    0xc4, 0xc6, 0x5, 0x28, 0x15, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0x27, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xca, 0xcb, 0x8, 0x15, 0x1, 0x2, 0xcb, 0xcc, 0x5, 0x2a, 
    0x16, 0x2, 0xcc, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0xc, 0x5, 0x2, 
    0x2, 0xce, 0xcf, 0x9, 0x4, 0x2, 0x2, 0xcf, 0xd4, 0x5, 0x28, 0x15, 0x6, 
    0xd0, 0xd1, 0xc, 0x4, 0x2, 0x2, 0xd1, 0xd2, 0x9, 0x5, 0x2, 0x2, 0xd2, 
    0xd4, 0x5, 0x28, 0x15, 0x5, 0xd3, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x9, 0x6, 0x2, 
    0x2, 0xd9, 0xdc, 0x5, 0x2a, 0x16, 0x2, 0xda, 0xdc, 0x5, 0x2c, 0x17, 
    0x2, 0xdb, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe7, 0x5, 0x2e, 0x18, 0x2, 0xde, 
    0xe0, 0x7, 0xc, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x34, 0x1b, 0x2, 0xe0, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe6, 0x7, 0xd, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x13, 
    0x2, 0x2, 0xe4, 0xe6, 0x7, 0x28, 0x2, 0x2, 0xe5, 0xde, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0xf9, 
    0x7, 0x20, 0x2, 0x2, 0xeb, 0xf9, 0x7, 0x21, 0x2, 0x2, 0xec, 0xf9, 0x7, 
    0x22, 0x2, 0x2, 0xed, 0xf9, 0x7, 0x23, 0x2, 0x2, 0xee, 0xf9, 0x7, 0x26, 
    0x2, 0x2, 0xef, 0xf9, 0x7, 0x27, 0x2, 0x2, 0xf0, 0xf9, 0x7, 0x28, 0x2, 
    0x2, 0xf1, 0xf2, 0x7, 0xc, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x1c, 0xf, 0x2, 
    0xf3, 0xf4, 0x7, 0xd, 0x2, 0x2, 0xf4, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf6, 0x7, 0x24, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x13, 0x2, 0x2, 0xf7, 0xf9, 
    0x7, 0x28, 0x2, 0x2, 0xf8, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xec, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf9, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0xfb, 0x7, 0x28, 0x2, 0x2, 0xfb, 0xfd, 0x7, 0xc, 0x2, 0x2, 0xfc, 0xfe, 
    0x5, 0x32, 0x1a, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x7, 0xd, 
    0x2, 0x2, 0x100, 0x101, 0x5, 0x1a, 0xe, 0x2, 0x101, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x107, 0x7, 0x28, 0x2, 0x2, 0x103, 0x104, 0x7, 0x25, 
    0x2, 0x2, 0x104, 0x106, 0x7, 0x28, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10f, 0x5, 0x1c, 0xf, 
    0x2, 0x10b, 0x10c, 0x7, 0x25, 0x2, 0x2, 0x10c, 0x10e, 0x5, 0x1c, 0xf, 
    0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x35, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x39, 0x42, 0x48, 0x4e, 0x5a, 0x65, 0x6f, 0x72, 0x76, 0x82, 0x8a, 
    0x98, 0xa2, 0xa8, 0xaf, 0xb7, 0xbf, 0xc7, 0xd3, 0xd5, 0xdb, 0xe0, 0xe5, 
    0xe7, 0xf8, 0xfd, 0x107, 0x10f, 
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

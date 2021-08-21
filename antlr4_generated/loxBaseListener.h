
// Generated from lox.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "loxListener.h"


/**
 * This class provides an empty implementation of loxListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  loxBaseListener : public loxListener {
public:

  virtual void enterProgram(loxParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(loxParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDeclaration(loxParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(loxParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterClassDecl(loxParser::ClassDeclContext * /*ctx*/) override { }
  virtual void exitClassDecl(loxParser::ClassDeclContext * /*ctx*/) override { }

  virtual void enterFunDecl(loxParser::FunDeclContext * /*ctx*/) override { }
  virtual void exitFunDecl(loxParser::FunDeclContext * /*ctx*/) override { }

  virtual void enterVarDecl(loxParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(loxParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterStatement(loxParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(loxParser::StatementContext * /*ctx*/) override { }

  virtual void enterExprStmt(loxParser::ExprStmtContext * /*ctx*/) override { }
  virtual void exitExprStmt(loxParser::ExprStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(loxParser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(loxParser::ForStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(loxParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(loxParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterPrintStmt(loxParser::PrintStmtContext * /*ctx*/) override { }
  virtual void exitPrintStmt(loxParser::PrintStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(loxParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(loxParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(loxParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(loxParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterBlock(loxParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(loxParser::BlockContext * /*ctx*/) override { }

  virtual void enterExpression(loxParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(loxParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment(loxParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(loxParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterLogic_or(loxParser::Logic_orContext * /*ctx*/) override { }
  virtual void exitLogic_or(loxParser::Logic_orContext * /*ctx*/) override { }

  virtual void enterLogic_and(loxParser::Logic_andContext * /*ctx*/) override { }
  virtual void exitLogic_and(loxParser::Logic_andContext * /*ctx*/) override { }

  virtual void enterEquality(loxParser::EqualityContext * /*ctx*/) override { }
  virtual void exitEquality(loxParser::EqualityContext * /*ctx*/) override { }

  virtual void enterComparison(loxParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(loxParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterTerm(loxParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(loxParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(loxParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(loxParser::FactorContext * /*ctx*/) override { }

  virtual void enterUnary(loxParser::UnaryContext * /*ctx*/) override { }
  virtual void exitUnary(loxParser::UnaryContext * /*ctx*/) override { }

  virtual void enterCall(loxParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(loxParser::CallContext * /*ctx*/) override { }

  virtual void enterPrimary(loxParser::PrimaryContext * ctx) override { }
  virtual void exitPrimary(loxParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterFunction(loxParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(loxParser::FunctionContext * /*ctx*/) override { }

  virtual void enterParameters(loxParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(loxParser::ParametersContext * /*ctx*/) override { }

  virtual void enterArguments(loxParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(loxParser::ArgumentsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


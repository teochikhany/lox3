
// Generated from lox.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "loxParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by loxParser.
 */
class  loxListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(loxParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(loxParser::ProgramContext *ctx) = 0;

  virtual void enterDeclaration(loxParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(loxParser::DeclarationContext *ctx) = 0;

  virtual void enterClassDecl(loxParser::ClassDeclContext *ctx) = 0;
  virtual void exitClassDecl(loxParser::ClassDeclContext *ctx) = 0;

  virtual void enterFunDecl(loxParser::FunDeclContext *ctx) = 0;
  virtual void exitFunDecl(loxParser::FunDeclContext *ctx) = 0;

  virtual void enterVarDecl(loxParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(loxParser::VarDeclContext *ctx) = 0;

  virtual void enterStatement(loxParser::StatementContext *ctx) = 0;
  virtual void exitStatement(loxParser::StatementContext *ctx) = 0;

  virtual void enterExprStmt(loxParser::ExprStmtContext *ctx) = 0;
  virtual void exitExprStmt(loxParser::ExprStmtContext *ctx) = 0;

  virtual void enterForStmt(loxParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(loxParser::ForStmtContext *ctx) = 0;

  virtual void enterIfStmt(loxParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(loxParser::IfStmtContext *ctx) = 0;

  virtual void enterPrintStmt(loxParser::PrintStmtContext *ctx) = 0;
  virtual void exitPrintStmt(loxParser::PrintStmtContext *ctx) = 0;

  virtual void enterReturnStmt(loxParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(loxParser::ReturnStmtContext *ctx) = 0;

  virtual void enterWhileStmt(loxParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(loxParser::WhileStmtContext *ctx) = 0;

  virtual void enterBlock(loxParser::BlockContext *ctx) = 0;
  virtual void exitBlock(loxParser::BlockContext *ctx) = 0;

  virtual void enterExpression(loxParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(loxParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignment(loxParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(loxParser::AssignmentContext *ctx) = 0;

  virtual void enterLogic_or(loxParser::Logic_orContext *ctx) = 0;
  virtual void exitLogic_or(loxParser::Logic_orContext *ctx) = 0;

  virtual void enterLogic_and(loxParser::Logic_andContext *ctx) = 0;
  virtual void exitLogic_and(loxParser::Logic_andContext *ctx) = 0;

  virtual void enterEquality(loxParser::EqualityContext *ctx) = 0;
  virtual void exitEquality(loxParser::EqualityContext *ctx) = 0;

  virtual void enterComparison(loxParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(loxParser::ComparisonContext *ctx) = 0;

  virtual void enterTerm(loxParser::TermContext *ctx) = 0;
  virtual void exitTerm(loxParser::TermContext *ctx) = 0;

  virtual void enterUnary(loxParser::UnaryContext *ctx) = 0;
  virtual void exitUnary(loxParser::UnaryContext *ctx) = 0;

  virtual void enterCall(loxParser::CallContext *ctx) = 0;
  virtual void exitCall(loxParser::CallContext *ctx) = 0;

  virtual void enterPrimary(loxParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(loxParser::PrimaryContext *ctx) = 0;

  virtual void enterFunction(loxParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(loxParser::FunctionContext *ctx) = 0;

  virtual void enterParameters(loxParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(loxParser::ParametersContext *ctx) = 0;

  virtual void enterArguments(loxParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(loxParser::ArgumentsContext *ctx) = 0;


};


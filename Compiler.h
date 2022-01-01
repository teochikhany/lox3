#pragma once

#include "Chunk.h"
#include "antlr4_generated/loxBaseListener.h"
#include "antlr4_generated/loxBaseListener.cpp"


class Compiler : public loxBaseListener
{
public:
	Compiler(Chunk* chunk_) { chunk = chunk_; };
	void enterPrimary(loxParser::PrimaryContext* ctx) override;
	void exitReturnStmt(loxParser::ReturnStmtContext* ctx) override;
	void exitProgram(loxParser::ProgramContext* ctx) override;
	void exitUnary(loxParser::UnaryContext* ctx) override;
	void exitTerm(loxParser::TermContext* ctx) override;
	void exitEquality(loxParser::EqualityContext* ctx) override;
	void exitComparison(loxParser::ComparisonContext* ctx) override;

	void enterIfStmt(loxParser::IfStmtContext* ctx) override;
	void enterWhileStmt(loxParser::WhileStmtContext* ctx) override;
	void enterExpression(loxParser::ExpressionContext* ctx) override;
	void exitVarDecl(loxParser::VarDeclContext* ctx) override;
	void exitAssignment(loxParser::AssignmentContext* ctx) override;

	void exitPrintStmt(loxParser::PrintStmtContext* ctx) override;

private:
	Chunk* chunk;
};


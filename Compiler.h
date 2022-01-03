#pragma once

#include "Chunk.h"
#include "Local.h"
#include "antlr4_generated/loxBaseListener.h"

#include <vector>

// need to add a destructor for freeing the chunk pointer
class Compiler : public loxBaseListener
{
public:
	Compiler(Chunk* chunk_) { chunk = chunk_; scopeDepth = 0; locals = std::vector<Local>(); };

	void enterPrimary(loxParser::PrimaryContext* ctx) override;
	void exitReturnStmt(loxParser::ReturnStmtContext* ctx) override;
	void exitProgram(loxParser::ProgramContext* ctx) override;
	void exitUnary(loxParser::UnaryContext* ctx) override;
	void exitTerm(loxParser::TermContext* ctx) override;
	void exitEquality(loxParser::EqualityContext* ctx) override;
	void exitComparison(loxParser::ComparisonContext* ctx) override;
	void enterBlock(loxParser::BlockContext* ctx) override;

	void enterIfStmt(loxParser::IfStmtContext* ctx) override;
	void enterWhileStmt(loxParser::WhileStmtContext* ctx) override;
	void enterExpression(loxParser::ExpressionContext* ctx) override;
	void exitVarDecl(loxParser::VarDeclContext* ctx) override;
	void exitAssignment(loxParser::AssignmentContext* ctx) override;
	void exitBlock(loxParser::BlockContext* ctx) override;

	void exitPrintStmt(loxParser::PrintStmtContext* ctx) override;

private:
	Chunk* chunk;
	std::vector<Local> locals;
	int scopeDepth;

	uint8_t localOffset(std::string name);
};


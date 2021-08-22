#include "Chunk.h"

#pragma once

class Compiler : public loxBaseListener
{
public:
	Compiler(Chunk* chunk_) { chunk = chunk_; };
	void enterPrimary(loxParser::PrimaryContext* ctx) override;
	void exitReturnStmt(loxParser::ReturnStmtContext* ctx) override;
	void exitProgram(loxParser::ProgramContext* ctx) override;
	void exitUnary(loxParser::UnaryContext* ctx) override;
	void exitTerm(loxParser::TermContext* ctx) override;
	// void exitFactor(loxParser::FactorContext* ctx) override;
	// void exitMul_div(loxParser::Mul_divContext* ctx) override;

private:
	Chunk* chunk;
};


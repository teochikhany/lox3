#include "antlr4_generated/loxBaseListener.h"
#include "antlr4_generated/loxBaseListener.cpp"

#include "Compiler.h"
#include "Debug.h"
#include "VM.h"


void Compiler::enterPrimary(loxParser::PrimaryContext* ctx)
{
    double v = std::stod(ctx->getText());

    uint8_t constant = chunk->addConstant(v);
    chunk->WriteChunk(OP_CONSTANT, ctx->getStart()->getLine());  
    chunk->WriteChunk(constant, ctx->getStart()->getLine() );     
}

void Compiler::exitUnary(loxParser::UnaryContext* ctx)
{
    if (ctx->getStart()->getType() == 25) // this may break in the future ?? may use get Text
    {
        chunk->WriteChunk(OP_NEGATE, ctx->getStart()->getLine());
    }
}

void Compiler::exitTerm(loxParser::TermContext* ctx)
{
    int line = ctx->getStart()->getLine();

    if (ctx->children.size() == 3)
    {
        switch (ctx->children[1]->getText()[0])
        {
        case '*': chunk->WriteChunk(OP_MULTIPLY, line); break;
        case '+': chunk->WriteChunk(OP_ADD, line); break;
        case '-': chunk->WriteChunk(OP_SUBTRACT, line); break;
        case '/': chunk->WriteChunk(OP_DIVIDE, line); break;
        default:
            return;
        }
    }
}


void Compiler::exitReturnStmt(loxParser::ReturnStmtContext* ctx)
{
    chunk->WriteChunk(OP_RETURN, ctx->getStart()->getLine());
}

void Compiler::exitProgram(loxParser::ProgramContext* ctx)
{
    VM* vm = new VM();
    vm->interpret(chunk);
    printf("\n\n");
    Debug::disassembleChunk(chunk, "test chunk");
    
    delete vm;
}

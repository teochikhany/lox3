

#include "Compiler.h"
#include "Debug.h"
#include "VM.h"
#include "main.h"



void Compiler::enterPrimary(loxParser::PrimaryContext* ctx) // maybe in antlr I should seperate the different Primaries to eliminate this if statement
{
    if (ctx->children.size() == 1)              // if Primary is not a grouping
    {
        std::string text = ctx->getText();
        int startLine = ctx->getStart()->getLine();

        if (text == "true")
        {
            chunk->WriteChunk(OP_TRUE, startLine);
        }
        else if (text == "false")
        {
            chunk->WriteChunk(OP_FALSE, startLine);
        }
        else if (text == "nil")
        {
            chunk->WriteChunk(OP_NIL, startLine);
        }
        else
        {
            double v = std::stod(text);

            uint8_t constant = chunk->addConstant(Value(v));
            chunk->WriteChunk(OP_CONSTANT, startLine);
            chunk->WriteChunk(constant, startLine);
        }
    }
}

void Compiler::exitEquality(loxParser::EqualityContext* ctx)
{
    int line = ctx->getStart()->getLine();

    if (ctx->children.size() == 3)
    {
        switch (ctx->children[1]->getText()[0])     // maybe to get the ->getType function i need to define it as a token and not just insert the text int he .g4 file
        {
        case '=': chunk->WriteChunk(OP_EQUAL, line); break;
        case '!': chunk->WriteChunk(OP_EQUAL, line); chunk->WriteChunk(OP_NOT, line); break;
        default:
            return;
        }
    }
}

void Compiler::exitComparison(loxParser::ComparisonContext* ctx)
{

    if (ctx->children.size() == 3)
    {
        int line = ctx->getStart()->getLine();
        int size = ctx->children[1]->getText().size();

        // should change this with ->getType after fixing the .g4 antlr file with proper tokens
        switch (ctx->children[1]->getText()[0])     // maybe to get the ->getType function i need to define it as a token and not just insert the text int he .g4 file
        {
        case '<': 
        {
            if (size == 1)
            {
                chunk->WriteChunk(OP_LESS, line); break;
            }
            else
            {
                chunk->WriteChunk(OP_GREATER, line); chunk->WriteChunk(OP_NOT, line); break;
            }
        }

        case '>': 
        {
            if (size == 1)
            {
                chunk->WriteChunk(OP_GREATER, line); break;
            }
            else
            {
                chunk->WriteChunk(OP_LESS, line); chunk->WriteChunk(OP_NOT, line); break;
            }
        }

        default:
            return;
        }
    }
}

void Compiler::exitUnary(loxParser::UnaryContext* ctx)
{

    int type = ctx->getStart()->getType();
    int line = ctx->getStart()->getLine();

    if (type == 25) // this may break in the future ?? may use get Text
    {
        chunk->WriteChunk(OP_NEGATE, line);
    }
    else if (type == 29) 
    {
        chunk->WriteChunk(OP_NOT, line);
    }
}

void Compiler::exitTerm(loxParser::TermContext* ctx)
{
    int line = ctx->getStart()->getLine();

    if (ctx->children.size() == 3)                  // if Term is not just a primary
    {
        // maybe to get the ->getType function i need to define it as a token and not just insert the text in the .g4 file
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

void Compiler::enterIfStmt(loxParser::IfStmtContext* ctx)
{
    int line = ctx->getStart()->getLine();

    // walking the if condition
    auto ifCondition = ctx->expression();
    Helper::Walk(this, ifCondition);

    // writing the jump with a fake offset
    chunk->WriteChunk(OP_JUMP_IF_FALSE, line);
    chunk->WriteChunk(0xff, line);

    int old_size = chunk->getSize() - 1;

    // walking the block inside the if
    auto ifStatement = ctx->statement();
    Helper::Walk(this, ifStatement);

    int old_size2 = 0;

    // I only need to add the OP_JUMP if there is a else statement
    if (ctx->elseStmt())
    {
        // to jump over the else block with a fake offset for now
        chunk->WriteChunk(OP_JUMP, ifStatement->getStop()->getLine());
        chunk->WriteChunk(0xff, line);
        old_size2 = chunk->getSize() - 1;
    }

    // patching the OP_JUMP_IF_FALSE
    chunk->WriteChunkOffset(chunk->getSize() - old_size, old_size);

    if (ctx->elseStmt())
    {
        // walking the block inside the else
        auto elseStatement = ctx->elseStmt()->statement();
        Helper::Walk(this, elseStatement);
        // patch the OP_JUMP
        chunk->WriteChunkOffset(chunk->getSize() - old_size2, old_size2);
    }

    // this removes all the children because we already parsed them and if we leave them it will cause them to be evaluated twice.
    while (ctx->children.size() > 0)
    {
        ctx->removeLastChild();
    }

    //ctx->exitRule(this);
}

void Compiler::enterExpression(loxParser::ExpressionContext* ctx)
{

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

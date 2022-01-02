#include <iostream>

#include "antlr4-runtime.h"

#include "loxLexer.h"
#include "loxParser.h"

#include "main.h"
#include "Chunk.h"
#include "Debug.h"
#include "VM.h"
#include "Compiler.h"


void Helper::Walk(antlr4::tree::ParseTreeListener* t, antlr4::tree::ParseTree* t2)
{
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(t, t2);
}

int main(int argc, const char* argv[]) {

    // Provide the input text in a stream
    printf("Please start entering you're code: \n");

    antlr4::ANTLRInputStream input(std::cin);

    // Create a lexer from the input
    loxLexer lexer(&input);

    // Create a token stream from the lexer
    antlr4::CommonTokenStream tokens(&lexer);
    // tokens.fill();

    // Create a parser from the token stream
    loxParser parser(&tokens);

    antlr4::tree::ParseTree* tree = parser.program();

    Chunk* chunk = new Chunk();

    antlr4::tree::ParseTreeWalker::DEFAULT.walk(new Compiler(chunk), tree);

    return 0;
}

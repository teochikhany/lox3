#include <iostream>

#include "antlr4-runtime.h"

#include "antlr4_generated/loxLexer.h"
#include "antlr4_generated/loxListener.h"
#include "antlr4_generated/loxBaseListener.h"
#include "antlr4_generated/loxParser.h"

#include "antlr4_generated/loxLexer.cpp"
#include "antlr4_generated/loxListener.cpp"
#include "antlr4_generated/loxBaseListener.cpp"
#include "antlr4_generated/loxParser.cpp"

#include "Chunk.h"
#include "Debug.h"
#include "VM.h"
#include "Compiler.h"




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

    tree::ParseTree* tree = parser.program();

    Chunk* chunk = new Chunk();

    tree::ParseTreeWalker::DEFAULT.walk(new Compiler(chunk), tree);

    return 0;
}
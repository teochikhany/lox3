#include "pch.h"

#include "loxLexer.cpp"
#include "loxListener.cpp"
#include "loxBaseListener.cpp"
#include "loxParser.cpp"

#include "Chunk.cpp"
#include "Debug.cpp"
#include "VM.cpp"
#include "Compiler.cpp"
#include "Value.cpp"


void Helper::Walk(antlr4::tree::ParseTreeListener* t, antlr4::tree::ParseTree* t2)
{
    tree::ParseTreeWalker::DEFAULT.walk(t, t2);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
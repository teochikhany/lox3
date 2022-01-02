#include "pch.h"

#include "antlr4-runtime.h"

#include "loxLexer.h"
#include "loxListener.h"
#include "loxBaseListener.h"
#include "loxParser.h"

#include "loxLexer.cpp"
#include "loxListener.cpp"
#include "loxBaseListener.cpp"
#include "loxParser.cpp"

//#include "main.h"
#include "Chunk.h"
#include "Debug.h"
#include "VM.h"
#include "Compiler.h"
#include "Value.h"

//#include "main.cpp"
#include "Chunk.cpp"
#include "Debug.cpp"
#include "VM.cpp"
#include "Compiler.cpp"
#include "Value.cpp"

void Helper::Walk(antlr4::tree::ParseTreeListener* t, antlr4::tree::ParseTree* t2)
{
    tree::ParseTreeWalker::DEFAULT.walk(t, t2);
}

Value custom_main(std::string string_input)
{
    antlr4::ANTLRInputStream input(string_input);
    loxLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    loxParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.program();

    Chunk* chunk = new Chunk();

    antlr4::tree::ParseTreeWalker::DEFAULT.walk(new Compiler(chunk), tree);

    VM* vm = new VM();
    vm->interpret(chunk);

    std::vector<Value> stack = vm->getStack();

    Value lastElement = stack.at(stack.size() - 1);

    delete vm;
    delete chunk;

    return lastElement;
}


TEST(arithmatique, addition) {

    Value lastElement = custom_main("2+5;");

    EXPECT_TRUE(lastElement.isNumber() );
    EXPECT_EQ(7.0, lastElement.getDouble() );
}


TEST(arithmatique, addition_negative) {

    Value lastElement = custom_main("2 + (-5);");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-3.0, lastElement.getDouble());
}


TEST(arithmatique, addition_negative_2) {

    Value lastElement = custom_main("2 + -5;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-3.0, lastElement.getDouble());
}


TEST(arithmatique, multiplication) {

    Value lastElement = custom_main("3 * 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(12.0, lastElement.getDouble());
}


TEST(arithmatique, multiplication_negative) {

    Value lastElement = custom_main("3 * -4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-12.0, lastElement.getDouble());
}


TEST(arithmatique, substraction) {

    Value lastElement = custom_main("4 - 1;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(3.0, lastElement.getDouble());
}


TEST(arithmatique, substraction_negative) {

    Value lastElement = custom_main("3 - 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-1.0, lastElement.getDouble());
}


TEST(arithmatique, order_precendence) {

    Value lastElement = custom_main("3 + 6 * 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(27.0, lastElement.getDouble());
}


TEST(arithmatique, order_precendence_2) {

    Value lastElement = custom_main("(3 + 6) * 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(36.0, lastElement.getDouble());
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
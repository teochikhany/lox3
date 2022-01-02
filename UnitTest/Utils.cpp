#include "Utils.h"


Value custom_main_top_stack(std::string string_input)
{
    Chunk* chunk = new Chunk();
    VM* vm = new VM();

    antlr4::ANTLRInputStream input(string_input);
    loxLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    loxParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.program();
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(new Compiler(chunk), tree); //TODO: should free the compiler

    vm->interpret(chunk);

    std::vector<Value> stack = vm->getStack();
    Value lastElement = stack.at(stack.size() - 1);

    delete vm;
    delete chunk;

    return lastElement;
}


Value custom_main_first_global(std::string string_input, std::string var_name)
{
    Chunk* chunk = new Chunk();
    VM* vm = new VM();

    antlr4::ANTLRInputStream input(string_input);
    loxLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    loxParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.program();
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(new Compiler(chunk), tree); //TODO: should free the compiler

    vm->interpret(chunk);

    std::map<std::string, Value> global_table = vm->getGlobal();
    Value firstGlobal = global_table.at(var_name);

    delete vm;
    delete chunk;

    return firstGlobal;
}
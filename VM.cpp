#include "VM.h"

#include "VM.h"
#include "Debug.h"
// #include "Compiler.h"
#include <iostream>

VM::VM()
{
    chunk = nullptr;
    ip = nullptr;
    stack = std::vector<Value>();
}

InterpretResult VM::interpret(Chunk* chunk2) {
    chunk = chunk2;
    ip = chunk->getAddCode(0);
    return run();
}

//InterpretResult VM::interpret(const char* source) {
//    Chunk* chunk1 = new Chunk();
//    // Compiler* compiler = new Compiler();
//
//
//   /* if (!(compiler->compile(source, chunk1)))
//    {
//        delete chunk1;
//        return InterpretResult::INTERPRET_COMPILE_ERROR;
//    }*/
//
//    chunk = chunk1;
//    ip = chunk->getAddCode(0);
//
//    InterpretResult result = run();
//
//    delete chunk1;
//
//    return result;
//}

InterpretResult VM::run() {
#define BINARY_OP(op) \
        do { \
          double b = pop(); \
          double a = pop(); \
          push(a op b); \
        } while (false)

    std::cout << std::endl << std::endl;

    for (;;) {

        Debug::PrintStack(stack);
        Debug::disassembleInstruction(chunk, (int)(ip - chunk->getAddCode(0)));

        uint8_t instruction;

        switch (instruction = *ip++) {
        case OP_CONSTANT: {
            Value constant = chunk->getConst(*ip++);
            push(constant);
            break;
        }
        case OP_ADD:      BINARY_OP(+); break;
        case OP_SUBTRACT: BINARY_OP(-); break;
        case OP_MULTIPLY: BINARY_OP(*); break;
        case OP_DIVIDE:   BINARY_OP(/ ); break;
        case OP_NEGATE:   push(-pop()); break;
        case OP_RETURN:
        {
            std::cout << " \t\t " << pop() << std::endl;
            return InterpretResult::INTERPRET_OK;
        }
        }
    }

#undef BINARY_OP
}

void VM::push(Value value)
{
    stack.push_back(value);
}

Value VM::pop()
{
    double d = stack.back();
    stack.pop_back();
    return d;
}

void VM::resetStack()
{
    stack.empty();
}
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
          if ( ! peek(0).isNumber() || ! peek(1).isNumber() ) \
          { \
              std::cout << "Operand must be a number."; \
              return InterpretResult::INTERPRET_RUNTIME_ERROR; \
          } \
            \
          double b = pop().getDouble(); \
          double a = pop().getDouble(); \
          push( Value(a op b) ); \
        } while (false)

    std::cout << std::endl << std::endl;

    for (;;) {

        Debug::PrintStack(stack);
        Debug::disassembleInstruction(chunk, (int)(ip - chunk->getAddCode(0)));

        uint8_t instruction;

        switch (instruction = *ip++) {
        case OP_CONSTANT: 
        {
            Value constant = chunk->getConst(*ip++);
            push(constant);
            break;
        }

        case OP_NIL:        push(Value()); break;
        case OP_TRUE:       push(Value(true)); break;
        case OP_FALSE:      push(Value(false));break;

        case OP_NOT:
        {
            if (!peek(0).isBool())
            {
                std::cout << "Operand must be a boolean.";
                return InterpretResult::INTERPRET_RUNTIME_ERROR;
            }

            push(Value(!pop().getBool()));
            break;
        }

        case OP_EQUAL: 
        {
            Value b = pop();
            Value a = pop();
            push(Value( a.isEqual(b) ));
            break;
        }

        case OP_GREATER:    BINARY_OP(> ); break;
        case OP_LESS:       BINARY_OP(< ); break;
        
        case OP_ADD:      BINARY_OP(+); break;
        case OP_SUBTRACT: BINARY_OP(-); break;
        case OP_MULTIPLY: BINARY_OP(*); break;
        case OP_DIVIDE:   BINARY_OP(/ ); break;
        case OP_NEGATE:  

            if (!peek(0).isNumber())
            {
                std::cout << "Operand must be a number.";
                return InterpretResult::INTERPRET_RUNTIME_ERROR;
            }

            push(Value( -pop().getDouble() )); 
            break;

        case OP_RETURN:
            std::cout << " \t\t " << pop().Print() << std::endl;
            return InterpretResult::INTERPRET_OK;
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
    Value d = stack.back();
    stack.pop_back();
    return d;
}

void VM::resetStack()
{
    stack.empty();
}

Value VM::peek(int distance)
{
    return stack[stack.size() - 1 - distance];
}
#pragma once

#include "Chunk.h"
#include <vector>
#include <stack>
#include <map>


enum class InterpretResult {
	INTERPRET_OK,
	INTERPRET_COMPILE_ERROR,
	INTERPRET_RUNTIME_ERROR
};

class VM
{
private:
	Chunk* chunk;
	uint8_t* ip;							// point to the next opcode to be executed
	std::vector<Value> stack;				// std::vector is used instead of std::stack to be abel to loop over it
	std::map<std::string, Value> GlobalTable;	// because global variables are late bound, meaning assigned to at runtime

	void push(Value value);
	Value pop();
	void resetStack();
	InterpretResult run();
	Value peek(int distance);

public:
	VM();
	// InterpretResult interpret(const char* source);
	InterpretResult interpret(Chunk* chunk);

	// can probably remove these with #ifdef _DEBUG, but UnitTest won't work on release mode anymore
#ifdef _DEBUG
	std::map<std::string, Value> getGlobal();
	std::vector<Value> getStack();
	std::vector<Value> getChunkValues();
#endif // 
};


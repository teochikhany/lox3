#pragma once

#include "chunk.h"


class Debug
{
private:
	static int ConstantInstruction(const char* name, Chunk* chunk, int offset);
	static int simpleInstruction(const char* name, int offset);

public:
	static void disassembleChunk(Chunk* chunk, const char* name);
	static void PrintStack(std::vector<Value> v);
	static int disassembleInstruction(Chunk* chunk, int offset);
};


#pragma once

#ifdef _DEBUG

#include "chunk.h"
#include "VM.h"
#include <map>
#include "Local.h"

class Debug
{
private:
	static int ConstantInstruction(const char* name, Chunk* chunk, int offset);
	static int simpleInstruction(const char* name, int offset);
	static int doubleInstruction(const char* name, Chunk* chunk, int offset);

public:
	static void disassembleChunk(Chunk* chunk, const char* name);
	static void PrintValues(std::vector<Value> v, std::string name = "\tStack: ");
	static int disassembleInstruction(Chunk* chunk, int offset);
	static void PrintGlobalTable(std::map<std::string, Value> GlobalTable);
	static void PrintLocals(std::vector<Local> locals);
};

#endif // 

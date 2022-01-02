#include "Debug.h"
#include <iostream>

void Debug::disassembleChunk(Chunk* chunk, const char* name)
{
	printf("== %s ==\n", name);

	for (int offset = 0; offset < chunk->getSize();)
	{
		offset = disassembleInstruction(chunk, offset);
	}
}

int Debug::disassembleInstruction(Chunk* chunk, int offset) {

	//if ( offset >= chunk->getSize())
	//{
	//	std::cout << "Out of bound in debug" << std::endl;
	//	return 0;
	//}

	printf("%04d ", offset);

	if (offset > 0 && chunk->getLine(offset) == chunk->getLine(offset - 1))
		printf("   | ");
	else
		printf("%4d ", chunk->getLine(offset));

	int instruction = chunk->getCode(offset);

	switch (instruction)
	{
	case OP_CONSTANT:
		return ConstantInstruction("OP_CONSTANT", chunk, offset);
	case OP_JUMP_IF_FALSE:
		return doubleInstruction("OP_JUMP_IF_FALSE", chunk, offset);
	case OP_LOOP:
		return doubleInstruction("OP_LOOP", chunk, offset);
	case OP_PRINT:
		return simpleInstruction("OP_PRINT", offset);
	case OP_JUMP:
		return doubleInstruction("OP_JUMP", chunk, offset);
	case OP_NIL:
		return simpleInstruction("OP_NIL", offset);
	case OP_TRUE:
		return simpleInstruction("OP_TRUE", offset);
	case OP_FALSE:
		return simpleInstruction("OP_FALSE", offset);
	case OP_ADD:
		return simpleInstruction("OP_ADD", offset);
	case OP_SUBTRACT:
		return simpleInstruction("OP_SUBTRACT", offset);
	case OP_MULTIPLY:
		return simpleInstruction("OP_MULTIPLY", offset);
	case OP_DIVIDE:
		return simpleInstruction("OP_DIVIDE", offset);
	case OP_NOT:
		return simpleInstruction("OP_NOT", offset);
	case OP_NEGATE:
		return simpleInstruction("OP_NEGATE", offset);
	case OP_RETURN:
		return simpleInstruction("OP_RETURN", offset);
	case OP_EQUAL:
		return simpleInstruction("OP_EQUAL", offset);
	case OP_GREATER:
		return simpleInstruction("OP_GREATER", offset);
	case OP_LESS:
		return simpleInstruction("OP_LESS", offset);
	case OP_DEFINE_GLOBAL:
		return ConstantInstruction("OP_DEFINE_GLOBAL", chunk, offset);
	case OP_GET_GLOBAL:
		return ConstantInstruction("OP_GET_GLOBAL", chunk, offset);
	case OP_SET_GLOBAL:
		return ConstantInstruction("OP_SET_GLOBAL", chunk, offset);
	default:
		printf("Unknown opcode %d\n", instruction);
		return offset + 1;
	}
}

int Debug::simpleInstruction(const char* name, int offset)
{
	printf(name);
	printf("\n");
	return offset + 1;
}

int Debug::doubleInstruction(const char* name, Chunk* chunk, int offset)
{
	printf("%s\t", name);
	printf("%d", chunk->getCode(offset + 1));
	printf("\n");
	return offset + 2;
}

int Debug::ConstantInstruction(const char* name, Chunk* chunk, int offset)
{
	int constantIndex = chunk->getCode(offset + 1);
	Value constant = chunk->getConst(constantIndex);
	printf("%-16s %4d '", name, constantIndex);
	std::cout << constant.Print();		
	printf("'\n");
	return offset + 2;
}

void Debug::PrintValues(std::vector<Value> d, std::string name)
{
	//printf("          ");
	printf(name.c_str());

	if (d.size() == 0)
		printf("[]");

	for (Value v : d) {
		printf("[ ");
		std::cout << v.Print();		
		printf(" ]");
	}
	printf("\n");
}

void Debug::PrintGlobalTable(std::map<std::string, Value> GlobalTable)
{
	std::cout << "\nGlobal table: " << std::endl;
	for (auto x : GlobalTable)
	{
		std::cout << x.first << ": " << x.second.Print() << std::endl;
	}
}
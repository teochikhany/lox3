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
	case OP_ADD:
		return simpleInstruction("OP_ADD", offset);
	case OP_SUBTRACT:
		return simpleInstruction("OP_SUBTRACT", offset);
	case OP_MULTIPLY:
		return simpleInstruction("OP_MULTIPLY", offset);
	case OP_DIVIDE:
		return simpleInstruction("OP_DIVIDE", offset);
	case OP_NEGATE:
		return simpleInstruction("OP_NEGATE", offset);
	case OP_RETURN:
		return simpleInstruction("OP_RETURN", offset);
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

int Debug::ConstantInstruction(const char* name, Chunk* chunk, int offset)
{
	int constantIndex = chunk->getCode(offset + 1);
	double constant = chunk->getConst(constantIndex);
	printf("%-16s %4d '", name, constantIndex);
	std::cout << constant;
	printf("'\n");
	return offset + 2;
}

void Debug::PrintStack(std::vector<double> d)
{
	printf("          ");
	for (double v : d) {
		printf("[ ");
		std::cout << v;
		printf(" ]");
	}
	printf("\n");
}
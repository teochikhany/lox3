#include "Chunk.h"


Chunk::Chunk()
{
	code = std::vector<uint8_t>();
	constants = std::vector<Value>();
	lines = std::vector<int>();
}

void Chunk::WriteChunk(uint8_t byte, int line)
{
	code.push_back(byte);
	lines.push_back(line);
}

void Chunk::WriteChunkOffset(uint8_t byte, int offset)
{
	code[offset] = byte;
	//lines.push_back(line);
}

int Chunk::getSize()
{
	return code.size();
}

uint8_t Chunk::getCode(int i)
{
	return code[i];
}

uint8_t* Chunk::getAddCode(int offset)
{
	return &code[offset];
}

int Chunk::addConstant(Value value)
{
	constants.push_back(value);
	return constants.size() - 1;			// return the index where the element was added
}

uint8_t Chunk::getConstAdd(Value value)
{
	for (int i = 0; i < constants.size(); i++)
	{
		if (value.isEqual(constants[i]))
		{
			return i;
		}
	}

	return -1;
}

Value Chunk::getConst(int i)
{
	return constants[i];
}

int Chunk::getLine(int i)
{
	return lines[i];
}


std::vector<Value> Chunk::getConstants()
{
	return constants;
}
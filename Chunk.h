#pragma once

#include <vector>
#include "Value.h"

enum OpCode : uint8_t {
	OP_CONSTANT,
	OP_NIL,
	OP_TRUE,
	OP_FALSE,
	OP_EQUAL,
	OP_GREATER,
	OP_LESS,
	OP_NEGATE,
	OP_ADD,
	OP_SUBTRACT,
	OP_MULTIPLY,
	OP_DIVIDE,
	OP_NOT,
	OP_JUMP_IF_FALSE,
	OP_JUMP,
	OP_RETURN
};

// typedef double Value;

class Chunk
{
private:
	std::vector<uint8_t> code;
	std::vector<Value> constants;
	std::vector<int> lines;

public:
	Chunk();
	int getSize();									// get size of "code" vector
	uint8_t getCode(int offset);					// get the element at index "offset" of vector "code"
	uint8_t* getAddCode(int offset);
	void WriteChunk(uint8_t byte, int line);		// add a element to the end of the vector "code"
	void WriteChunkOffset(uint8_t byte, int offset);

	int addConstant(Value value);					// add a element to the end of the vector "constants"
	Value getConst(int offset);						// get the element at index "offset" of vector "constants"

	int getLine(int offset);	// bug lama ma ektob return, beta3mol runtime error, vector out of bound
								// ymkn bas lama yi koun fi 1 line bel chunk
};


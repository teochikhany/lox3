#pragma once

#include "gtest/gtest.h"

#include "antlr4-runtime.h"

#include "loxLexer.h"
#include "loxParser.h"

#include "Chunk.h"
#include "Debug.h"
#include "VM.h"
#include "Compiler.h"
#include "Value.h"
#include "Local.h"

Value custom_main_top_stack(std::string string_input);
Value custom_main_first_global(std::string string_input, std::string var_name);

class Helper
{
public:
	static void Walk(antlr4::tree::ParseTreeListener* t, antlr4::tree::ParseTree* t2);
};
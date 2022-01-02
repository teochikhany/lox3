//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"

////////////////////////////

#include "antlr4-runtime.h"

#include "loxLexer.h"
#include "loxListener.h"
#include "loxBaseListener.h"
#include "loxParser.h"

//#include "loxLexer.cpp"
//#include "loxListener.cpp"
//#include "loxBaseListener.cpp"
//#include "loxParser.cpp"

//#include "main.h"
#include "Chunk.h"
#include "Debug.h"
#include "VM.h"
#include "Compiler.h"
#include "Value.h"

//#include "main.cpp"
//#include "Chunk.cpp"
//#include "Debug.cpp"
//#include "VM.cpp"
//#include "Compiler.cpp"
//#include "Value.cpp"

Value custom_main_top_stack(std::string string_input);
Value custom_main_first_global(std::string string_input, std::string var_name);
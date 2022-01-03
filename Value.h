#pragma once

#include <string>
#include <iostream>

#include "Obj.h"

enum ValueType
{
    VAL_BOOL,
    VAL_NIL, 
    VAL_NUMBER,
    VAL_STR,
    VAL_OBJ
};

// needs a destructor for emptying string and Obj pointer if correct type

union value
{
    bool boolean;
    double number;
    std::string* str;
    Obj* obj;
};

class Value
{
private:
    ValueType type;
    union value v;

public:
    Value(bool b);              // create a bools
    Value(double d);            // create a numbers
    Value(int i);    	        // create a numbers
    Value(Obj* object);         // create a object
    Value(std::string* str);    // create a string
    Value();                    // create a nil
    
    double getDouble();         // extract the double
    bool getBool();             // extract the bool
    Obj* getObj();              // extract the object
    std::string getString();
    
    bool isBool();              // check if it is a bool
    bool isNumber();            // check if it is a Number
    bool isNil();               // check if it is a Nil
    bool isObj();               // check if it is a Object
    bool isStr();

    bool isEqual(Value v2);

    std::string Print();
};
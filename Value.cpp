#include "Value.h"

Value::Value(double d)
{
    type = VAL_NUMBER;
    v.number = d;
}

Value::Value(int i)
{
    type = VAL_NUMBER;
    v.number = (double)i;
}

Value::Value(bool b)
{
    type = VAL_BOOL;
    v.boolean = b;
}

Value::Value(Obj* object)
{
    type = VAL_OBJ;
    v.obj = object;
}

Value::Value()
{
    type = VAL_NIL;
    v.number = 0;
}

double Value::getDouble()
{
    return v.number;
}

bool Value::getBool()
{
    return v.boolean;
}

bool Value::getObj()
{
    return v.obj;
}

bool Value::isBool()
{
    return type == VAL_BOOL;
}

bool Value::isNumber()
{
    return type == VAL_NUMBER;
}

bool Value::isNil()
{
    return type == VAL_NIL;
}

bool Value::isObj()
{
    return type == VAL_OBJ;
}


std::string Value::Print()      // maybe the return type should be std::ostream and not std::string
{
    std::string result;

    switch (type)
    {
    case VAL_BOOL:
        result = getBool() ? "true" : "false" ;
        break;
    case VAL_NIL:
        result = "nil";
        break;
    case VAL_NUMBER:
        result = std::to_string( getDouble() );     // this causes the .000000 to show up
        break;
    default:
        result = "unknown type";
        break;
    }

    return result;
}


bool Value::isEqual(Value v2)
{
    if (type != v2.type) return false;

    switch (type)
    {
    case VAL_BOOL: return getBool() == v2.getBool();
    case VAL_NUMBER: 
    {
        double a = getDouble();
        double b = v2.getDouble();
        return a == b;
    }
    case VAL_NIL: return false;
    default: return false;
    }
}






//---------------------------------------------------------------------------

#pragma hdrstop

#include "ArrayValue.h"

ArrayValue::ArrayValue(string name, Value *value): Value(name, TYPE_ARRAY){
    this->arrayValue = value;
    this->name = name;
}

Value *ArrayValue::getArrayValue() {
    return arrayValue;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

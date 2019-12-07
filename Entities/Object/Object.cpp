//---------------------------------------------------------------------------

#pragma hdrstop

#include "Object.h"

Object::Object(string name) : Value(name, TYPE_OBJECT) {
    this->className = name;
    this->className[0] = toupper(name[0]);
}

void Object::addValue(Value *value) {
    objectFields.insert(value);
}

set<Value*> Object::getObjectFields(){
    return objectFields;
}

string Object::getClassName() {
    return className;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

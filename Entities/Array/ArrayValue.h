//---------------------------------------------------------------------------

#ifndef ArrayValueH
#define ArrayValueH

#include "Value.h"

class ArrayValue: public Value {
private:
    Value *arrayValue;
public:
    ArrayValue(string name, Value *value);

    Value * getArrayValue();
};

//---------------------------------------------------------------------------
#endif

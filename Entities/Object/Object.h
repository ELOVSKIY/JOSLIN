//---------------------------------------------------------------------------

#ifndef ObjectH
#define ObjectH

#include "Value.h"
#include <set>

class Object: public Value {
private:
    set<Value*> objectFields;
    string className;
public:
    string getClassName();

    void addValue(Value *value);

    set<Value*> getObjectFields();

    Object(string name);
};
//---------------------------------------------------------------------------
#endif

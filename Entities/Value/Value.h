//---------------------------------------------------------------------------

#ifndef ValueH
#define ValueH

#include <string>

using namespace std;
static const int TYPE_ANY = 0;
static const int TYPE_NUMB = 1;
static const int TYPE_STRING = 2;
static const int TYPE_BOOL = 3;
static const int TYPE_ARRAY = 4;
static const int TYPE_OBJECT = 5;


class Value {
protected:
    string name;
    string serializeName;
    string tableName;
    int type;
public:
    int getType();

    void setName(string name);

    string getTypeName();

    string getName();

    string getSerializeName();

    string getTableName();

    void setSerializeName(string serializeName);

    void setTableName(string tableName);

    Value(string name, int type);

};
//---------------------------------------------------------------------------
#endif

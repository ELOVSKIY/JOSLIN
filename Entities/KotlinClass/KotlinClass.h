//---------------------------------------------------------------------------

#ifndef KotlinClassH
#define KotlinClassH

#include <list>
#include "Object.h"
#include "Value.h"

class KotlinClass {
private:
    string className;
    string fileContext;
    string fileName;
    string tableName;
	bool isDatabaseAnnotated;
	bool isResponseAnnotated;
    bool hasPrimaryKey;
	list<Value*> *classFields;
public:
    void setIsDatabaseAnnotated(bool isDatabaseAnnotated);

    void setIsResponseAnnotated(bool isResponseAnnotated);

    string getFileContext();

    string getFileName();

    KotlinClass(Object *object);
};

//---------------------------------------------------------------------------
#endif

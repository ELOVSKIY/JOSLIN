//---------------------------------------------------------------------------

#ifndef LinkerH
#define LinkerH

#include "KotlinClass.h"
#include "Object.h"

class Linker {
private:
	list<KotlinClass*> classesList;
	bool isSerializeAnnotated;
    bool isDatabaseAnnotated;

	void inflateClass(Object* object);
public:
	list<KotlinClass* > getClassesList();

	Linker( Object *object, bool dbAnnotation, bool serializeAnnotation);
};
//---------------------------------------------------------------------------
#endif

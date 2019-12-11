//---------------------------------------------------------------------------

#pragma hdrstop

#include "Linker.h"

list<KotlinClass *> Linker::getClassesList() {
    return classesList;
}

Linker::Linker(Object *object, bool dbAnnotation, bool serializeAnnotation) {
    isSerializeAnnotated = serializeAnnotation;
    isDatabaseAnnotated = dbAnnotation;
    inflateClass(object);
}

void Linker::inflateClass(Object *object) {
    KotlinClass* kotlinClass = new KotlinClass(object);
    kotlinClass->setIsDatabaseAnnotated(isDatabaseAnnotated);
    kotlinClass->setIsResponseAnnotated(isSerializeAnnotated);
	classesList.push_front(kotlinClass);

    set<Value*> l = object->getObjectFields();
	set<Value*>::iterator iter;
	for (iter = l.begin(); iter != l.end(); iter++) {
		Value* v = *iter;
		if (v->getType() == TYPE_OBJECT){
            inflateClass((Object *)v);
        }
	}
//    for (auto v: object->getObjectFields()){
//        if (v->getType() == TYPE_OBJECT){
//            inflateClass((Object *)v);
//        }
//	}
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

//---------------------------------------------------------------------------

#pragma hdrstop

#include "ClassSaver.h"

#include <fstream>
#include "ClassSaver.h"

ClassSaver::ClassSaver(string filePath, Object *object, bool dbAnnotation, bool serializeAnnotation) {
    linker = new Linker(object, dbAnnotation, serializeAnnotation);
    this->filePath = filePath;
    save();
}

void ClassSaver::save() {
    auto classesList = linker->getClassesList();
    for (auto c: classesList){
        ofstream fout;
        auto path = filePath + c->getFileName();
        fout.open(filePath + c->getFileName());
        fout<<c->getFileContext();
        fout.close();
    }
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

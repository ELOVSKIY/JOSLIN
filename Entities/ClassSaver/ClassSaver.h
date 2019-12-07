// ---------------------------------------------------------------------------

#ifndef ClassSaverH
#define ClassSaverH

#include "Linker.h"
#include "Parser.h"

class ClassSaver {
private:
	string filePath;
	Linker *linker;

	void save();

public:
	ClassSaver(string filePath, Object *object, bool dbAnnotation,
		bool serializeAnnotation);
};
// ---------------------------------------------------------------------------
#endif

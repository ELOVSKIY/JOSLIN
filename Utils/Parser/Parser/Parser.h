//---------------------------------------------------------------------------

#ifndef ParserH
#define ParserH

#include "Object.h"

class Parser {
private:
    string parsedText;
    int pos;
    Object *object;

    void parse();

    string getParsedName();

    string getParsedValue();

    int getParsedType(string value);

public:
    Object *getObject();

    Parser(string parsedText, string objectName);

};
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef ArrayParserH
#define ArrayParserH

#include "Value.h"
#include "list"

class ArrayParser {
    string arrayName;
    string parsedText;
    int arrayType;
    Value *value;

    list<string> *arrayElements;

    void parseArrayIntoElements();

    void parse();

    int getParsedType(string value);

    void getArrayType();

    void parseArrayObject();

public:
    ArrayParser(string parsedText, string arrayName);

    Value *getParserValue();
};
//---------------------------------------------------------------------------
#endif

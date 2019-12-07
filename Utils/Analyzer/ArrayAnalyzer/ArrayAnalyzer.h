//---------------------------------------------------------------------------

#ifndef ArrayAnalyzerH
#define ArrayAnalyzerH

#include <string>
#include "list"
#include "AnalyzerInterface.h"

using namespace std;

class ArrayAnalyzer : AnalyzerInterface {

private:
    string analyzedText;
    int nullCount;
    int stringCount;
    int numbCount;
    int arrayCount;
    int objectCount;
    int boolCount;

    list<string> *elementTextList;

    void parseTextIntoElements();

    void calculateValues();

    bool isDigit(char c);

public:

    ArrayAnalyzer(string text);

    int getBoolCount();

    int getNullCount();

    int getObjectCount();

    int getStringCount();

    int getNumbCount();

    int getArrayCount();
};
//---------------------------------------------------------------------------
#endif

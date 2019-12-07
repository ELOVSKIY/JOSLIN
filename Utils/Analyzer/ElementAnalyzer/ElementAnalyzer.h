//---------------------------------------------------------------------------

#ifndef ElementAnalyzerH
#define ElementAnalyzerH

#include <string>
#include "AnalyzerInterface.h"
using namespace std;

class ElementAnalyzer: public AnalyzerInterface {
private:
    string analyzedText;
    int nullCount;
    int stringCount;
    int numbCount;
    int arrayCount;
    int objectCount;
    int boolCount;

    bool isDigit(char c);

    void calculateArrayCount();

    void calculateStringCount();

    void calculateNumbCount();

    void calculateObjectCount();

    void calculateBoolCount();

    void calculateNullCount();

    string getNextObject(int *pos);

    string getNextArray(int *pos);

public:

    ElementAnalyzer(string text);

    int getArrayCount();

    int getNumbCount();

    int getStringCount();

    int getObjectCount();

    int getNullCount();

    int getBoolCount();

};
//---------------------------------------------------------------------------
#endif

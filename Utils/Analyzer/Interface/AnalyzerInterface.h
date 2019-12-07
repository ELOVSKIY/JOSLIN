//---------------------------------------------------------------------------

#ifndef AnalyzerInterfaceH
#define AnalyzerInterfaceH

class AnalyzerInterface {
public:
    virtual int getStringCount();

    virtual int getArrayCount();

    virtual int getObjectCount();

    virtual int getBoolCount();

    virtual int getNumbCount();

    virtual int getNullCount();
};
//---------------------------------------------------------------------------
#endif

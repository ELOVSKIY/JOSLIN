// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>

#include "AnalyzeFormUnit.h"
#include "ObjectAnalyzer.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAnalyzeForm *AnalyzeForm;

// ---------------------------------------------------------------------------
__fastcall TAnalyzeForm::TAnalyzeForm(TComponent* Owner, string plainText)
	: TForm(Owner) {
	ObjectAnalyzer* analyzer = new ObjectAnalyzer(plainText);

	StringGrid->Cells[0][0] = "Object count";
	StringGrid->Cells[0][1] = "Array count";
	StringGrid->Cells[0][2] = "Numb count";
	StringGrid->Cells[0][3] = "String count";
	StringGrid->Cells[0][4] = "Bool count";
	StringGrid->Cells[0][5] = "Null count";

	StringGrid->Cells[1][0] = analyzer ->getObjectCount();
	StringGrid->Cells[1][1] = analyzer ->getArrayCount();
	StringGrid->Cells[1][2] = analyzer ->getNumbCount();
	StringGrid->Cells[1][3] = analyzer ->getStringCount();
	StringGrid->Cells[1][4] = analyzer ->getBoolCount();
	StringGrid->Cells[1][5] = analyzer ->getNullCount();

}
// ---------------------------------------------------------------------------

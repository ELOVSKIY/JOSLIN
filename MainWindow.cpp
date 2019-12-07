// ---------------------------------------------------------------------------

#include <vcl.h>
#include "MainWindow.h"
#include <string>
#include "Validator.h"
#pragma hdrstop
using namespace std;

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;

// ---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner) : TForm(Owner) {

}
// -------------------------------------------------------------------------

void __fastcall TMainForm::Create1Click(TObject *Sender) {
	MessageDlg("Choose file directory", mtWarning, TMsgDlgButtons() << mbOK, 0);
	// TProperties *properties = new TProperties(this);
	// properties->ShowModal();

}
// ---------------------------------------------------------------------------

string getStringFromMemo(TMemo *Memo) {
	return AnsiString(Memo->Lines->Text).c_str();
}

void __fastcall TMainForm::EditSettingsClick(TObject *Sender) {
	string str = getStringFromMemo(CodeMemo);
	Validator* validator = new Validator(str);
	if (validator->isCorrectJSON()) {

	}
	else {
		MessageDlg("Invalid JSON try again.", mtError, TMsgDlgButtons() << mbOK, 0);
	}

}
// ---------------------------------------------------------------------------

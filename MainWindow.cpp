// ---------------------------------------------------------------------------

#include <vcl.h>
#include "MainWindow.h"
#include <string>
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
//	TProperties *properties = new TProperties(this);
//	properties->ShowModal();

}
// ---------------------------------------------------------------------------

System::UnicodeString getStringFromMemo(TMemo *Memo){
	return AnsiString(Memo ->Lines ->Text).c_str();
}



void __fastcall TMainForm::EditSettingsClick(TObject *Sender)
{
	auto str = getStringFromMemo(CodeMemo);
}
//---------------------------------------------------------------------------

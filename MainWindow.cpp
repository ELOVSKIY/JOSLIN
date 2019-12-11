// ---------------------------------------------------------------------------

#include <vcl.h>
#include "MainWindow.h"
#include <string>
#include "Validator.h"
#include "Redactor.h"
#include "ChooseFileNameDialog.h"
#include "Parser.h"
#include "ClassSaver.h"
#include "Object.h"
#include "AnalyzeFormUnit.h"
#pragma hdrstop

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;

string getStringFromMemo(TMemo *Memo) {
	return AnsiString(Memo->Lines->Text).c_str();
}

void writeStringToMemo(TMemo *memo, string msg) {
	memo->Lines->Text = UnicodeString(msg.c_str());
}

string unicodeToString(UnicodeString str) {
	return AnsiString(str).c_str();
}

// ---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner) : TForm(Owner) {

}
// -------------------------------------------------------------------------

void __fastcall TMainForm::Create1Click(TObject *Sender) {

	string text = getStringFromMemo(CodeMemo);
	Validator* validator = new Validator(text);
	if (validator->isCorrectJSON()) {
		MessageDlg("Choose file directory", mtConfirmation,
			TMsgDlgButtons() << mbOK, 0);
		SaveDialog->Execute();
		string directoryPath = unicodeToString(SaveDialog->FileName);
		TFileNameForm *form = new TFileNameForm(this);
		form->ShowModal();
		string objectName = form->objectName;

		Parser* parser = new Parser(text, objectName);
		Object*obj = parser->getObject();

		new ClassSaver(directoryPath, obj, true, true);
	}
	else {
		MessageDlg("Invalid JSON try again.", mtError,
			TMsgDlgButtons() << mbOK, 0);
	}

}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::EditSettingsClick(TObject *Sender) {
	string str = getStringFromMemo(CodeMemo);
	Validator* validator = new Validator(str);
	if (validator->isCorrectJSON()) {
		Redactor* redactor = new Redactor(str);
		redactor->setTabSize(4);
		string msg = redactor->getEditedText();
		writeStringToMemo(CodeMemo, msg);
	}
	else {
		MessageDlg("Invalid JSON try again.", mtError,
			TMsgDlgButtons() << mbOK, 0);
	}
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::AnalyzeClick(TObject *Sender) {
	string str = getStringFromMemo(CodeMemo);
	Validator* validator = new Validator(str);
	if (validator->isCorrectJSON()) {
		string plainText = getStringFromMemo(CodeMemo);
		TAnalyzeForm *form = new TAnalyzeForm(this, plainText);
		form->ShowModal();
	}
	else {
		MessageDlg("Invalid JSON try again.", mtError,
			TMsgDlgButtons() << mbOK, 0);
	}
}

// ---------------------------------------------------------------------------

void __fastcall TMainForm::SaveFileClick(TObject *Sender) {
	SaveDialog->Execute();
	string fileName = unicodeToString(SaveDialog->FileName);
	string text = getStringFromMemo(CodeMemo);
	ofstream fout;
	fout.open(fileName.c_str());
	fout << text;
	fout.close();
}
// ---------------------------------------------------------------------------

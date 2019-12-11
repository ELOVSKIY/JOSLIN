// ---------------------------------------------------------------------------

#ifndef MainWindowH
#define MainWindowH
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>


// ---------------------------------------------------------------------------
class TMainForm : public TForm {
__published: // IDE-managed Components
	TMemo *CodeMemo;
	TMainMenu *MainMenu;
	TMenuItem *FileSettings;
	TMenuItem *EditSettings;
	TMenuItem *SaveFile;
	TMenuItem *Create1;
	TMenuItem *Analyze;
	TOpenDialog *OpenDialog;
	TSaveDialog *SaveDialog;
	void __fastcall Create1Click(TObject *Sender);
	void __fastcall EditSettingsClick(TObject *Sender);
	void __fastcall AnalyzeClick(TObject *Sender);
	void __fastcall SaveFileClick(TObject *Sender);


private: // User declarations
public: // User declarations
	__fastcall TMainForm(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
// ---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef ChooseFileNameDialogH
#define ChooseFileNameDialogH
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>

#include <String>
using namespace std;
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFileNameForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *FileNameEdit;
	TButton *ConfirmButton;
	void __fastcall ConfirmButtonClick(TObject *Sender);
private:	// User declarations
public:
    string objectName;
	__fastcall TFileNameForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFileNameForm *FileNameForm;
//---------------------------------------------------------------------------
#endif

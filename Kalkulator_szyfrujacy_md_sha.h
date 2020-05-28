//---------------------------------------------------------------------------

#ifndef Kalkulator_szyfrujacy_md_shaH
#define Kalkulator_szyfrujacy_md_shaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Md5;
	TButton *Sha256;
	TButton *Sha384;
	TButton *Sha512;
	TButton *Button5;
	TMemo *Memo2;
	TMemo *Memo4;
	TMemo *Memo1;
	TMemo *Memo3;
	TMemo *Memo5;
	void __fastcall Md5Click(TObject *Sender);
	void __fastcall Sha256Click(TObject *Sender);
	void __fastcall Sha384Click(TObject *Sender);
	void __fastcall Sha512Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

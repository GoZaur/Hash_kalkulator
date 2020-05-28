//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Kalkulator_szyfrujacy_md_sha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include <hashlibpp.h>
#include <windows.h>
#include <string>
#include <cstdio.h>
#include <cstring>
#include <stdio.h>

using namespace std;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

std::string konwersja (String str){

	wchar_t * str1 = str.w_str();
	char tablicaChar[1000];

	sprintf(tablicaChar,"%ls",str1);
	std::string tmp =  tablicaChar;

	return tmp;


}

void __fastcall TForm1::Md5Click(TObject *Sender)
{
hashwrapper *myWrapper = new md5wrapper();

	System::String str = Memo5->Text;

	std::string tmp =konwersja(str);

	std::string resultMd5 = myWrapper -> getHashFromString(tmp);

	Memo1->Text = resultMd5.c_str();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Sha256Click(TObject *Sender)
{
	hashwrapper *WrapperSha256 = new sha256wrapper();


	System::String str = Memo5->Text;

	std::string tmp =konwersja(str);

	std::string resultSha256 = WrapperSha256 -> getHashFromString(tmp);

	Memo2->Text = resultSha256.c_str();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Sha384Click(TObject *Sender)
{
	hashwrapper *WrapperSha384 = new sha384wrapper();

	System::String str = Memo5->Text;

	std::string tmp =konwersja(str);

	std::string resultSha384 = WrapperSha384 -> getHashFromString(tmp);

	Memo3->Text = resultSha384.c_str();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Sha512Click(TObject *Sender)
{
	hashwrapper *WrapperSha512 = new sha512wrapper();

	System::String str = Memo5->Text;

	std::string tmp =konwersja(str);

	std::string resultSha512 = WrapperSha512 -> getHashFromString(tmp);

	Memo4->Text = resultSha512.c_str();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
  Md5Click(Memo5);
  Sha256Click(Memo5);
  Sha384Click(Memo5);
  Sha512Click(Memo5);

}
//---------------------------------------------------------------------------


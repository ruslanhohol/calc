//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//--------����������� �����---------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
Button1->OnClick=MyClick;
Button2->OnClick=MyClick;
Button3->OnClick=MyClick;
Button4->OnClick=MyClick;
Button5->OnClick=MyClick;
Button6->OnClick=MyClick;
Button7->OnClick=MyClick;
Button8->OnClick=MyClick;
Button9->OnClick=MyClick;
Button11->OnClick=MyClick;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::MyClick(TObject *Sender)
{
 TButton* ptButton;
 ptButton=static_cast<TButton*>(Sender);
 Label1->Caption = Label1->Caption + ptButton->Caption;

}
//---------------------------------------------------------------------------
/*
���� ���� ������� ������ ��� ������ �����
������� � ������ �������� Label1->Caption ����������� ������ ������
*/
void __fastcall TForm1::Button10Click(TObject *Sender)
{
Label1->Caption = "";
}
//----------------------------------------------------------------------------
/*
������ ���� �������� ��� �������
����������� (��������) ������ � �������� Label1->Caption � ����������
number1 ������ ������ ���� ������������ � ������ � �������������
������� �������� Label1->Caption ������������� ��� � ����� ����� ������ ����
*/
void __fastcall TForm1::Button13Click(TObject *Sender)
{
znak = "+";
number1 = Label1->Caption;
Label1->Caption = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button14Click(TObject *Sender)
{
znak = "-";
number1 = Label1->Caption;
Label1->Caption = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button15Click(TObject *Sender)
{
znak = "*";
number1 = Label1->Caption;
Label1->Caption = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button16Click(TObject *Sender)
{
znak = "/";
number1 = Label1->Caption;
Label1->Caption = "";
}
//---------------------------------------------------------------------------
/*
������������ ��������� � ������� � �����----------------------------
����������� (��������) ������ � �������� Label1->Caption � ����������
number2 ������ ������ ���� ������������ � ������ � �������������
���� ���������� number1, number2, znak �� ������ ������ (!= "") ��
� ��� ���������� ������,������ ������ ���� � �������������� ���� �
������ ����� ���������� � �����������
���� ���������� znak ����� (==) ����������� ��������� "+" �� ����� ����������
//--������� ������ ���� number2 ������������� � ����� ����� � ������� �������
StrToInt(number2); ����� ��� �������������� StrToInt(number1);
����� ����� ��� �������� ����� ����� � ������� ��������� �������������
�������� Label1->Caption �� ����� ���������
����� ���� ���� ����� Label1->Caption ����� ��� UnicodeString � �� ���
����������� ����� ����� ���� int ����� ������� ���� ������ �� ����������
��� �������� ������� �������������� ����� �� ����� ������ �� ��������� (������ �� ������ ��������������
�����)
�������� �������������� int � UnicodeString ���������� ��������
*/
void __fastcall TForm1::Button12Click(TObject *Sender)
{
number2 = Label1->Caption;
if(number1 != ""  &  number2 != ""  &  znak != ""){
if(znak == "+"){Label1->Caption = StrToInt(number1) + StrToInt(number2); }
if(znak == "-"){Label1->Caption = StrToInt(number1) - StrToInt(number2); }
if(znak == "*"){Label1->Caption = StrToInt(number1) * StrToInt(number2); }
if(znak == "/"){Label1->Caption = StrToInt(number1) / StrToInt(number2); }

number2 = "";
znak = "";
number1 = Label1->Caption;
return;
}
number2 = "";
znak = "";
number1 = "";
Label1->Caption = "";
ShowMessage("�� ���������� ������ ��������� ���� �������");
}
//---------------------------------------------------------------------------






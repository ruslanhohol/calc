//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//--------Конструктор формы---------------------------------------------------
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
Если была сделана ошибка при наборе цифры
очищяем её тоесть свойству Label1->Caption присваиваем пустую строку
*/
void __fastcall TForm1::Button10Click(TObject *Sender)
{
Label1->Caption = "";
}
//----------------------------------------------------------------------------
/*
Вводим знак операции над цифрами
Присваиваем (копируем) строку в свойстве Label1->Caption в переменную
number1 первая строка цифр сформирована и готова к использованию
очищяем свойство Label1->Caption подготавливая его к вводу вторй строки цифр
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
Подсчитываем результат и выводим в метку----------------------------
Присваиваем (копируем) строку в свойстве Label1->Caption в переменную
number2 вторая строка цифр сформирована и готова к использованию
Если переменные number1, number2, znak не пустые строки (!= "") то
в них содержатся первая,вторая строка цифр и орефметический знак и
значит можно переходить к вычислениям
если переменная znak равна (==) литеральной константе "+" то будем складывать
//--Сначяло строка цифр number2 преобразуется в целое число с помощью функции
StrToInt(number2); далее идёт преобразование StrToInt(number1);
после этого идёт сложение целых чисел и наконец результат присваиваеися
свойству Label1->Caption мы видим результат
здесь есть один нюанс Label1->Caption имеет тип UnicodeString а мы иму
присваиваем целое число типа int здесь моглабы быть ошибка но кимпилятор
сам способен сделать преобразование типов по этому ошибки не возникает (пример не явного преобразования
типов)
обратное преобразование int в UnicodeString кимпилятор неделает
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
ShowMessage("Не достаточно данных повторите ввод сначала");
}
//---------------------------------------------------------------------------






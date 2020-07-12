//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Otwrz1;
        TMenuItem *N1;
        TMenuItem *Zapisz1;
        TMenuItem *Zapiszjako1;
        TMenuItem *Autozapis1;
        TMenuItem *N2;
        TMenuItem *Zakocz1;
        TMenuItem *Widok1;
        TMenuItem *Wsprzdnemyszy1;
        TMenuItem *Ustawieniamyszy1;
        TMenuItem *Ustawieniaklawiatury1;
        TMenuItem *Ustawieniaoglne1;
        TMenuItem *Pomoc1;
        TMenuItem *Oprogramie1;
        TMenuItem *Oautorze1;
        TMenuItem *Jakuywa1;
        TGroupBox *GroupBox1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TListBox *ListBox1;
        TGroupBox *GroupBox2;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TButton *Button12;
        TButton *Button15;
        TLabel *Label1;
        TTimer *Timer1;
        TTimer *Timer2;
        TMenuItem *Zawszenawieszchu1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Zawszenawieszchu1Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
private: void __fastcall HotKey(TMessage &Msg);
public:	__fastcall TForm1(TComponent* Owner);
        BEGIN_MESSAGE_MAP
        MESSAGE_HANDLER(WM_HOTKEY,TMessage,HotKey)
        END_MESSAGE_MAP(TForm)
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

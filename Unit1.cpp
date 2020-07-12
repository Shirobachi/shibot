//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
POINT wspolrzedne;
std::vector<POINT> t_wspolrzednych;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        wspolrzedne.x = Mouse -> CursorPos.x;
        wspolrzedne.y = Mouse -> CursorPos.y;
        Label1 -> Caption = IntToStr(wspolrzedne.x) + " " + IntToStr(wspolrzedne.y);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        RegisterHotKey(Form1->Handle, 1, 0, VK_SPACE);
        RegisterHotKey(Form1->Handle, 2, 0, VK_TAB);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Timer2 -> Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
        Label1 -> Color = RGB(rand()%255,rand()%255,rand()%255);
        Label1 -> Font -> Color = RGB(rand()%255,rand()%255,rand()%255);
        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Timer2 -> Enabled = false;
        Label1 -> Color = clBtnFace;
        Label1 -> Font -> Color = clWindowText;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zawszenawieszchu1Click(TObject *Sender)
{
        if (Zawszenawieszchu1->Checked==true)
                {
                        Zawszenawieszchu1 -> Checked = false;
                        Form1 -> FormStyle = fsNormal;
                }
        else
                {
                        Zawszenawieszchu1 -> Checked = true;
                        Form1 -> FormStyle = fsStayOnTop;
                }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::HotKey(TMessage & Msg) {
if (Msg.WParam == 1)
        {
        Timer2 -> Enabled = false;
        Label1 -> Color = clBtnFace;
        Label1 -> Font -> Color = clWindowText;
        }
if (Msg.WParam == 2)
        {
             t_wspolrzednych.push_back(wspolrzedne);
             ListBox1 -> Items -> Add(IntToStr(wspolrzedne.x)+" : " +IntToStr(wspolrzedne.y));
        }
}           
//---------------------------------------------------------------------------
void __fastcall TForm1::Button15Click(TObject *Sender)
{
        { ListBox1 -> Clear();
        t_wspolrzednych.clear();
        }
}
//---------------------------------------------------------------------------







//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
const char *APP_VER = "v1.2";
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TEdit *txtPrice;
        TEdit *txtRate;
        TEdit *txtFright;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *txtProfit;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *lbPrice;
        TLabel *Label10;
        TLabel *Label11;
        TEdit *txtWeight;
        TEdit *txtFreeProfit;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TEdit *txtNo;
        TLabel *Label16;
        TCheckBox *chkNo;
        TLabel *Label15;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall txtPriceEnter(TObject *Sender);
        void __fastcall txtProfitChange(TObject *Sender);
        void __fastcall txtFrightChange(TObject *Sender);
        void __fastcall txtPriceChange(TObject *Sender);
        void __fastcall chkNoClick(TObject *Sender);
        void __fastcall txtNoChange(TObject *Sender);
private:	// User declarations
        float strToFloat(AnsiString text);
        void ShowPrice();
        
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <string.h>

#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


float TForm1::strToFloat(AnsiString text)
{
        float ret = 0.0;
        AnsiString str = Trim(text);
        /*
        try
        {
                ret = StrToFloat(str);
        }
        catch(...)
        {
        }
        */
        ret = atof(str.c_str());
        
        return ret;
}

void TForm1::ShowPrice()
{
        float price = 0.0;
        float rate = 0.0;
        float fright = 0.0;
        float profit = 0.0;
        float freeFright, weight, no = 0.0;
        
        price = strToFloat(txtPrice->Text);
        rate =  strToFloat(txtRate->Text);
        fright =  strToFloat(txtFright->Text);
        profit =  strToFloat(txtProfit->Text);
        freeFright = strToFloat(txtFreeProfit->Text);
        weight  = strToFloat(txtWeight->Text);
        if(chkNo->Checked)
        {
                no = strToFloat(txtNo->Text); // �Һŷ�
        }
        
        if(price<0.1)
        {
                //Application->MessageBox("��������ȷ�ļ۸�","ע��", MB_ICONWARNING);
                lbPrice->Caption = "��������ȷ�ļ۸�";
                return;
        }
        
        float cost , sellPrice, packetFright;
        cost = (price + fright)/rate;
        packetFright = (weight*freeFright+no)/rate;
        sellPrice = (cost + cost*profit/100 + packetFright)/0.95;
        char tip[512]={0};
        sprintf(tip, "�ɱ���$%.2f \t(%.2fԪ)\n\
�˷ѣ�$%.2f \t(%.2fԪ)\n\
�ۼۣ�$%.2f \t(%.2fԪ)\n\
����$%.2f \t(%.2fԪ)",
                cost, cost*rate,
                packetFright, packetFright*rate,
                sellPrice,  sellPrice*rate,
                cost*profit/100, cost*profit*rate/100
                );
        lbPrice->Caption = tip;
}
void __fastcall TForm1::FormCreate(TObject *Sender)
{
//Bordercons��>biMaximize=false;
//BorderStyle=bsSingle;
        //lbPrice->Caption = "";
        char title[128];
        sprintf(title, "����ͨ�۸�����%s", APP_VER);
        this->Caption = title;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
        txtPrice->SetFocus();       
}


//---------------------------------------------------------------------------

void __fastcall TForm1::txtPriceEnter(TObject *Sender)
{
        ShowPrice();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::txtProfitChange(TObject *Sender)
{
        ShowPrice();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::txtFrightChange(TObject *Sender)
{
        ShowPrice();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::txtPriceChange(TObject *Sender)
{
        ShowPrice();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::chkNoClick(TObject *Sender)
{
        ShowPrice();
        if(chkNo->Checked)
        {
                //chkNo->Checked = false;
                txtNo->Enabled = true;
                return;
        }
        //chkNo->Checked = true;
        txtNo->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::txtNoChange(TObject *Sender)
{
        ShowPrice();        
}
//---------------------------------------------------------------------------


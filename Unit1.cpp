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
                no = strToFloat(txtNo->Text); // 挂号费
        }
        
        if(price<0.1)
        {
                //Application->MessageBox("请输入正确的价格！","注意", MB_ICONWARNING);
                lbPrice->Caption = "请输入正确的价格！";
                return;
        }
        
        float cost , sellPrice, packetFright;
        cost = (price + fright)/rate;
        packetFright = (weight*freeFright+no)/rate;
        sellPrice = (cost + cost*profit/100 + packetFright)/0.95;
        char tip[512]={0};
        sprintf(tip, "成本：$%.2f \t(%.2f元)\n\
运费：$%.2f \t(%.2f元)\n\
售价：$%.2f \t(%.2f元)\n\
利润：$%.2f \t(%.2f元)",
                cost, cost*rate,
                packetFright, packetFright*rate,
                sellPrice,  sellPrice*rate,
                cost*profit/100, cost*profit*rate/100
                );
        lbPrice->Caption = tip;
}
void __fastcall TForm1::FormCreate(TObject *Sender)
{
//Bordercons－>biMaximize=false;
//BorderStyle=bsSingle;
        //lbPrice->Caption = "";
        char title[128];
        sprintf(title, "速卖通价格试算%s", APP_VER);
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


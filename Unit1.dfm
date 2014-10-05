object Form1: TForm1
  Left = 260
  Top = 199
  BorderStyle = bsDialog
  ClientHeight = 315
  ClientWidth = 492
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 20
    Width = 36
    Height = 13
    Caption = #20215#26684#65306
  end
  object Label2: TLabel
    Left = 216
    Top = 20
    Width = 36
    Height = 13
    Caption = #37038#36153#65306
  end
  object Label3: TLabel
    Left = 13
    Top = 60
    Width = 63
    Height = 13
    Caption = #23567#21253#20215#26684#65306' '
  end
  object Label4: TLabel
    Left = 344
    Top = 20
    Width = 36
    Height = 13
    Caption = #37325#37327#65306
  end
  object Label5: TLabel
    Left = 8
    Top = 272
    Width = 273
    Height = 13
    AutoSize = False
    Caption = #27599#31508#35746#21333#25104#26412#24050#32463#21152#25910#24179#21488#25163#32493#36153'5%'
  end
  object Label6: TLabel
    Left = 16
    Top = 136
    Width = 97
    Height = 13
    AutoSize = False
    Caption = #24314#35758#38646#21806#20215#65306
  end
  object Label7: TLabel
    Left = 176
    Top = 20
    Width = 12
    Height = 13
    Caption = #20803
  end
  object Label8: TLabel
    Left = 304
    Top = 20
    Width = 12
    Height = 13
    Caption = #20803
  end
  object Label9: TLabel
    Left = 216
    Top = 60
    Width = 49
    Height = 13
    AutoSize = False
    Caption = #20803'/'#21315#20811
  end
  object lbPrice: TLabel
    Left = 16
    Top = 160
    Width = 105
    Height = 21
    Caption = #35831#36755#20837#20215#26684
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = #23435#20307
    Font.Style = []
    ParentFont = False
  end
  object Label10: TLabel
    Left = 40
    Top = 100
    Width = 36
    Height = 13
    Caption = #27719#29575#65306
  end
  object Label11: TLabel
    Left = 296
    Top = 100
    Width = 36
    Height = 13
    Caption = #21033#28070#65306
  end
  object Label12: TLabel
    Left = 432
    Top = 100
    Width = 17
    Height = 13
    AutoSize = False
    Caption = '%'
  end
  object Label13: TLabel
    Left = 432
    Top = 20
    Width = 33
    Height = 13
    AutoSize = False
    Caption = #21315#20811
  end
  object Label14: TLabel
    Left = 8
    Top = 296
    Width = 113
    Height = 13
    Caption = '@Author: cavan.wang  '
  end
  object Label16: TLabel
    Left = 432
    Top = 60
    Width = 12
    Height = 13
    Caption = #20803
  end
  object Label15: TLabel
    Left = 16
    Top = 124
    Width = 3
    Height = 13
  end
  object txtPrice: TEdit
    Left = 88
    Top = 16
    Width = 81
    Height = 21
    TabOrder = 0
    OnChange = txtPriceChange
    OnEnter = txtPriceEnter
  end
  object txtRate: TEdit
    Left = 88
    Top = 96
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '6.12'
    OnChange = txtFrightChange
  end
  object txtFright: TEdit
    Left = 256
    Top = 16
    Width = 41
    Height = 21
    TabOrder = 2
    Text = '10'
    OnChange = txtFrightChange
  end
  object txtProfit: TEdit
    Left = 344
    Top = 96
    Width = 81
    Height = 21
    TabOrder = 3
    Text = '35'
    OnChange = txtProfitChange
  end
  object txtWeight: TEdit
    Left = 384
    Top = 16
    Width = 41
    Height = 21
    TabOrder = 4
    Text = '0.2'
    OnChange = txtFrightChange
  end
  object txtFreeProfit: TEdit
    Left = 88
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 5
    Text = '110'
    OnChange = txtFrightChange
  end
  object txtNo: TEdit
    Left = 352
    Top = 56
    Width = 73
    Height = 21
    TabOrder = 6
    Text = '8'
    OnChange = txtNoChange
  end
  object chkNo: TCheckBox
    Left = 290
    Top = 58
    Width = 57
    Height = 17
    Alignment = taLeftJustify
    Caption = #25346#21495#65306
    Checked = True
    State = cbChecked
    TabOrder = 7
    OnClick = chkNoClick
  end
end

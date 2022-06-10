object Form1: TForm1
  Left = 521
  Top = 292
  Width = 633
  Height = 380
  Caption = 'TicTacToe by Kosmala'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ip1: TImage
    Left = 16
    Top = 16
    Width = 100
    Height = 100
    OnClick = ip1Click
  end
  object ip2: TImage
    Left = 120
    Top = 16
    Width = 100
    Height = 100
    OnClick = ip2Click
  end
  object ip3: TImage
    Left = 224
    Top = 16
    Width = 100
    Height = 100
    OnClick = ip3Click
  end
  object ip4: TImage
    Left = 16
    Top = 120
    Width = 100
    Height = 100
    OnClick = ip4Click
  end
  object ip5: TImage
    Left = 120
    Top = 120
    Width = 100
    Height = 100
    OnClick = ip5Click
  end
  object ip6: TImage
    Left = 224
    Top = 120
    Width = 100
    Height = 100
    OnClick = ip6Click
  end
  object ip7: TImage
    Left = 16
    Top = 224
    Width = 100
    Height = 100
    OnClick = ip7Click
  end
  object ip8: TImage
    Left = 120
    Top = 224
    Width = 100
    Height = 100
    OnClick = ip8Click
  end
  object ip9: TImage
    Left = 224
    Top = 224
    Width = 100
    Height = 100
    OnClick = ip9Click
  end
  object Label1: TLabel
    Left = 376
    Top = 56
    Width = 136
    Height = 25
    Caption = 'Player'#39's turn:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MV Boli'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ipmini: TImage
    Left = 520
    Top = 56
    Width = 30
    Height = 30
    Enabled = False
  end
  object NewButton: TButton
    Left = 384
    Top = 136
    Width = 169
    Height = 41
    Caption = 'New Game'
    TabOrder = 0
    OnClick = FormCreate
  end
  object CloseButton: TButton
    Left = 384
    Top = 192
    Width = 169
    Height = 41
    Caption = 'Close Game'
    TabOrder = 1
    OnClick = CloseButtonClick
  end
end

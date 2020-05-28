object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Hash Kalkulator'
  ClientHeight = 356
  ClientWidth = 611
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 19
  object Md5: TButton
    Left = 0
    Top = 79
    Width = 113
    Height = 58
    Caption = 'Md5'
    TabOrder = 0
    OnClick = Md5Click
  end
  object Sha256: TButton
    Left = 0
    Top = 153
    Width = 113
    Height = 56
    Caption = 'Sha256'
    TabOrder = 1
    OnClick = Sha256Click
  end
  object Sha384: TButton
    Left = 0
    Top = 225
    Width = 113
    Height = 56
    Caption = 'Sha384'
    TabOrder = 2
    OnClick = Sha384Click
  end
  object Sha512: TButton
    Left = 0
    Top = 287
    Width = 113
    Height = 56
    Caption = 'Sha512'
    TabOrder = 3
    OnClick = Sha512Click
  end
  object Button5: TButton
    Left = 0
    Top = 0
    Width = 113
    Height = 57
    Caption = 'All'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Memo1: TMemo
    Left = 144
    Top = 79
    Width = 457
    Height = 58
    TabStop = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Lines.Strings = (
      '')
    ParentFont = False
    ReadOnly = True
    TabOrder = 5
  end
  object Memo2: TMemo
    Left = 144
    Top = 153
    Width = 457
    Height = 56
    TabStop = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Lines.Strings = (
      '')
    ParentFont = False
    ReadOnly = True
    TabOrder = 6
  end
  object Memo3: TMemo
    Left = 144
    Top = 225
    Width = 457
    Height = 56
    TabStop = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 7
  end
  object Memo4: TMemo
    Left = 144
    Top = 287
    Width = 457
    Height = 56
    TabStop = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 8
  end
  object Memo5: TMemo
    Left = 144
    Top = 0
    Width = 457
    Height = 57
    HelpType = htKeyword
    TabStop = False
    TabOrder = 9
  end
end

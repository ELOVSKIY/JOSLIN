object MainForm: TMainForm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'RoomHelper'
  ClientHeight = 482
  ClientWidth = 755
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  Menu = MainMenu
  OldCreateOrder = False
  DesignSize = (
    755
    482)
  PixelsPerInch = 96
  TextHeight = 19
  object CodeMemo: TMemo
    AlignWithMargins = True
    Left = 8
    Top = 0
    Width = 739
    Height = 479
    Anchors = [akLeft, akTop, akRight, akBottom]
    TabOrder = 0
  end
  object MainMenu: TMainMenu
    Left = 696
    Top = 8
    object FileSettings: TMenuItem
      Caption = 'FIle'
      object OpenFile: TMenuItem
        Caption = 'Open File'
      end
      object SaveFile: TMenuItem
        Caption = 'Save File'
      end
      object ChooseDirectory: TMenuItem
        Caption = 'Target Directory'
      end
    end
    object Create1: TMenuItem
      Caption = 'Convert'
      OnClick = Create1Click
    end
    object Analyze: TMenuItem
      Caption = 'Analyze'
      OnClick = AnalyzeClick
    end
    object EditSettings: TMenuItem
      Caption = 'Autotabulate'
      OnClick = EditSettingsClick
    end
  end
end

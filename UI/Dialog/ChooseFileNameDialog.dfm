object FileNameForm: TFileNameForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'FileNameForm'
  ClientHeight = 116
  ClientWidth = 399
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object FileNameEdit: TEdit
    Left = 8
    Top = 24
    Width = 383
    Height = 21
    TabOrder = 0
  end
  object ConfirmButton: TButton
    Left = 256
    Top = 83
    Width = 135
    Height = 25
    Caption = 'Create'
    TabOrder = 1
    OnClick = ConfirmButtonClick
  end
end
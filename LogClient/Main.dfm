object Form1: TForm1
  Left = 461
  Top = 276
  Width = 640
  Height = 480
  Caption = 'BB9.10 - 3D Client'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnKeyDown = FormKeyDown
  PixelsPerInch = 120
  TextHeight = 16
  object ServerSocket: TServerSocket
    Active = True
    Port = 10000
    ServerType = stNonBlocking
    OnClientRead = ServerSocketClientRead
    OnClientError = ServerSocketClientError
    Left = 8
    Top = 288
  end
end

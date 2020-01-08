; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CRealDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Real.h"

ClassCount=5
Class1=CRealApp
Class2=CRealDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_REAL_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG1
Class4=Student
Resource4=IDD_ABOUTBOX
Class5=Teacher
Resource5=IDD_DIALOG2

[CLS:CRealApp]
Type=0
HeaderFile=Real.h
ImplementationFile=Real.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC

[CLS:CRealDlg]
Type=0
HeaderFile=RealDlg.h
ImplementationFile=RealDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CRealDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=RealDlg.h
ImplementationFile=RealDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_REAL_DIALOG]
Type=1
Class=CRealDlg
ControlCount=5
Control1=IDC_STATIC,button,1342177287
Control2=IDC_BUTTON1,button,1342242816
Control3=IDC_BUTTON2,button,1342242816
Control4=IDC_BUTTON3,button,1342242816
Control5=IDC_BUTTON4,button,1342242816

[DLG:IDD_DIALOG1]
Type=1
Class=Student
ControlCount=7
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342308352
Control3=IDC_USER,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_PASSWORD,edit,1350631584
Control6=IDC_BUTTON1,button,1342242816
Control7=IDC_BUTTON2,button,1342242816

[CLS:Student]
Type=0
HeaderFile=Student.h
ImplementationFile=Student.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON1
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=Teacher
ControlCount=9
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT_ID,edit,1350631584
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT_Name,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT_Password,edit,1350631584
Control8=IDC_BUTTON_Confirm,button,1342242816
Control9=IDC_BUTTON_Exit,button,1342242816

[CLS:Teacher]
Type=0
HeaderFile=Teacher.h
ImplementationFile=Teacher.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON_Confirm
VirtualFilter=dWC


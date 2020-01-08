// ADOAccess.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "ADOAccess.h"
#include "ADOAccessDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CADOAccessApp

BEGIN_MESSAGE_MAP(CADOAccessApp, CWinApp)
	//{{AFX_MSG_MAP(CADOAccessApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CADOAccessApp construction

CADOAccessApp::CADOAccessApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CADOAccessApp object

CADOAccessApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CADOAccessApp initialization

BOOL CADOAccessApp::InitInstance()
{
	AfxEnableControlContainer();
    AfxOleInit();
	m_pConnection.CreateInstance(__uuidof(Connection));
	
	
	try
	{
		
		m_pConnection->Open("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=StudentScore.mdb","","",adModeUnknown);
	}
	catch(_com_error e)
	{
		
		AfxMessageBox("���ݿ�����ʧ��,ȷ�����ݿ�StudentScore.mdb�Ƿ��ڵ�ǰĿ¼��");
		return FALSE;
	}
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	CADOAccessDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return TRUE;
}

int CADOAccessApp::ExitInstance() 
{
	// TODO: Add your specialized code here and/or call the base class
	if(m_pConnection->GetState())
	{
		m_pConnection->Close();
		m_pConnection = NULL;
	}
	return CWinApp::ExitInstance();
}

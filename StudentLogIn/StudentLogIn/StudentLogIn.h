// StudentLogIn.h : main header file for the STUDENTLOGIN application
//

#if !defined(AFX_STUDENTLOGIN_H__CA6B9CE8_D562_4CC7_8C69_9E4AC44D621A__INCLUDED_)
#define AFX_STUDENTLOGIN_H__CA6B9CE8_D562_4CC7_8C69_9E4AC44D621A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CStudentLogInApp:
// See StudentLogIn.cpp for the implementation of this class
//

class CStudentLogInApp : public CWinApp
{
public:
	CStudentLogInApp();
    _ConnectionPtr m_pConnection;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudentLogInApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStudentLogInApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTLOGIN_H__CA6B9CE8_D562_4CC7_8C69_9E4AC44D621A__INCLUDED_)

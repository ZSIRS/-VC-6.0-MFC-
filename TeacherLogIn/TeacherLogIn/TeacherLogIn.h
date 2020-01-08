// TeacherLogIn.h : main header file for the TEACHERLOGIN application
//

#if !defined(AFX_TEACHERLOGIN_H__91B1F9C5_F43E_445C_814F_DB03E3CFCB73__INCLUDED_)
#define AFX_TEACHERLOGIN_H__91B1F9C5_F43E_445C_814F_DB03E3CFCB73__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTeacherLogInApp:
// See TeacherLogIn.cpp for the implementation of this class
//

class CTeacherLogInApp : public CWinApp
{
public:
	CTeacherLogInApp();
    _ConnectionPtr m_pConnection;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeacherLogInApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTeacherLogInApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHERLOGIN_H__91B1F9C5_F43E_445C_814F_DB03E3CFCB73__INCLUDED_)

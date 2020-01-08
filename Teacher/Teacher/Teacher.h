// Teacher.h : main header file for the TEACHER application
//

#if !defined(AFX_TEACHER_H__1B9DA613_03FD_4240_9C99_CEB45F3F0F3E__INCLUDED_)
#define AFX_TEACHER_H__1B9DA613_03FD_4240_9C99_CEB45F3F0F3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTeacherApp:
// See Teacher.cpp for the implementation of this class
//

class CTeacherApp : public CWinApp
{
public:
	CTeacherApp();
    _ConnectionPtr m_pConnection;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeacherApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTeacherApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHER_H__1B9DA613_03FD_4240_9C99_CEB45F3F0F3E__INCLUDED_)

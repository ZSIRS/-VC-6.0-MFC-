// StudentCheckIn.h : main header file for the STUDENTCHECKIN application
//

#if !defined(AFX_STUDENTCHECKIN_H__217CF4FC_53D7_4938_8020_47C60D7982BD__INCLUDED_)
#define AFX_STUDENTCHECKIN_H__217CF4FC_53D7_4938_8020_47C60D7982BD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CStudentCheckInApp:
// See StudentCheckIn.cpp for the implementation of this class
//

class CStudentCheckInApp : public CWinApp
{
public:
	CStudentCheckInApp();
    _ConnectionPtr m_pConnection;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudentCheckInApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStudentCheckInApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTCHECKIN_H__217CF4FC_53D7_4938_8020_47C60D7982BD__INCLUDED_)

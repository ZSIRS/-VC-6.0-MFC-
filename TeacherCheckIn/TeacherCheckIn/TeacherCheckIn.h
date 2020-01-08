// TeacherCheckIn.h : main header file for the TEACHERCHECKIN application
//

#if !defined(AFX_TEACHERCHECKIN_H__01CCA14B_495E_42A2_B2EB_3DEC61BA620A__INCLUDED_)
#define AFX_TEACHERCHECKIN_H__01CCA14B_495E_42A2_B2EB_3DEC61BA620A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTeacherCheckInApp:
// See TeacherCheckIn.cpp for the implementation of this class
//

class CTeacherCheckInApp : public CWinApp
{
public:
	CTeacherCheckInApp();
    _ConnectionPtr m_pConnection;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeacherCheckInApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTeacherCheckInApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHERCHECKIN_H__01CCA14B_495E_42A2_B2EB_3DEC61BA620A__INCLUDED_)

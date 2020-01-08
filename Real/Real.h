// Real.h : main header file for the REAL application
//

#if !defined(AFX_REAL_H__49714255_649F_46AD_A206_A8290FB23B23__INCLUDED_)
#define AFX_REAL_H__49714255_649F_46AD_A206_A8290FB23B23__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CRealApp:
// See Real.cpp for the implementation of this class
//

class CRealApp : public CWinApp
{
public:
	CRealApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRealApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CRealApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REAL_H__49714255_649F_46AD_A206_A8290FB23B23__INCLUDED_)

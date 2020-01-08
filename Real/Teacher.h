#if !defined(AFX_TEACHER_H__3128DF4E_006B_4DA5_BFB7_0D6625D99998__INCLUDED_)
#define AFX_TEACHER_H__3128DF4E_006B_4DA5_BFB7_0D6625D99998__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Teacher.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Teacher dialog

class Teacher : public CDialog
{
// Construction
public:
	Teacher(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Teacher)
	enum { IDD = IDD_DIALOG2 };
	CString	m_id;
	CString	m_name;
	CString	m_password;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Teacher)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Teacher)
	afx_msg void OnBUTTONConfirm();
	afx_msg void OnBUTTONExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHER_H__3128DF4E_006B_4DA5_BFB7_0D6625D99998__INCLUDED_)

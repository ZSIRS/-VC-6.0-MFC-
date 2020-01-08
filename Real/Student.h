#if !defined(AFX_STUDENT_H__24BB4D9C_30AE_49AB_8BF3_DAF5E73467CB__INCLUDED_)
#define AFX_STUDENT_H__24BB4D9C_30AE_49AB_8BF3_DAF5E73467CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Student.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Student dialog

class Student : public CDialog
{
// Construction
public:
	Student(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Student)
	enum { IDD = IDD_DIALOG1 };
	CString	m_password;
	CString	m_username;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Student)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Student)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENT_H__24BB4D9C_30AE_49AB_8BF3_DAF5E73467CB__INCLUDED_)

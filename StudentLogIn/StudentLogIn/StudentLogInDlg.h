// StudentLogInDlg.h : header file
//

#if !defined(AFX_STUDENTLOGINDLG_H__9E0E94F8_B39B_448D_B980_C63C21A1A0E3__INCLUDED_)
#define AFX_STUDENTLOGINDLG_H__9E0E94F8_B39B_448D_B980_C63C21A1A0E3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CStudentLogInDlg dialog
extern CStudentLogInApp theApp;
class CStudentLogInDlg : public CDialog
{
// Construction
public:
	CStudentLogInDlg(CWnd* pParent = NULL);	// standard constructor
    _RecordsetPtr m_pRecordSet;
	_ConnectionPtr m_pConnection;
	_CommandPtr m_pCommand;
// Dialog Data
	//{{AFX_DATA(CStudentLogInDlg)
	enum { IDD = IDD_STUDENTLOGIN_DIALOG };
	CString	m_password;
	CString	m_user;
	CString	m_name;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudentLogInDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CStudentLogInDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonAdd();
	afx_msg void OnBUTTONExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTLOGINDLG_H__9E0E94F8_B39B_448D_B980_C63C21A1A0E3__INCLUDED_)

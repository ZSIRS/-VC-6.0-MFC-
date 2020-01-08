// TeacherLogInDlg.h : header file
//

#if !defined(AFX_TEACHERLOGINDLG_H__0FA3C02A_FDD1_42B0_BE7E_AFDC52CD5DEA__INCLUDED_)
#define AFX_TEACHERLOGINDLG_H__0FA3C02A_FDD1_42B0_BE7E_AFDC52CD5DEA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTeacherLogInDlg dialog
extern CTeacherLogInApp theApp;
class CTeacherLogInDlg : public CDialog
{
// Construction
public:
	CTeacherLogInDlg(CWnd* pParent = NULL);	// standard constructor
    _RecordsetPtr m_pRecordSet;
	_ConnectionPtr m_pConnection;
	_CommandPtr m_pCommand;
// Dialog Data
	//{{AFX_DATA(CTeacherLogInDlg)
	enum { IDD = IDD_TEACHERLOGIN_DIALOG };
	CString	m_id;
	CString	m_name;
	CString	m_password;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeacherLogInDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTeacherLogInDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonExit();
	afx_msg void OnButtonAdd();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHERLOGINDLG_H__0FA3C02A_FDD1_42B0_BE7E_AFDC52CD5DEA__INCLUDED_)

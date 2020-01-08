// TeacherCheckInDlg.h : header file
//

#if !defined(AFX_TEACHERCHECKINDLG_H__E61EE503_902C_4354_8F98_6D151FDF9A2E__INCLUDED_)
#define AFX_TEACHERCHECKINDLG_H__E61EE503_902C_4354_8F98_6D151FDF9A2E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTeacherCheckInDlg dialog
extern CTeacherCheckInApp theApp;
class CTeacherCheckInDlg : public CDialog
{
// Construction
public:
	CTeacherCheckInDlg(CWnd* pParent = NULL);	// standard constructor
    _RecordsetPtr m_pRecordSet;
	_ConnectionPtr m_pConnection;
	_CommandPtr m_pCommand;
// Dialog Data
	//{{AFX_DATA(CTeacherCheckInDlg)
	enum { IDD = IDD_TEACHERCHECKIN_DIALOG };
	CString	m_id;
	CString	m_name;
	CString	m_password;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeacherCheckInDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTeacherCheckInDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonExit();
	afx_msg void OnButtonCheckin();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHERCHECKINDLG_H__E61EE503_902C_4354_8F98_6D151FDF9A2E__INCLUDED_)

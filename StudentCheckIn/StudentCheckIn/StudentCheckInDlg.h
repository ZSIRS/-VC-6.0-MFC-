// StudentCheckInDlg.h : header file
//

#if !defined(AFX_STUDENTCHECKINDLG_H__A0892F2D_4E68_4EA2_A380_49B15B405765__INCLUDED_)
#define AFX_STUDENTCHECKINDLG_H__A0892F2D_4E68_4EA2_A380_49B15B405765__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CStudentCheckInDlg dialog
extern CStudentCheckInApp theApp;
class CStudentCheckInDlg : public CDialog
{
// Construction
public:
	CStudentCheckInDlg(CWnd* pParent = NULL);	// standard constructor
    _RecordsetPtr m_pRecordSet;
	_ConnectionPtr m_pConnection;
	_CommandPtr m_pCommand;
// Dialog Data
	//{{AFX_DATA(CStudentCheckInDlg)
	enum { IDD = IDD_STUDENTCHECKIN_DIALOG };
	CString	m_password;
	CString	m_name;
	CString	m_stuname;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudentCheckInDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CStudentCheckInDlg)
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

#endif // !defined(AFX_STUDENTCHECKINDLG_H__A0892F2D_4E68_4EA2_A380_49B15B405765__INCLUDED_)

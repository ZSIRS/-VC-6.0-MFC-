// TeacherDlg.h : header file
//

#if !defined(AFX_TEACHERDLG_H__B41B402A_D671_4106_B916_75A815C3D337__INCLUDED_)
#define AFX_TEACHERDLG_H__B41B402A_D671_4106_B916_75A815C3D337__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTeacherDlg dialog
extern CTeacherApp theApp;
class CTeacherDlg : public CDialog
{
// Construction
public:
	CTeacherDlg(CWnd* pParent = NULL);	// standard constructor
    _RecordsetPtr m_pRecordSet;
	_ConnectionPtr m_pConnection;
	_CommandPtr m_pCommand;
// Dialog Data
	//{{AFX_DATA(CTeacherDlg)
	enum { IDD = IDD_TEACHER_DIALOG };
	CListBox	m_list;
	CString	m_class;
	CString	m_eight;
	CString	m_eleven;
	CString	m_five;
	CString	m_four;
	CString	m_name;
	CString	m_nine;
	CString	m_num;
	CString	m_one;
	CString	m_seven;
	CString	m_sex;
	CString	m_six;
	CString	m_three;
	CString	m_two;
	CString	m_ten;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeacherDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTeacherDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonOpen();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonDelete();
	afx_msg void OnButtonUpdate();
	afx_msg void OnSelchangeList1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHERDLG_H__B41B402A_D671_4106_B916_75A815C3D337__INCLUDED_)

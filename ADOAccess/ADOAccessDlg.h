// ADOAccessDlg.h : header file
//

#if !defined(AFX_ADOACCESSDLG_H__90200292_336C_4945_AA34_9A94E90E6FF7__INCLUDED_)
#define AFX_ADOACCESSDLG_H__90200292_336C_4945_AA34_9A94E90E6FF7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CADOAccessDlg dialog
extern CADOAccessApp theApp;
class CADOAccessDlg : public CDialog
{
// Construction
public:
	CADOAccessDlg(CWnd* pParent = NULL);	// standard constructor
    _RecordsetPtr m_pRecordSet;
	_ConnectionPtr m_pConnection;
	_CommandPtr m_pCommand;
// Dialog Data
	//{{AFX_DATA(CADOAccessDlg)
	enum { IDD = IDD_ADOACCESS_DIALOG };
	CListBox	m_list;
	CString	m_sex;
	CString	m_num;
	CString	m_name;
	CString	m_age;
	CString	m_eight;
	CString	m_eleven;
	CString	m_five;
	CString	m_four;
	CString	m_nine;
	CString	m_one;
	CString	m_seven;
	CString	m_six;
	CString	m_ten;
	CString	m_three;
	CString	m_two;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CADOAccessDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CADOAccessDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonOpen();
	afx_msg void OnSelchangeList1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADOACCESSDLG_H__90200292_336C_4945_AA34_9A94E90E6FF7__INCLUDED_)

// RealDlg.h : header file
//

#if !defined(AFX_REALDLG_H__F1C7BF5D_922A_450E_960F_C1AE142DA4B5__INCLUDED_)
#define AFX_REALDLG_H__F1C7BF5D_922A_450E_960F_C1AE142DA4B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CRealDlg dialog
class CRealDlg : public CDialog
{
// Construction
public:
	CRealDlg(CWnd* pParent = NULL);	// standard constructor
// Dialog Data
	//{{AFX_DATA(CRealDlg)
	enum { IDD = IDD_REAL_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRealDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CRealDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton_Teacher();
	afx_msg void OnButtonLogIn();
	afx_msg void OnButton_TeacherLogIn();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REALDLG_H__F1C7BF5D_922A_450E_960F_C1AE142DA4B5__INCLUDED_)

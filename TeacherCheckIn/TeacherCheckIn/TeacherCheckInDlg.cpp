// TeacherCheckInDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TeacherCheckIn.h"
#include "TeacherCheckInDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTeacherCheckInDlg dialog

CTeacherCheckInDlg::CTeacherCheckInDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTeacherCheckInDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTeacherCheckInDlg)
	m_id = _T("");
	m_name = _T("");
	m_password = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTeacherCheckInDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTeacherCheckInDlg)
	DDX_Text(pDX, IDC_EDIT_ID, m_id);
	DDX_Text(pDX, IDC_EDIT_NAME, m_name);
	DDX_Text(pDX, IDC_EDIT_PASSWORD, m_password);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTeacherCheckInDlg, CDialog)
	//{{AFX_MSG_MAP(CTeacherCheckInDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_EXIT, OnButtonExit)
	ON_BN_CLICKED(IDC_BUTTON_CHECKIN, OnButtonCheckin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTeacherCheckInDlg message handlers

BOOL CTeacherCheckInDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_pRecordSet.CreateInstance(__uuidof(Recordset));
	try
	{
		m_pRecordSet->Open("select *from student",theApp.m_pConnection.GetInterfacePtr(),adOpenDynamic,adLockOptimistic,adCmdText);
	}
	catch (_com_error *e)
	{
		AfxMessageBox(e->ErrorMessage());
	}
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTeacherCheckInDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTeacherCheckInDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTeacherCheckInDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTeacherCheckInDlg::OnButtonExit() 
{
	// TODO: Add your control notification handler code here
	OnOK();
}

void CTeacherCheckInDlg::OnButtonCheckin() 
{
	// TODO: Add your control notification handler code here
	_variant_t var,var1,var2;
	CString id,name,pswd,idd,username,password;
    GetDlgItemText(IDC_EDIT_ID,id);
	GetDlgItemText(IDC_EDIT_NAME,name);
    GetDlgItemText(IDC_EDIT_PASSWORD,pswd);
	try
	{
		if(!m_pRecordSet->BOF)
			m_pRecordSet->MoveFirst();
		else
		{
			AfxMessageBox("表内数据为空");
			return ;
		}
        var=m_pRecordSet->GetCollect("ID");
		if(var.vt!=VT_NULL)
			idd=(LPCTSTR)_bstr_t(var);
		var1=m_pRecordSet->GetCollect("UserName");
		if(var1.vt!=VT_NULL)
			username=(LPCTSTR)_bstr_t(var1);
		var2=m_pRecordSet->GetCollect("Password");
		if(var2.vt!=VT_NULL)
			password=(LPCTSTR)_bstr_t(var2);
		if((!id.Compare(idd))&&(!name.Compare(username))&&(!pswd.Compare(password)))
		{
			ShellExecute(NULL,"open","Teacher.exe",NULL,NULL,SW_SHOWNORMAL);
		}
		else
		{
			AfxMessageBox("用户名或密码错误!");	
			//MessageBox(_T("登陆成功!"));
			
		}
			
	}
	catch(_com_error *e)
	{
        AfxMessageBox(e->ErrorMessage());
	}
}

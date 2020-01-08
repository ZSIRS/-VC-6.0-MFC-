// TeacherDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Teacher.h"
#include "TeacherDlg.h"

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
// CTeacherDlg dialog

CTeacherDlg::CTeacherDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTeacherDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTeacherDlg)
	m_class = _T("");
	m_eight = _T("");
	m_eleven = _T("");
	m_five = _T("");
	m_four = _T("");
	m_name = _T("");
	m_nine = _T("");
	m_num = _T("");
	m_one = _T("");
	m_seven = _T("");
	m_sex = _T("");
	m_six = _T("");
	m_three = _T("");
	m_two = _T("");
	m_ten = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTeacherDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTeacherDlg)
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Text(pDX, IDC_EDIT_CLASS, m_class);
	DDX_Text(pDX, IDC_EDIT_EIGHT, m_eight);
	DDX_Text(pDX, IDC_EDIT_ELEVEN, m_eleven);
	DDX_Text(pDX, IDC_EDIT_FIVE, m_five);
	DDX_Text(pDX, IDC_EDIT_FOUR, m_four);
	DDX_Text(pDX, IDC_EDIT_NAME, m_name);
	DDX_Text(pDX, IDC_EDIT_NINE, m_nine);
	DDX_Text(pDX, IDC_EDIT_NUMBER, m_num);
	DDX_Text(pDX, IDC_EDIT_ONE, m_one);
	DDX_Text(pDX, IDC_EDIT_SEVEN, m_seven);
	DDX_Text(pDX, IDC_EDIT_SEX, m_sex);
	DDX_Text(pDX, IDC_EDIT_SIX, m_six);
	DDX_Text(pDX, IDC_EDIT_THREE, m_three);
	DDX_Text(pDX, IDC_EDIT_TWO, m_two);
	DDX_Text(pDX, IDC_EDIT_TEN, m_ten);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTeacherDlg, CDialog)
	//{{AFX_MSG_MAP(CTeacherDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_OPEN, OnButtonOpen)
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, OnButtonDelete)
	ON_BN_CLICKED(IDC_BUTTON_UPDATE, OnButtonUpdate)
	ON_LBN_SELCHANGE(IDC_LIST1, OnSelchangeList1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTeacherDlg message handlers

BOOL CTeacherDlg::OnInitDialog()
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

void CTeacherDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CTeacherDlg::OnPaint() 
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
HCURSOR CTeacherDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTeacherDlg::OnButtonOpen() 
{
	// TODO: Add your control notification handler code here
	_variant_t var;
	CString strNo,strName,strAge,strSex,strJGSXLL,strSD,strDL,strDLSY,strSDSY,strGLB,strFB,strDY3,strMG,strTY3,strSB1;
	m_list.ResetContent();

	try{
		if(!m_pRecordSet->BOF)
			m_pRecordSet->MoveFirst();
		else
		{
			AfxMessageBox("��������Ϊ��");
			return ;
		}
		while(!m_pRecordSet->adoEOF)
		{
			var=m_pRecordSet->GetCollect("�༶");
			if(var.vt!=VT_NULL)
				strNo=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("ѧ��");
			if(var.vt!=VT_NULL)
				strName=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("�Ա�");
			if(var.vt!=VT_NULL)
				strAge=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("����");
			if(var.vt!=VT_NULL)
				strSex=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("��ʵϰ����");
			if(var.vt!=VT_NULL)
				strJGSXLL=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("���ֵ��Ӽ�������");
			if(var.vt!=VT_NULL)
				strSD=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("��·");
			if(var.vt!=VT_NULL)
				strDL=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("��·ʵ��");
			if(var.vt!=VT_NULL)
				strDLSY=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("���ֵ��Ӽ�������ʵ��");
			if(var.vt!=VT_NULL)
				strSDSY=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("����ͳ��B");
			if(var.vt!=VT_NULL)
				strGLB=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("���亯������ֱ任");
			if(var.vt!=VT_NULL)
				strFB=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("��ѧӢ��3");
			if(var.vt!=VT_NULL)
				strDY3=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("ë��");
			if(var.vt!=VT_NULL)
				strMG=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("����3");
			if(var.vt!=VT_NULL)
				strTY3=(LPCTSTR)_bstr_t(var);
			var=m_pRecordSet->GetCollect("ְҵ��������1");
			if(var.vt!=VT_NULL)
				strSB1=(LPCTSTR)_bstr_t(var);
			m_list.AddString(strNo+"  "+strName+"  "+strAge+"  "+strSex+"   "+strJGSXLL+"   "+strSD+"  "+strDL+"  "+strDLSY+"  "+strSDSY+"  "+strGLB+"  "+strFB+"  "+strDY3+"  "+strMG+"  "+strTY3+"  "+strSB1);
			m_pRecordSet->MoveNext();

		}
		m_list.SetCurSel(0);
		OnSelchangeList1();

	}
	catch(_com_error *e){
        AfxMessageBox(e->ErrorMessage());
	}
}

void CTeacherDlg::OnButtonAdd() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if(m_class.IsEmpty()||m_num.IsEmpty()||m_sex.IsEmpty()||m_name.IsEmpty()||m_one.IsEmpty()||m_two.IsEmpty()||m_three.IsEmpty()||m_four.IsEmpty()||m_five.IsEmpty()||m_six.IsEmpty()||m_seven.IsEmpty()||m_eight.IsEmpty()||m_nine.IsEmpty()||m_ten.IsEmpty()||m_eleven.IsEmpty())
	{
        AfxMessageBox("����ļ�¼���ֶ�ֵ����Ϊ��");
        return;
	}
	try
	{
		m_pRecordSet->AddNew();
		m_pRecordSet->PutCollect("�༶",_variant_t(m_class));
		m_pRecordSet->PutCollect("ѧ��",_variant_t(m_num));
		m_pRecordSet->PutCollect("�Ա�",_variant_t(m_sex));
	    m_pRecordSet->PutCollect("����",_variant_t(m_name));
		m_pRecordSet->PutCollect("��ʵϰ����",_variant_t(m_one));
		m_pRecordSet->PutCollect("���ֵ��Ӽ�������",_variant_t(m_two));
		m_pRecordSet->PutCollect("��·",_variant_t(m_three));
		m_pRecordSet->PutCollect("��·ʵ��",_variant_t(m_four));
		m_pRecordSet->PutCollect("���ֵ��Ӽ�������ʵ��",_variant_t(m_five));
		m_pRecordSet->PutCollect("����ͳ��B",_variant_t(m_six));
		m_pRecordSet->PutCollect("���亯������ֱ任",_variant_t(m_seven));
		m_pRecordSet->PutCollect("��ѧӢ��3",_variant_t(m_eight));
		m_pRecordSet->PutCollect("ë��",_variant_t(m_nine));
        m_pRecordSet->PutCollect("����3",_variant_t(m_ten));
		m_pRecordSet->PutCollect("ְҵ��������1",_variant_t(m_eleven));
		m_pRecordSet->Update();
		
		int n=m_list.GetCurSel();
		OnButtonOpen();
		m_list.SetCurSel(n);
		OnSelchangeList1();
	}
	catch (_com_error * e)
	{
		AfxMessageBox(e->ErrorMessage());
	}
}

void CTeacherDlg::OnButtonDelete() 
{
	// TODO: Add your control notification handler code here
	int n=m_list.GetCurSel();
	if(n<0)
		return;
	try
	{
		m_pRecordSet->Delete(adAffectCurrent);

		m_list.DeleteString(n);

		m_list.SetCurSel(n-1);

		OnSelchangeList1();
	}
	catch (_com_error * e)
	{
		AfxMessageBox(e->ErrorMessage());
	}
}

void CTeacherDlg::OnButtonUpdate() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if(m_list.GetCount()==0)
	{
		AfxMessageBox("����������");
		return;
	}
	if(m_class.IsEmpty()||m_num.IsEmpty()||m_sex.IsEmpty()||m_name.IsEmpty()||m_one.IsEmpty()||m_two.IsEmpty()||m_three.IsEmpty()||m_four.IsEmpty()||m_five.IsEmpty()||m_six.IsEmpty()||m_seven.IsEmpty()||m_eight.IsEmpty()||m_nine.IsEmpty()||m_ten.IsEmpty()||m_eleven.IsEmpty())
	{
        AfxMessageBox("�޸ĵļ�¼���ֶ�ֵ����Ϊ��");
        return;
	}
	try
	{
		m_pRecordSet->PutCollect("�༶",_variant_t(m_class));
		m_pRecordSet->PutCollect("ѧ��",_variant_t(m_num));
		m_pRecordSet->PutCollect("�Ա�",_variant_t(m_sex));
		m_pRecordSet->PutCollect("����",_variant_t(m_name));
	    m_pRecordSet->PutCollect("��ʵϰ����",_variant_t(m_one));
	    m_pRecordSet->PutCollect("���ֵ��Ӽ�������",_variant_t(m_two));
		m_pRecordSet->PutCollect("��·",_variant_t(m_three));
		m_pRecordSet->PutCollect("��·ʵ��",_variant_t(m_four));
		m_pRecordSet->PutCollect("���ֵ��Ӽ�������ʵ��",_variant_t(m_five));
		m_pRecordSet->PutCollect("����ͳ��B",_variant_t(m_six));
		m_pRecordSet->PutCollect("���亯������ֱ任",_variant_t(m_seven));
		m_pRecordSet->PutCollect("��ѧӢ��3",_variant_t(m_eight));
		m_pRecordSet->PutCollect("ë��",_variant_t(m_nine));
		m_pRecordSet->PutCollect("����3",_variant_t(m_ten));
		m_pRecordSet->PutCollect("ְҵ��������1",_variant_t(m_eleven));
		m_pRecordSet->Update();
		
		int n=m_list.GetCurSel();
		OnButtonOpen();
		m_list.SetCurSel(n);
		OnSelchangeList1();
	}
	catch (_com_error * e)
	{
		AfxMessageBox(e->ErrorMessage());
	}
}

void CTeacherDlg::OnSelchangeList1() 
{
	// TODO: Add your control notification handler code here
	int s=m_list.GetCurSel();
	_variant_t var;
	if(s<0)
		return;
	try
	{
       m_pRecordSet->MoveFirst();
	   m_pRecordSet->Move(long(s));
	   var=m_pRecordSet->GetCollect("�༶");
		   if(var.vt!=VT_NULL)
			m_class=(LPCTSTR)_bstr_t(var);
	   var=m_pRecordSet->GetCollect("ѧ��");
			if(var.vt!=VT_NULL)
			m_num=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("�Ա�");
	 	if(var.vt!=VT_NULL)
			m_sex=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("����");
			if(var.vt!=VT_NULL)
			m_name=(LPCTSTR)_bstr_t(var);
      var=m_pRecordSet->GetCollect("��ʵϰ����");
			if(var.vt!=VT_NULL)
			m_one=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("���ֵ��Ӽ�������");
			if(var.vt!=VT_NULL)
			m_two=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("��·");
			if(var.vt!=VT_NULL)
			m_three=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("��·ʵ��");
			if(var.vt!=VT_NULL)
			m_four=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("���ֵ��Ӽ�������ʵ��");
			if(var.vt!=VT_NULL)
			m_five=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("����ͳ��B");
			if(var.vt!=VT_NULL)
			m_six=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("���亯������ֱ任");
			if(var.vt!=VT_NULL)
			m_seven=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("��ѧӢ��3");
			if(var.vt!=VT_NULL)
			m_eight=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("ë��");
			if(var.vt!=VT_NULL)
			m_nine=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("����3");
			if(var.vt!=VT_NULL)
			m_ten=(LPCTSTR)_bstr_t(var);
	  var=m_pRecordSet->GetCollect("ְҵ��������1");
			if(var.vt!=VT_NULL)
			m_eleven=(LPCTSTR)_bstr_t(var);
		UpdateData(FALSE);
	}
	catch(_com_error *e)
	{
		AfxMessageBox(e->ErrorMessage());
	}
}

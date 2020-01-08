// Teacher.cpp : implementation file
//

#include "stdafx.h"
#include "Real.h"
#include "Teacher.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Teacher dialog
struct B
{
	char *id;
	char *username;
	char *password;
};

B b[] = {"1","张伟","1",
         "2","许金钢","2",
		 "3","郭慧娜","3",
		 "4","刘亿文","4"};

Teacher::Teacher(CWnd* pParent /*=NULL*/)
	: CDialog(Teacher::IDD, pParent)
{
	//{{AFX_DATA_INIT(Teacher)
	m_id = _T("");
	m_name = _T("");
	m_password = _T("");
	//}}AFX_DATA_INIT
}


void Teacher::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Teacher)
	DDX_Text(pDX, IDC_EDIT_ID, m_id);
	DDX_Text(pDX, IDC_EDIT_Name, m_name);
	DDX_Text(pDX, IDC_EDIT_Password, m_password);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Teacher, CDialog)
	//{{AFX_MSG_MAP(Teacher)
	ON_BN_CLICKED(IDC_BUTTON_Confirm, OnBUTTONConfirm)
	ON_BN_CLICKED(IDC_BUTTON_Exit, OnBUTTONExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Teacher message handlers


void Teacher::OnBUTTONConfirm() 
{
	// TODO: Add your control notification handler code here
	CString id,pswd,name;
	GetDlgItemText(IDC_EDIT_ID,id);
    GetDlgItemText(IDC_EDIT_Name,name);
	GetDlgItemText(IDC_EDIT_Password,pswd);
	for(int i=0;i<3;i++)
	{
		if(id.Compare(b[i].id)&&name.Compare(b[i].username)&&pswd.Compare(b[i].password))
		{
			MessageBox(_T("用户名或密码错误!"));
		}
		break;
	}
	ShellExecute(NULL,"open","Teacher.exe",NULL,NULL,SW_SHOWNORMAL);
}

void Teacher::OnBUTTONExit() 
{
	// TODO: Add your control notification handler code here
	OnOK();
}

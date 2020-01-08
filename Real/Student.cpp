// Student.cpp : implementation file
//

#include "stdafx.h"
#include "Real.h"
#include "Student.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Student dialog

struct A
{
	char *username;
	char *password;
};

A a[] = {"201724390701","201724390701",
         "201724390702","201724390702",
		 "201724390703","201724390703",
		 "201724390704","201724390704",
		 "201724390705","201724390705",
		 "201724390706","201724390706",
		 "201724390707","201724390707"};

Student::Student(CWnd* pParent /*=NULL*/)
	: CDialog(Student::IDD, pParent)
{
	//{{AFX_DATA_INIT(Student)
	m_password = _T("");
	m_username = _T("");
	//}}AFX_DATA_INIT
}


void Student::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Student)
	DDX_Text(pDX, IDC_PASSWORD, m_password);
	DDX_Text(pDX, IDC_USER, m_username);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Student, CDialog)
	//{{AFX_MSG_MAP(Student)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Student message handlers

void Student::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CString user,pswd;
	GetDlgItemText(IDC_USER,user);
    GetDlgItemText(IDC_PASSWORD,pswd);
	for(int i=0;i<7;i++)
	{
		if(!user.Compare(a[i].username)&&!pswd.Compare(a[i].password))
		{
			MessageBox(_T("用户名或密码错误!"));
		}
		break;
	}
	ShellExecute(NULL,"open","ADOAccess.exe",NULL,NULL,SW_SHOWNORMAL);
}

void Student::OnButton2() 
{
	// TODO: Add your control notification handler code here
	OnOK();
}

// UserDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "BatteryManage.h"
#include "UserDlg.h"
#include "afxdialogex.h"


// CUserDlg 对话框

IMPLEMENT_DYNAMIC(CUserDlg, CDialog)

CUserDlg::CUserDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUserDlg::IDD, pParent)
{

}

CUserDlg::~CUserDlg()
{
}

void CUserDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CUserDlg, CDialog)
END_MESSAGE_MAP()


// CUserDlg 消息处理程序

// CommDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "BatteryManage.h"
#include "CommDlg.h"
#include "afxdialogex.h"


// CCommDlg 对话框

IMPLEMENT_DYNAMIC(CCommDlg, CDialog)

CCommDlg::CCommDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCommDlg::IDD, pParent)
{

}

CCommDlg::~CCommDlg()
{
}

void CCommDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCommDlg, CDialog)
END_MESSAGE_MAP()


// CCommDlg 消息处理程序

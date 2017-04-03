// InitDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "BatteryManage.h"
#include "InitDialog.h"
#include "afxdialogex.h"


// CInitDialog 对话框

IMPLEMENT_DYNAMIC(CInitDialog, CDialog)

CInitDialog::CInitDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CInitDialog::IDD, pParent)
{

}

CInitDialog::~CInitDialog()
{
}

void CInitDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CInitDialog, CDialog)
END_MESSAGE_MAP()


// CInitDialog 消息处理程序

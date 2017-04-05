// ColorDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "BatteryManage.h"
#include "ColorDlg.h"
#include "afxdialogex.h"


// CColorDlg 对话框

IMPLEMENT_DYNAMIC(CColorDlg, CDialog)

CColorDlg::CColorDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CColorDlg::IDD, pParent)
{

}

CColorDlg::~CColorDlg()
{
}

void CColorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CColorDlg, CDialog)
END_MESSAGE_MAP()


// CColorDlg 消息处理程序

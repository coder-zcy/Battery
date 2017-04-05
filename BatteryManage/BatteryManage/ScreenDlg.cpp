// ScreenDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "BatteryManage.h"
#include "ScreenDlg.h"
#include "afxdialogex.h"
#include <string>

using namespace std;


// CScreenDlg 对话框

IMPLEMENT_DYNAMIC(CScreenDlg, CDialog)

CScreenDlg::CScreenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CScreenDlg::IDD, pParent)
{
	
}

CScreenDlg::~CScreenDlg()
{
}

void CScreenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_SCRNUM, screenNumCom);
	DDX_Control(pDX, IDC_DEVICEID, deviceId);
	DDX_Control(pDX, IDC_TEAMNUM_PERCOL, teamNumPerCol);
	DDX_Control(pDX, IDC_COL_SHOWNUM, colShowNum);
	DDX_Control(pDX, IDC_NUM_PERTEAM, numPerTeam);
	DDX_Control(pDX, IDC_CONST_VMAX, constVmax);
	DDX_Control(pDX, IDC_CONST_VMIN, constVmin);
	DDX_Control(pDX, IDC_CONST_AMAX, constAmax);
	DDX_Control(pDX, IDC_CONST_AMIN, constAmin);
	DDX_Control(pDX, IDC_CONST_VCHG, constVcharge);
	DDX_Control(pDX, IDC_OM_TEST, omTest);
	DDX_Control(pDX, IDC_SAVETO_FILE, saveToFile);
	DDX_Control(pDX, IDC_VDIS, vdis);
	DDX_Control(pDX, IDC_VDIS_VAL, vdisVal);
	DDX_Control(pDX, IDC_ADIS, adis);
	DDX_Control(pDX, IDC_ADIS_VAL, adisVal);
	DDX_Control(pDX, IDC_TIMEDIS, timeDis);
	DDX_Control(pDX, IDC_TIMEDIS_VAL, timeDisVal);
	DDX_Control(pDX, IDC_VSHOW_MAX, vshowMax);
	DDX_Control(pDX, IDC_VSHOW_MIN, vshowMin);
	DDX_Control(pDX, IDC_SVSHOW_MAX, svshowMax);
	DDX_Control(pDX, IDC_SVSHOW_MIN, svshowMin);
	DDX_Control(pDX, IDC_SASHOW_MAX, sashowMax);
	DDX_Control(pDX, IDC_SASHOW_MIN, sashowMin);
	DDX_Control(pDX, IDC_SRSHOW_MAX, srshowMax);
	DDX_Control(pDX, IDC_SRSHOW_MIN, srshowMin);
}


BEGIN_MESSAGE_MAP(CScreenDlg, CDialog)
	ON_BN_CLICKED(IDC_SCRNUMP, &CScreenDlg::OnBnClickedScrnump)
	ON_BN_CLICKED(IDC_SCRNUMP, &CScreenDlg::OnBnClickedScrnump)
	ON_BN_CLICKED(IDC_SCRNUMM, &CScreenDlg::OnBnClickedScrnumm)
	ON_BN_CLICKED(IDC_PARACOPY, &CScreenDlg::OnBnClickedParacopy)
END_MESSAGE_MAP()


// CScreenDlg 消息处理程序


//void CScreenDlg::OnBnClickedScrnumm()
//{
//	//CString selStr;
//	int sel = screenNumCom.GetCurSel();
//	//selStr.Format(_T("%d"), sel);
//
//	if(sel+1 > MIN_SCREEN_NUM && sel+1 <= MAX_SCREEN_NUM)
//		screenNumCom.SetCurSel(sel - 1);
//
//}


BOOL CScreenDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	this->screenNumCom.SetCurSel(0);
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}


void CScreenDlg::OnBnClickedScrnump()
{
	int sel = screenNumCom.GetCurSel();
	
	if (sel+1 >= MIN_SCREEN_NUM && sel+1 < MAX_SCREEN_NUM)
		screenNumCom.SetCurSel(sel + 1);
}


void CScreenDlg::OnBnClickedScrnumm()
{
	//CString selStr;
	int sel = screenNumCom.GetCurSel();
	//selStr.Format(_T("%d"), sel);
	
	if(sel+1 > MIN_SCREEN_NUM && sel+1 <= MAX_SCREEN_NUM)
		screenNumCom.SetCurSel(sel - 1);
}


void CScreenDlg::OnBnClickedParacopy()
{
	
}

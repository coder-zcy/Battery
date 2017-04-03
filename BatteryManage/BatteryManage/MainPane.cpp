// MainPane.cpp : 实现文件
//

#include "stdafx.h"
#include "BatteryManage.h"
#include "MainPane.h"


// CMainPane

IMPLEMENT_DYNCREATE(CMainPane, CFormView)

CMainPane::CMainPane()
	: CFormView(CMainPane::IDD)
{

}

CMainPane::~CMainPane()
{
}

void CMainPane::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMainPane, CFormView)

END_MESSAGE_MAP()


// CMainPane 诊断

#ifdef _DEBUG
void CMainPane::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CMainPane::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMainPane 消息处理程序



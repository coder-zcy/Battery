// LeftPane.cpp : 实现文件
//

#include "stdafx.h"
#include "BatteryManage.h"
#include "LeftPane.h"


// CLeftPane

IMPLEMENT_DYNCREATE(CLeftPane, CFormView)

CLeftPane::CLeftPane()
	: CFormView(CLeftPane::IDD)
{

}

CLeftPane::~CLeftPane()
{
}

void CLeftPane::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CLeftPane, CFormView)
END_MESSAGE_MAP()


// CLeftPane 诊断

#ifdef _DEBUG
void CLeftPane::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CLeftPane::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CLeftPane 消息处理程序

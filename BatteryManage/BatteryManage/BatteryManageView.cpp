
// BatteryManageView.cpp : CBatteryManageView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "BatteryManage.h"
#endif

#include "BatteryManageDoc.h"
#include "BatteryManageView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBatteryManageView

IMPLEMENT_DYNCREATE(CBatteryManageView, CView)

BEGIN_MESSAGE_MAP(CBatteryManageView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CBatteryManageView 构造/析构

CBatteryManageView::CBatteryManageView()
{
	// TODO:  在此处添加构造代码

}

CBatteryManageView::~CBatteryManageView()
{
}

BOOL CBatteryManageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CBatteryManageView 绘制

void CBatteryManageView::OnDraw(CDC* /*pDC*/)
{
	CBatteryManageDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CBatteryManageView 打印

BOOL CBatteryManageView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CBatteryManageView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CBatteryManageView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CBatteryManageView 诊断

#ifdef _DEBUG
void CBatteryManageView::AssertValid() const
{
	CView::AssertValid();
}

void CBatteryManageView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBatteryManageDoc* CBatteryManageView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBatteryManageDoc)));
	return (CBatteryManageDoc*)m_pDocument;
}
#endif //_DEBUG


// CBatteryManageView 消息处理程序


// BatteryManageView.cpp : CBatteryManageView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CBatteryManageView ����/����

CBatteryManageView::CBatteryManageView()
{
	// TODO:  �ڴ˴���ӹ������

}

CBatteryManageView::~CBatteryManageView()
{
}

BOOL CBatteryManageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CBatteryManageView ����

void CBatteryManageView::OnDraw(CDC* /*pDC*/)
{
	CBatteryManageDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CBatteryManageView ��ӡ

BOOL CBatteryManageView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CBatteryManageView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CBatteryManageView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CBatteryManageView ���

#ifdef _DEBUG
void CBatteryManageView::AssertValid() const
{
	CView::AssertValid();
}

void CBatteryManageView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBatteryManageDoc* CBatteryManageView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBatteryManageDoc)));
	return (CBatteryManageDoc*)m_pDocument;
}
#endif //_DEBUG


// CBatteryManageView ��Ϣ�������

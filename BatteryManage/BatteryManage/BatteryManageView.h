
// BatteryManageView.h : CBatteryManageView ��Ľӿ�
//

#pragma once


class CBatteryManageView : public CView
{
protected: // �������л�����
	CBatteryManageView();
	DECLARE_DYNCREATE(CBatteryManageView)

// ����
public:
	CBatteryManageDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CBatteryManageView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // BatteryManageView.cpp �еĵ��԰汾
inline CBatteryManageDoc* CBatteryManageView::GetDocument() const
   { return reinterpret_cast<CBatteryManageDoc*>(m_pDocument); }
#endif


#pragma once



// CLeftPane ������ͼ

class CLeftPane : public CFormView
{
	DECLARE_DYNCREATE(CLeftPane)

protected:
	CLeftPane();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CLeftPane();

public:
	enum { IDD = IDD_LEFTPANE };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};



#pragma once



// CMainPane ������ͼ

class CMainPane : public CFormView
{
	DECLARE_DYNCREATE(CMainPane)

protected:
	CMainPane();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CMainPane();

public:
	enum { IDD = IDD_MAINPANE };
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



#pragma once


// CInitDialog �Ի���

class CInitDialog : public CDialog
{
	DECLARE_DYNAMIC(CInitDialog)

public:
	CInitDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CInitDialog();

// �Ի�������
	enum { IDD = IDD_INITDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

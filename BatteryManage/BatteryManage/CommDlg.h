#pragma once


// CCommDlg �Ի���

class CCommDlg : public CDialog
{
	DECLARE_DYNAMIC(CCommDlg)

public:
	CCommDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCommDlg();

// �Ի�������
	enum { IDD = IDD_COMMDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

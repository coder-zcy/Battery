#pragma once


// COtherDlg �Ի���

class COtherDlg : public CDialog
{
	DECLARE_DYNAMIC(COtherDlg)

public:
	COtherDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~COtherDlg();

// �Ի�������
	enum { IDD = IDD_COMMDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

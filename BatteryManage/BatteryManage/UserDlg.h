#pragma once


// CUserDlg 对话框

class CUserDlg : public CDialog
{
	DECLARE_DYNAMIC(CUserDlg)

public:
	CUserDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CUserDlg();

// 对话框数据
	enum { IDD = IDD_USERDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

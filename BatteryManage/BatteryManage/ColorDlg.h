#pragma once


// CColorDlg 对话框

class CColorDlg : public CDialog
{
	DECLARE_DYNAMIC(CColorDlg)

public:
	CColorDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CColorDlg();

// 对话框数据
	enum { IDD = IDD_COLORDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

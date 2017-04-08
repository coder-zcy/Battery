#pragma once


// COtherDlg 对话框

class COtherDlg : public CDialog
{
	DECLARE_DYNAMIC(COtherDlg)

public:
	COtherDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COtherDlg();

// 对话框数据
	enum { IDD = IDD_COMMDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

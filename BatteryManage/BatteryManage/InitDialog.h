#pragma once


// CInitDialog 对话框

class CInitDialog : public CDialog
{
	DECLARE_DYNAMIC(CInitDialog)

public:
	CInitDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CInitDialog();

// 对话框数据
	enum { IDD = IDD_INITDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

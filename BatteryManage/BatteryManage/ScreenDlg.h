#pragma once
#include "afxwin.h"
#include "InitCopyDlg.h"


// CScreenDlg �Ի���

class CScreenDlg : public CDialog
{
	DECLARE_DYNAMIC(CScreenDlg)

public:
	CScreenDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CScreenDlg();

// �Ի�������
	enum { IDD = IDD_SCREENDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CInitCopyDlg *copyDlg;
	CComboBox screenNumCom;

	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedScrnump();
	afx_msg void OnBnClickedScrnumm();
	afx_msg void OnBnClickedParacopy();
	CEdit deviceId;
	CEdit teamNumPerCol;
	CEdit colShowNum;
	CEdit numPerTeam;
	CEdit constVmax;
	CEdit constVmin;
	CEdit constAmax;
	CEdit constAmin;
	CButton constVcharge;
	CButton omTest;
	CButton saveToFile;
	CButton vdis;
	CEdit vdisVal;
	CButton adis;
	CEdit adisVal;
	CButton timeDis;
	CEdit timeDisVal;
	CEdit vshowMax;
	CEdit vshowMin;
	CEdit svshowMax;
	CEdit svshowMin;
	CEdit sashowMax;
	CEdit sashowMin;
	CEdit srshowMax;
	CEdit srshowMin;
};

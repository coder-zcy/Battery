
// BatteryManage.h : BatteryManage Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CBatteryManageApp:
// �йش����ʵ�֣������ BatteryManage.cpp
//

class CBatteryManageApp : public CWinApp
{
public:
	CBatteryManageApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBatteryManageApp theApp;


// IndustrialScanSystem.h : IndustrialScanSystem Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CIndustrialScanSystemApp:
// �йش����ʵ�֣������ IndustrialScanSystem.cpp
//

class CIndustrialScanSystemApp : public CWinApp
{
public:
	CIndustrialScanSystemApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CIndustrialScanSystemApp theApp;


// aaaaa.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CaaaaaApp:
// �йش����ʵ�֣������ aaaaa.cpp
//

class CaaaaaApp : public CWinApp
{
public:
	CaaaaaApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CaaaaaApp theApp;

// FigureMatchApp.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFigureMatchAppApp: 
// �йش����ʵ�֣������ FigureMatchApp.cpp
//

class CFigureMatchAppApp : public CWinApp
{
public:
	CFigureMatchAppApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFigureMatchAppApp theApp;
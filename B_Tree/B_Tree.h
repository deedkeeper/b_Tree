
// B_Tree.h : B_Tree 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号
#include "B_TreeNode.h"
#include <math.h>

// CB_TreeApp:
// 有关此类的实现，请参阅 B_Tree.cpp
//

class CB_TreeApp : public CWinApp
{
public:
	CB_TreeApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CB_TreeApp theApp;


// B_TreeView.cpp : CB_TreeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "B_Tree.h"
#endif

#include "B_TreeDoc.h"
#include "B_TreeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CB_TreeView

IMPLEMENT_DYNCREATE(CB_TreeView, CView)

BEGIN_MESSAGE_MAP(CB_TreeView, CView)
END_MESSAGE_MAP()

// CB_TreeView 构造/析构

CB_TreeView::CB_TreeView()
{
	// TODO: 在此处添加构造代码

}

CB_TreeView::~CB_TreeView()
{
}

BOOL CB_TreeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CB_TreeView 绘制

void CB_TreeView::OnDraw(CDC* /*pDC*/)
{
	CB_TreeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CB_TreeView 诊断

#ifdef _DEBUG
void CB_TreeView::AssertValid() const
{
	CView::AssertValid();
}

void CB_TreeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CB_TreeDoc* CB_TreeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CB_TreeDoc)));
	return (CB_TreeDoc*)m_pDocument;
}
#endif //_DEBUG


// CB_TreeView 消息处理程序


// B_TreeView.cpp : CB_TreeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CB_TreeView ����/����

CB_TreeView::CB_TreeView()
{
	// TODO: �ڴ˴���ӹ������

}

CB_TreeView::~CB_TreeView()
{
}

BOOL CB_TreeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CB_TreeView ����

void CB_TreeView::OnDraw(CDC* /*pDC*/)
{
	CB_TreeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CB_TreeView ���

#ifdef _DEBUG
void CB_TreeView::AssertValid() const
{
	CView::AssertValid();
}

void CB_TreeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CB_TreeDoc* CB_TreeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CB_TreeDoc)));
	return (CB_TreeDoc*)m_pDocument;
}
#endif //_DEBUG


// CB_TreeView ��Ϣ�������


// B_TreeView.h : CB_TreeView ��Ľӿ�
//

#pragma once


class CB_TreeView : public CView
{
protected: // �������л�����
	CB_TreeView();
	DECLARE_DYNCREATE(CB_TreeView)

// ����
public:
	CB_TreeDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CB_TreeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // B_TreeView.cpp �еĵ��԰汾
inline CB_TreeDoc* CB_TreeView::GetDocument() const
   { return reinterpret_cast<CB_TreeDoc*>(m_pDocument); }
#endif


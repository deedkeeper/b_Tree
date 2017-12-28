#pragma once
#if !defined(AFX_B_TREENODE_H__AE00E16A_50C7_4054_AEC3_AEA51D1FE442__INCLUDED_)
#define AFX_B_TREENODE_H__AE00E16A_50C7_4054_AEC3_AEA51D1FE442__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "afxtempl.h"
#include <afxwin.h>
#include <afxext.h>
class CB_TreeNode : public CObject
{
public:
	CB_TreeNode(int vOrder);
	virtual ~CB_TreeNode();
	void SetB_TreeNodePosition(CPoint vPoint,
		int vEdge);//���ý����ʾλ��
	void DrawB_TreeLine(CPoint vPoint,
		int vNum, CDC* pDC);//�����߶�
	void DrawB_TreeSon(CDC* pDC);//���ƽ�㺢��
	void DrawB_TreeRectangle(CPoint vPoint,
		int vB_TreeKey, int vNum, CDC* pDC);//���ƾ���     
	void DrawB_TreeNode(CDC* pDC);//����B_�����
	void DrawSearchB_TreeNode(int vIndex,
		int vB_TreeKey, CDC* pDC);//���Ʋ���B_�����
public:
	CPoint m_Point;//B_���������λ��
	COLORREF m_Color; //B_�������ɫ
	CArray<int, int&> m_B_TreeNodeKey;//B_�����ؼ�������
	CTypedPtrArray <CObArray, CB_TreeNode*>
		m_B_TreeSonPointer;//B_���������ָ������
	CB_TreeNode *m_pParent;//B_�����ڵ�ָ�� 
	int m_NumKeys;//B_�����ؼ�������
	int m_Width;//B_�������ʾ���
	int m_Edge;//B_�����߽�
	int m_Order;//B_���Ľ�
};

#endif // !defined(AFX_B_TREENODE_H__AE00E16A_50C7_4054_AEC3_AEA51D1FE442__INCLUDED_)

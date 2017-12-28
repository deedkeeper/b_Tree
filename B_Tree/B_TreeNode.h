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
		int vEdge);//设置结点显示位置
	void DrawB_TreeLine(CPoint vPoint,
		int vNum, CDC* pDC);//绘制线段
	void DrawB_TreeSon(CDC* pDC);//绘制结点孩子
	void DrawB_TreeRectangle(CPoint vPoint,
		int vB_TreeKey, int vNum, CDC* pDC);//绘制矩形     
	void DrawB_TreeNode(CDC* pDC);//绘制B_树结点
	void DrawSearchB_TreeNode(int vIndex,
		int vB_TreeKey, CDC* pDC);//绘制查找B_树结点
public:
	CPoint m_Point;//B_树结点坐标位置
	COLORREF m_Color; //B_树结点颜色
	CArray<int, int&> m_B_TreeNodeKey;//B_树结点关键字序列
	CTypedPtrArray <CObArray, CB_TreeNode*>
		m_B_TreeSonPointer;//B_树结点子树指针序列
	CB_TreeNode *m_pParent;//B_树父节点指针 
	int m_NumKeys;//B_树结点关键字数量
	int m_Width;//B_树结点显示宽度
	int m_Edge;//B_树结点边界
	int m_Order;//B_树的阶
};

#endif // !defined(AFX_B_TREENODE_H__AE00E16A_50C7_4054_AEC3_AEA51D1FE442__INCLUDED_)

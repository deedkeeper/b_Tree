#pragma once



// CB_TreeDraw ������ͼ

class CB_TreeDraw : public CFormView
{
	DECLARE_DYNCREATE(CB_TreeDraw)

protected:
	CB_TreeDraw();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CB_TreeDraw();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_B_TREE_DRAW };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};




// IndustrialScanSystemView.h : CIndustrialScanSystemView ��Ľӿ�
//

#pragma once


class CIndustrialScanSystemView : public CView
{
protected: // �������л�����
	CIndustrialScanSystemView();
	DECLARE_DYNCREATE(CIndustrialScanSystemView)

// ����
public:
	CIndustrialScanSystemDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CIndustrialScanSystemView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // IndustrialScanSystemView.cpp �еĵ��԰汾
inline CIndustrialScanSystemDoc* CIndustrialScanSystemView::GetDocument() const
   { return reinterpret_cast<CIndustrialScanSystemDoc*>(m_pDocument); }
#endif


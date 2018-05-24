
// IndustrialScanSystemView.cpp : CIndustrialScanSystemView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "IndustrialScanSystem.h"
#endif

#include "IndustrialScanSystemDoc.h"
#include "IndustrialScanSystemView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CIndustrialScanSystemView

IMPLEMENT_DYNCREATE(CIndustrialScanSystemView, CView)

BEGIN_MESSAGE_MAP(CIndustrialScanSystemView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CIndustrialScanSystemView ����/����

CIndustrialScanSystemView::CIndustrialScanSystemView()
{
	// TODO:  �ڴ˴���ӹ������

}

CIndustrialScanSystemView::~CIndustrialScanSystemView()
{
}

BOOL CIndustrialScanSystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CIndustrialScanSystemView ����

void CIndustrialScanSystemView::OnDraw(CDC* /*pDC*/)
{
	CIndustrialScanSystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CIndustrialScanSystemView ��ӡ

BOOL CIndustrialScanSystemView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CIndustrialScanSystemView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CIndustrialScanSystemView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CIndustrialScanSystemView ���

#ifdef _DEBUG
void CIndustrialScanSystemView::AssertValid() const
{
	CView::AssertValid();
}

void CIndustrialScanSystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CIndustrialScanSystemDoc* CIndustrialScanSystemView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CIndustrialScanSystemDoc)));
	return (CIndustrialScanSystemDoc*)m_pDocument;
}
#endif //_DEBUG


// CIndustrialScanSystemView ��Ϣ�������


// IndustrialScanSystemView.cpp : CIndustrialScanSystemView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CIndustrialScanSystemView 构造/析构

CIndustrialScanSystemView::CIndustrialScanSystemView()
{
	// TODO:  在此处添加构造代码

}

CIndustrialScanSystemView::~CIndustrialScanSystemView()
{
}

BOOL CIndustrialScanSystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CIndustrialScanSystemView 绘制

void CIndustrialScanSystemView::OnDraw(CDC* /*pDC*/)
{
	CIndustrialScanSystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CIndustrialScanSystemView 打印

BOOL CIndustrialScanSystemView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CIndustrialScanSystemView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CIndustrialScanSystemView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CIndustrialScanSystemView 诊断

#ifdef _DEBUG
void CIndustrialScanSystemView::AssertValid() const
{
	CView::AssertValid();
}

void CIndustrialScanSystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CIndustrialScanSystemDoc* CIndustrialScanSystemView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CIndustrialScanSystemDoc)));
	return (CIndustrialScanSystemDoc*)m_pDocument;
}
#endif //_DEBUG


// CIndustrialScanSystemView 消息处理程序

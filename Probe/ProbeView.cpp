
// ProbeView.cpp : implementation of the CProbeView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Probe.h"
#endif

#include "ProbeDoc.h"
#include "ProbeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProbeView

IMPLEMENT_DYNCREATE(CProbeView, CView)

BEGIN_MESSAGE_MAP(CProbeView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CProbeView construction/destruction

CProbeView::CProbeView()
{
	// TODO: add construction code here

}

CProbeView::~CProbeView()
{
}

BOOL CProbeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CProbeView drawing

void CProbeView::OnDraw(CDC* /*pDC*/)
{
	CProbeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProbeView printing

BOOL CProbeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProbeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProbeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CProbeView diagnostics

#ifdef _DEBUG
void CProbeView::AssertValid() const
{
	CView::AssertValid();
}

void CProbeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProbeDoc* CProbeView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProbeDoc)));
	return (CProbeDoc*)m_pDocument;
}
#endif //_DEBUG


// CProbeView message handlers

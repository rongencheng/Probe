// AttentionDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Probe.h"
#include "AttentionDialog.h"
#include "afxdialogex.h"


// CAttentionDialog dialog

IMPLEMENT_DYNAMIC(CAttentionDialog, CDialogEx)

CAttentionDialog::CAttentionDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CAttentionDialog::IDD, pParent)
	, m_Capture(FALSE)
	, m_Clear(FALSE)
{

}

CAttentionDialog::~CAttentionDialog()
{
}

void CAttentionDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_CHECKCapture, m_Capture);
	DDX_Check(pDX, IDC_CHECKClear, m_Clear);
}


BEGIN_MESSAGE_MAP(CAttentionDialog, CDialogEx)
END_MESSAGE_MAP()


// CAttentionDialog message handlers

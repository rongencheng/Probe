// CheckDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Probe.h"
#include "CheckDialog.h"
#include "afxdialogex.h"


// CCheckDialog dialog

IMPLEMENT_DYNAMIC(CCheckDialog, CDialogEx)

CCheckDialog::CCheckDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCheckDialog::IDD, pParent)
	, m_checkCycles(FALSE)
	, m_checkLED(FALSE)
	, m_checkSampling(FALSE)
{

}

CCheckDialog::~CCheckDialog()
{
}

void CCheckDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_CHECKCYCLES, m_checkCycles);
	DDX_Check(pDX, IDC_CHECKLED, m_checkLED);
	DDX_Check(pDX, IDC_CHECKSAMPLING, m_checkSampling);
}


BEGIN_MESSAGE_MAP(CCheckDialog, CDialogEx)
END_MESSAGE_MAP()


// CCheckDialog message handlers

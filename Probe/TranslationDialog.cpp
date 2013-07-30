// TranslationDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Probe.h"
#include "TranslationDialog.h"
#include "afxdialogex.h"


// CTranslationDialog dialog

IMPLEMENT_DYNAMIC(CTranslationDialog, CDialogEx)

CTranslationDialog::CTranslationDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTranslationDialog::IDD, pParent)
	, m_XPosition(0)
	, m_YPosition(0)
	, m_ZPosition(0)
{

}

CTranslationDialog::~CTranslationDialog()
{
}

void CTranslationDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_X_Position, m_XPosition);
	DDX_Text(pDX, IDC_Y_Position, m_YPosition);
	DDX_Text(pDX, IDC_Z_Position, m_ZPosition);
}


BEGIN_MESSAGE_MAP(CTranslationDialog, CDialogEx)
END_MESSAGE_MAP()


// CTranslationDialog message handlers

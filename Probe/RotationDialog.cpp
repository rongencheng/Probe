// RotationDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Probe.h"
#include "RotationDialog.h"
#include "afxdialogex.h"


// CRotationDialog dialog

IMPLEMENT_DYNAMIC(CRotationDialog, CDialogEx)

CRotationDialog::CRotationDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CRotationDialog::IDD, pParent)
	, m_XDegree(0)
	, m_YDegree(0)
	, m_ZDegree(0)
{

}

CRotationDialog::~CRotationDialog()
{
}

void CRotationDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_X_DEGREE, m_XDegree);
	DDX_Text(pDX, IDC_Y_DEGREE, m_YDegree);
	DDX_Text(pDX, IDC_Z_DEGREE, m_ZDegree);
}


BEGIN_MESSAGE_MAP(CRotationDialog, CDialogEx)
END_MESSAGE_MAP()


// CRotationDialog message handlers

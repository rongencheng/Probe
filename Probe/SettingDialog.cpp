// SettingDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Probe.h"
#include "SettingDialog.h"
#include "afxdialogex.h"


// CSettingDialog dialog

IMPLEMENT_DYNAMIC(CSettingDialog, CDialogEx)

CSettingDialog::CSettingDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSettingDialog::IDD, pParent)
	, m_D_LEDBC(0)
	, m_D_TipLEDA(0)
	, m_D_TipLEDBC(0)
	, m_LED1(0)
	, m_LED2(0)
	, m_LED3(0)
	, m_TCM1(0)
	, m_TCM2(0)
	, m_TCM3(0)
{

}

CSettingDialog::~CSettingDialog()
{
}

void CSettingDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_D_LEDBC, m_D_LEDBC);
	DDX_Text(pDX, IDC_D_TipLEDA, m_D_TipLEDA);
	DDX_Text(pDX, IDC_D_TipLEDBC, m_D_TipLEDBC);
	DDX_Text(pDX, IDC_LED1, m_LED1);
	DDV_MinMaxInt(pDX, m_LED1, 1, 64);
	DDX_Text(pDX, IDC_LED2, m_LED2);
	DDV_MinMaxInt(pDX, m_LED2, 1, 64);
	DDX_Text(pDX, IDC_LED3, m_LED3);
	DDV_MinMaxInt(pDX, m_LED3, 1, 64);
	DDX_Text(pDX, IDC_TCM1, m_TCM1);
	DDV_MinMaxInt(pDX, m_TCM1, 1, 8);
	DDX_Text(pDX, IDC_TCM2, m_TCM2);
	DDV_MinMaxInt(pDX, m_TCM2, 1, 8);
	DDX_Text(pDX, IDC_TCM3, m_TCM3);
	DDV_MinMaxInt(pDX, m_TCM3, 1, 8);
}


BEGIN_MESSAGE_MAP(CSettingDialog, CDialogEx)
END_MESSAGE_MAP()


// CSettingDialog message handlers

#pragma once


// CSettingDialog dialog

class CSettingDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CSettingDialog)

public:
	CSettingDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSettingDialog();

// Dialog Data
	enum { IDD = IDD_SETTINGDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	float m_D_LEDBC;
	float m_D_TipLEDA;
	float m_D_TipLEDBC;
	int m_LED1;
	int m_LED2;
	int m_LED3;
	int m_TCM1;
	int m_TCM2;
	int m_TCM3;
};

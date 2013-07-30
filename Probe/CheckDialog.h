#pragma once


// CCheckDialog dialog

class CCheckDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CCheckDialog)

public:
	CCheckDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCheckDialog();

// Dialog Data
	enum { IDD = IDD_CHECKDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_checkCycles;
	BOOL m_checkLED;
	BOOL m_checkSampling;
};

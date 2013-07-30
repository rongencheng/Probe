#pragma once


// CAttentionDialog dialog

class CAttentionDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CAttentionDialog)

public:
	CAttentionDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAttentionDialog();

// Dialog Data
	enum { IDD = IDD_ATTENTIONDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_Capture;
	BOOL m_Clear;
};

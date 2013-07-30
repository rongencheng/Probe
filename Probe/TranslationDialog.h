#pragma once


// CTranslationDialog dialog

class CTranslationDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CTranslationDialog)

public:
	CTranslationDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTranslationDialog();

// Dialog Data
	enum { IDD = IDD_TRANSLATIONDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	float m_XPosition;
	float m_YPosition;
	float m_ZPosition;
};

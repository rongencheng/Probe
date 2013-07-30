#pragma once


// CRotationDialog dialog

class CRotationDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CRotationDialog)

public:
	CRotationDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CRotationDialog();

// Dialog Data
	enum { IDD = IDD_ROTATIONDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	float m_XDegree;
	float m_YDegree;
	float m_ZDegree;
};

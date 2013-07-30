
// Probe.h : main header file for the Probe application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CProbeApp:
// See Probe.cpp for the implementation of this class
//

class CProbeApp : public CWinAppEx
{
public:
	CProbeApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	virtual BOOL FirstInstance();

// Implementation
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

// this number for our VZProbe only
static CString lpszUniqueClass = _T("VZProbeClass");

// Keep track of whether the class was registered so we can
// unregister it upon exit
static BOOL bClassRegistered = FALSE;

extern CProbeApp theApp;

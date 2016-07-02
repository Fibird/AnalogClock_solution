
// AnalogClock.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CAnalogClockApp:
// See AnalogClock.cpp for the implementation of this class
//

class CAnalogClockApp : public CWinApp
{
public:
	CAnalogClockApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CAnalogClockApp theApp;
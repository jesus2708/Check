#pragma once  //______________________________________ Check.h  
#include "Resource.h"
class Check: public Win::Dialog
{
public:
	Check()
	{
	}
	~Check()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxNumero;
	Win::Button btPregunta;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(8.36083);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.50812);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Check";
		lb1.CreateX(NULL, L"numero entero", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.47625, 0.71437, 2.38125, 0.60854, hWnd, 1000);
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.28083, 0.71437, 1.93146, 0.60854, hWnd, 1001);
		btPregunta.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.74146, 0.63500, 2.43417, 0.68792, hWnd, 1002);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxNumero.Font = fontArial009A;
		btPregunta.Font = fontArial009A;
	}
	//_________________________________________________
	void btPregunta_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btPregunta.IsEvent(e, BN_CLICKED)) {btPregunta_Click(e); return true;}
		return false;
	}
};

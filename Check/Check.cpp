#include "stdafx.h"  //________________________________________ Check.cpp
#include "Check.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Check app;
	return app.BeginDialog(IDI_Check, hInstance);
}

void Check::Window_Open(Win::Event& e)
{
}

void Check::btPregunta_Click(Win::Event& e)
{
	const double input = tbxNumero.DoubleValue;
	if (input < 10.0)
	{
		this->MessageBoxW(L"Es menos de 10", L"Pregunta", MB_OK);
	}
}


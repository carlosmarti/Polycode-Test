#include "Polycode.h"
#include "polycode\view\win32\PolycodeView.h"
#include <Windows.h>
#include "PolyEntry.h"

using namespace Polycode;

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	PolycodeView* view = new PolycodeView(hInstance, nCmdShow, L"First App");
	PolyEntry* app = new PolyEntry(view);
	MSG msg;
	do {
		while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	} while (app->Update());

	return msg.wParam;
}
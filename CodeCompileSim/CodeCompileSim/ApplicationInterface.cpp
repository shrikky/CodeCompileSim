#include <windows.h>

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
void AddMenus();

int WINAPI WinMain(HINSTANCE hinst, HINSTANCE hprevInst, LPSTR args, int ncmdshow)
{

	WNDCLASSW WC = { 0 };
	WC.hbrBackground = (HBRUSH)COLOR_WINDOW;
	WC.hCursor = LoadCursor(NULL, IDC_ARROW);
	WC.hInstance = hinst;
	WC.lpszClassName = L"MyWindowClass";
	WC.lpfnWndProc = WindowProcedure;

	if (!RegisterClassW(&WC))
		return -1;

	CreateWindowW(L"MywindowClass", L"My Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 1024, 768, NULL, NULL, NULL, NULL);
	MSG msg = { 0 };
	while (GetMessage((&msg), NULL, NULL, NULL))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp)
{

	switch (msg)
	{
	case WM_CREATE:
		AddMenus();
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProcW(hwnd, msg, wp, lp);
		break;
	}
}

void AddMenus()
{

}
#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    while (1) {
        MessageBox(NULL, "Hello", "Message", MB_OK | MB_ICONINFORMATION);
        Sleep(30000); // wait 30 seconds
    }
    return 0;
}

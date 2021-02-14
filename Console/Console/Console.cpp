// Console.cpp

#include <iostream>
#include "dll_func.h"
#include <windows.h>

int main()
{
    MSG msg;
    HHOOK hhook_tmp2 = SetWindowsHookEx(WH_KEYBOARD_LL, HandleKeyboardEvent, hDllModule, 0);
    while (recieve_quit == false)
    {
        if (GetMessage(&msg, nullptr, 0, 0)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
    MessageBox(NULL, TEXT("APP QUIT"), TEXT(" "), MB_OK);
}

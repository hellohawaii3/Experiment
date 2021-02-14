#include "pch.h"
#include <windows.h>
#include "dll_func.h"

bool recieve_quit = false;
LRESULT CALLBACK HandleKeyboardEvent(int nCode, WPARAM wParam, LPARAM lParam)
{
    PKBDLLHOOKSTRUCT p = (PKBDLLHOOKSTRUCT)lParam;
    if (wParam == WM_KEYDOWN) {
        if (p->vkCode == VK_F8) {
            recieve_quit = true;
        }
    }

    return CallNextHookEx(NULL, nCode, wParam, lParam);
}
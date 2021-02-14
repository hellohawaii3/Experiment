#pragma once

#ifdef DLL1_EXPORTS
#define DLLFUNC_API __declspec(dllexport)
#else
#define DLLFUNC_API __declspec(dllimport)
#endif

#include "framework.h"

extern "C" DLLFUNC_API bool recieve_quit;
extern "C" DLLFUNC_API LRESULT CALLBACK HandleKeyboardEvent(int nCode, WPARAM wParam, LPARAM lParam);// refer to https://stackoverflow.com/a/60913531/9758790
extern "C" DLLFUNC_API HMODULE hDllModule;//or whatever name you like 
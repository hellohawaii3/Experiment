// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "dll_func.h"

// refer to https://stackoverflow.com/a/60913531/9758790
HMODULE hDllModule;//or whatever name you like 
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    hDllModule = hModule;
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


#include <windows.h>

#define DllExport __declspec(dllexport)
#define DllImport __declspec(dllimport)

DllImport int Sum(int a, int b);

extern "C" {
    DllExport int Product(int a, int b)
    {
        auto cum = 0;
        for (auto i = 0; i < a; i++)
        {
            cum = Sum(cum, b);
        }

        return cum;
    }}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
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

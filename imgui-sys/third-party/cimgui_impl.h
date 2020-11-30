#include <stdio.h>
#include <stdint.h>
#if defined _WIN32 || defined __CYGWIN__
    #ifdef CIMGUI_NO_EXPORT
        #define API
    #else
        #define API __declspec(dllexport)
    #endif
    #ifndef __GNUC__
    #define snprintf sprintf_s
    #endif
#else
    #ifdef __GNUC__
        #define API  __attribute__((__visibility__("default")))
    #else
        #define API
    #endif
#endif

#if defined __cplusplus
    #define EXTERN extern "C"
#else
    #include <stdarg.h>
    #include <stdbool.h>
    #define EXTERN extern
#endif

#define CIMGUI_API EXTERN API

typedef struct ID3D11DeviceContext ID3D11DeviceContext;
typedef struct ID3D11Device ID3D11Device;

struct ID3D11Device;
struct ID3D11DeviceContext;
CIMGUI_API bool ImGui_ImplDX11_Init(ID3D11Device* device,ID3D11DeviceContext* device_context);
CIMGUI_API void ImGui_ImplDX11_Shutdown();
CIMGUI_API void ImGui_ImplDX11_NewFrame();
CIMGUI_API void ImGui_ImplDX11_RenderDrawData(void* draw_data);
CIMGUI_API void ImGui_ImplDX11_InvalidateDeviceObjects();
CIMGUI_API bool ImGui_ImplDX11_CreateDeviceObjects();
CIMGUI_API bool ImGui_ImplWin32_Init(void* hwnd);
CIMGUI_API void ImGui_ImplWin32_Shutdown();
CIMGUI_API void ImGui_ImplWin32_NewFrame();
CIMGUI_API void ImGui_ImplWin32_EnableDpiAwareness();
CIMGUI_API float ImGui_ImplWin32_GetDpiScaleForHwnd(void* hwnd);
CIMGUI_API float ImGui_ImplWin32_GetDpiScaleForMonitor(void* monitor);
CIMGUI_API long long ImGui_ImplWin32_WndProcHandler(void* hWnd,unsigned int msg,unsigned int* wParam,long long lParam);

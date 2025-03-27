// uxtheme.dll HiJack Project
// Caution: 
//   This project code is for testing purposes only! Please do not use it in any other way.
// Code By : Baymax Patch toOls 
//

#include <windows.h>
#include <Shlwapi.h>
#include <sddl.h>
#pragma comment(lib, "shlwapi.lib")

HMODULE g_hCurrentModule = NULL;

#pragma comment(linker, "/EXPORT:BeginBufferedAnimation=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BeginBufferedAnimation,@5")
#pragma comment(linker, "/EXPORT:BeginBufferedPaint=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BeginBufferedPaint,@6")
#pragma comment(linker, "/EXPORT:BeginPanningFeedback=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BeginPanningFeedback,@12")
#pragma comment(linker, "/EXPORT:BufferedPaintClear=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BufferedPaintClear,@37")
#pragma comment(linker, "/EXPORT:BufferedPaintInit=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BufferedPaintInit,@38")
#pragma comment(linker, "/EXPORT:BufferedPaintRenderAnimation=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BufferedPaintRenderAnimation,@39")
#pragma comment(linker, "/EXPORT:BufferedPaintSetAlpha=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BufferedPaintSetAlpha,@40")
#pragma comment(linker, "/EXPORT:BufferedPaintStopAllAnimations=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BufferedPaintStopAllAnimations,@41")
#pragma comment(linker, "/EXPORT:BufferedPaintUnInit=C:\\WINDOWS\\SYSTEM32\\UXTHEME.BufferedPaintUnInit,@42")
#pragma comment(linker, "/EXPORT:CloseThemeData=C:\\WINDOWS\\SYSTEM32\\UXTHEME.CloseThemeData,@51")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DllCanUnloadNow,@52")
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DllGetActivationFactory,@53")
#pragma comment(linker, "/EXPORT:DllGetClassObject=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DllGetClassObject,@54")
#pragma comment(linker, "/EXPORT:DrawThemeBackground=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeBackground,@55")
#pragma comment(linker, "/EXPORT:DrawThemeBackgroundEx=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeBackgroundEx,@47")
#pragma comment(linker, "/EXPORT:DrawThemeEdge=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeEdge,@56")
#pragma comment(linker, "/EXPORT:DrawThemeIcon=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeIcon,@57")
#pragma comment(linker, "/EXPORT:DrawThemeParentBackground=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeParentBackground,@58")
#pragma comment(linker, "/EXPORT:DrawThemeParentBackgroundEx=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeParentBackgroundEx,@59")
#pragma comment(linker, "/EXPORT:DrawThemeText=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeText,@70")
#pragma comment(linker, "/EXPORT:DrawThemeTextEx=C:\\WINDOWS\\SYSTEM32\\UXTHEME.DrawThemeTextEx,@71")
#pragma comment(linker, "/EXPORT:EnableThemeDialogTexture=C:\\WINDOWS\\SYSTEM32\\UXTHEME.EnableThemeDialogTexture,@89")
#pragma comment(linker, "/EXPORT:EnableTheming=C:\\WINDOWS\\SYSTEM32\\UXTHEME.EnableTheming,@103")
#pragma comment(linker, "/EXPORT:EndBufferedAnimation=C:\\WINDOWS\\SYSTEM32\\UXTHEME.EndBufferedAnimation,@114")
#pragma comment(linker, "/EXPORT:EndBufferedPaint=C:\\WINDOWS\\SYSTEM32\\UXTHEME.EndBufferedPaint,@129")
#pragma comment(linker, "/EXPORT:EndPanningFeedback=C:\\WINDOWS\\SYSTEM32\\UXTHEME.EndPanningFeedback,@134")
#pragma comment(linker, "/EXPORT:GetBufferedPaintBits=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetBufferedPaintBits,@144")
#pragma comment(linker, "/EXPORT:GetBufferedPaintDC=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetBufferedPaintDC,@145")
#pragma comment(linker, "/EXPORT:GetBufferedPaintTargetDC=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetBufferedPaintTargetDC,@146")
#pragma comment(linker, "/EXPORT:GetBufferedPaintTargetRect=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetBufferedPaintTargetRect,@147")
#pragma comment(linker, "/EXPORT:GetColorFromPreference=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetColorFromPreference,@121")
#pragma comment(linker, "/EXPORT:GetCurrentThemeName=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetCurrentThemeName,@148")
#pragma comment(linker, "/EXPORT:GetImmersiveColorFromColorSetEx=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetImmersiveColorFromColorSetEx,@95")
#pragma comment(linker, "/EXPORT:GetImmersiveUserColorSetPreference=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetImmersiveUserColorSetPreference,@98")
#pragma comment(linker, "/EXPORT:GetThemeAnimationProperty=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeAnimationProperty,@149")
#pragma comment(linker, "/EXPORT:GetThemeAnimationTransform=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeAnimationTransform,@150")
#pragma comment(linker, "/EXPORT:GetThemeAppProperties=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeAppProperties,@151")
#pragma comment(linker, "/EXPORT:GetThemeBackgroundContentRect=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeBackgroundContentRect,@152")
#pragma comment(linker, "/EXPORT:GetThemeBackgroundExtent=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeBackgroundExtent,@153")
#pragma comment(linker, "/EXPORT:GetThemeBackgroundRegion=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeBackgroundRegion,@154")
#pragma comment(linker, "/EXPORT:GetThemeBitmap=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeBitmap,@155")
#pragma comment(linker, "/EXPORT:GetThemeBool=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeBool,@156")
#pragma comment(linker, "/EXPORT:GetThemeColor=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeColor,@157")
#pragma comment(linker, "/EXPORT:GetThemeDocumentationProperty=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeDocumentationProperty,@158")
#pragma comment(linker, "/EXPORT:GetThemeEnumValue=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeEnumValue,@159")
#pragma comment(linker, "/EXPORT:GetThemeFilename=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeFilename,@160")
#pragma comment(linker, "/EXPORT:GetThemeFont=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeFont,@161")
#pragma comment(linker, "/EXPORT:GetThemeInt=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeInt,@162")
#pragma comment(linker, "/EXPORT:GetThemeIntList=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeIntList,@163")
#pragma comment(linker, "/EXPORT:GetThemeMargins=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeMargins,@164")
#pragma comment(linker, "/EXPORT:GetThemeMetric=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeMetric,@165")
#pragma comment(linker, "/EXPORT:GetThemePartSize=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemePartSize,@166")
#pragma comment(linker, "/EXPORT:GetThemePosition=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemePosition,@167")
#pragma comment(linker, "/EXPORT:GetThemePropertyOrigin=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemePropertyOrigin,@168")
#pragma comment(linker, "/EXPORT:GetThemeRect=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeRect,@169")
#pragma comment(linker, "/EXPORT:GetThemeStream=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeStream,@170")
#pragma comment(linker, "/EXPORT:GetThemeString=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeString,@171")
#pragma comment(linker, "/EXPORT:GetThemeSysBool=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeSysBool,@172")
#pragma comment(linker, "/EXPORT:GetThemeSysColor=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeSysColor,@173")
#pragma comment(linker, "/EXPORT:GetThemeSysColorBrush=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeSysColorBrush,@174")
#pragma comment(linker, "/EXPORT:GetThemeSysFont=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeSysFont,@175")
#pragma comment(linker, "/EXPORT:GetThemeSysInt=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeSysInt,@176")
#pragma comment(linker, "/EXPORT:GetThemeSysSize=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeSysSize,@177")
#pragma comment(linker, "/EXPORT:GetThemeSysString=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeSysString,@178")
#pragma comment(linker, "/EXPORT:GetThemeTextExtent=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeTextExtent,@179")
#pragma comment(linker, "/EXPORT:GetThemeTextMetrics=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeTextMetrics,@180")
#pragma comment(linker, "/EXPORT:GetThemeTimingFunction=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeTimingFunction,@181")
#pragma comment(linker, "/EXPORT:GetThemeTransitionDuration=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetThemeTransitionDuration,@182")
#pragma comment(linker, "/EXPORT:GetUserColorPreference=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetUserColorPreference,@120")
#pragma comment(linker, "/EXPORT:GetWindowTheme=C:\\WINDOWS\\SYSTEM32\\UXTHEME.GetWindowTheme,@183")
#pragma comment(linker, "/EXPORT:HitTestThemeBackground=C:\\WINDOWS\\SYSTEM32\\UXTHEME.HitTestThemeBackground,@184")
#pragma comment(linker, "/EXPORT:IsAppThemed=C:\\WINDOWS\\SYSTEM32\\UXTHEME.IsAppThemed,@185")
#pragma comment(linker, "/EXPORT:IsCompositionActive=C:\\WINDOWS\\SYSTEM32\\UXTHEME.IsCompositionActive,@186")
#pragma comment(linker, "/EXPORT:IsThemeActive=C:\\WINDOWS\\SYSTEM32\\UXTHEME.IsThemeActive,@187")
#pragma comment(linker, "/EXPORT:IsThemeBackgroundPartiallyTransparent=C:\\WINDOWS\\SYSTEM32\\UXTHEME.IsThemeBackgroundPartiallyTransparent,@188")
#pragma comment(linker, "/EXPORT:IsThemeDialogTextureEnabled=C:\\WINDOWS\\SYSTEM32\\UXTHEME.IsThemeDialogTextureEnabled,@189")
#pragma comment(linker, "/EXPORT:IsThemePartDefined=C:\\WINDOWS\\SYSTEM32\\UXTHEME.IsThemePartDefined,@190")
#pragma comment(linker, "/EXPORT:OpenThemeData=C:\\WINDOWS\\SYSTEM32\\UXTHEME.OpenThemeData,@191")
#pragma comment(linker, "/EXPORT:OpenThemeDataEx=C:\\WINDOWS\\SYSTEM32\\UXTHEME.OpenThemeDataEx,@61")
#pragma comment(linker, "/EXPORT:OpenThemeDataForDpi=C:\\WINDOWS\\SYSTEM32\\UXTHEME.OpenThemeDataForDpi,@192")
#pragma comment(linker, "/EXPORT:SetThemeAppProperties=C:\\WINDOWS\\SYSTEM32\\UXTHEME.SetThemeAppProperties,@193")
#pragma comment(linker, "/EXPORT:SetWindowTheme=C:\\WINDOWS\\SYSTEM32\\UXTHEME.SetWindowTheme,@194")
#pragma comment(linker, "/EXPORT:SetWindowThemeAttribute=C:\\WINDOWS\\SYSTEM32\\UXTHEME.SetWindowThemeAttribute,@195")
#pragma comment(linker, "/EXPORT:ThemeInitApiHook=C:\\WINDOWS\\SYSTEM32\\UXTHEME.ThemeInitApiHook,@196")
#pragma comment(linker, "/EXPORT:UpdatePanningFeedback=C:\\WINDOWS\\SYSTEM32\\UXTHEME.UpdatePanningFeedback,@197")
#pragma comment(linker, "/EXPORT:#.1=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.1,@1,NONAME")
#pragma comment(linker, "/EXPORT:#.2=SHUNIMPL.#440,@2,NONAME")
#pragma comment(linker, "/EXPORT:#.3=SHUNIMPL.#441,@3,NONAME")
#pragma comment(linker, "/EXPORT:#.4=SHUNIMPL.#445,@4,NONAME")
#pragma comment(linker, "/EXPORT:#.7=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.7,@7,NONAME")
#pragma comment(linker, "/EXPORT:#.8=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.8,@8,NONAME")
#pragma comment(linker, "/EXPORT:#.9=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.9,@9,NONAME")
#pragma comment(linker, "/EXPORT:#.10=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.10,@10,NONAME")
#pragma comment(linker, "/EXPORT:#.11=SHUNIMPL.#190,@11,NONAME")
#pragma comment(linker, "/EXPORT:#.13=SHUNIMPL.#444,@13,NONAME")
#pragma comment(linker, "/EXPORT:#.14=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.14,@14,NONAME")
#pragma comment(linker, "/EXPORT:#.15=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.15,@15,NONAME")
#pragma comment(linker, "/EXPORT:#.16=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.16,@16,NONAME")
#pragma comment(linker, "/EXPORT:#.17=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.17,@17,NONAME")
#pragma comment(linker, "/EXPORT:#.18=SHUNIMPL.#189,@18,NONAME")
#pragma comment(linker, "/EXPORT:#.19=SHUNIMPL.#188,@19,NONAME")
#pragma comment(linker, "/EXPORT:#.20=SHUNIMPL.#395,@20,NONAME")
#pragma comment(linker, "/EXPORT:#.21=SHUNIMPL.#396,@21,NONAME")
#pragma comment(linker, "/EXPORT:#.22=SHUNIMPL.#397,@22,NONAME")
#pragma comment(linker, "/EXPORT:#.23=SHUNIMPL.#398,@23,NONAME")
#pragma comment(linker, "/EXPORT:#.24=SHUNIMPL.#399,@24,NONAME")
#pragma comment(linker, "/EXPORT:#.25=SHUNIMPL.#400,@25,NONAME")
#pragma comment(linker, "/EXPORT:#.26=SHUNIMPL.#215,@26,NONAME")
#pragma comment(linker, "/EXPORT:#.27=SHUNIMPL.#401,@27,NONAME")
#pragma comment(linker, "/EXPORT:#.28=SHUNIMPL.#402,@28,NONAME")
#pragma comment(linker, "/EXPORT:#.29=SHUNIMPL.#213,@29,NONAME")
#pragma comment(linker, "/EXPORT:#.30=SHUNIMPL.#403,@30,NONAME")
#pragma comment(linker, "/EXPORT:#.31=SHUNIMPL.#431,@31,NONAME")
#pragma comment(linker, "/EXPORT:#.32=SHUNIMPL.#406,@32,NONAME")
#pragma comment(linker, "/EXPORT:#.33=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.33,@33,NONAME")
#pragma comment(linker, "/EXPORT:#.34=SHUNIMPL.#407,@34,NONAME")
#pragma comment(linker, "/EXPORT:#.35=SHUNIMPL.#408,@35,NONAME")
#pragma comment(linker, "/EXPORT:#.36=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.36,@36,NONAME")
#pragma comment(linker, "/EXPORT:#.43=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.43,@43,NONAME")
#pragma comment(linker, "/EXPORT:#.44=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.44,@44,NONAME")
#pragma comment(linker, "/EXPORT:#.45=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.45,@45,NONAME")
#pragma comment(linker, "/EXPORT:#.46=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.46,@46,NONAME")
#pragma comment(linker, "/EXPORT:#.48=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.48,@48,NONAME")
#pragma comment(linker, "/EXPORT:#.49=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.49,@49,NONAME")
#pragma comment(linker, "/EXPORT:#.50=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.50,@50,NONAME")
#pragma comment(linker, "/EXPORT:#.60=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.60,@60,NONAME")
#pragma comment(linker, "/EXPORT:#.62=SHUNIMPL.#409,@62,NONAME")
#pragma comment(linker, "/EXPORT:#.63=SHUNIMPL.#404,@63,NONAME")
#pragma comment(linker, "/EXPORT:#.64=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.64,@64,NONAME")
#pragma comment(linker, "/EXPORT:#.65=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.65,@65,NONAME")
#pragma comment(linker, "/EXPORT:#.66=SHUNIMPL.#405,@66,NONAME")
#pragma comment(linker, "/EXPORT:#.67=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.67,@67,NONAME")
#pragma comment(linker, "/EXPORT:#.68=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.68,@68,NONAME")
#pragma comment(linker, "/EXPORT:#.69=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.69,@69,NONAME")
#pragma comment(linker, "/EXPORT:#.72=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.72,@72,NONAME")
#pragma comment(linker, "/EXPORT:#.73=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.73,@73,NONAME")
#pragma comment(linker, "/EXPORT:#.74=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.74,@74,NONAME")
#pragma comment(linker, "/EXPORT:#.75=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.75,@75,NONAME")
#pragma comment(linker, "/EXPORT:#.76=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.76,@76,NONAME")
#pragma comment(linker, "/EXPORT:#.77=SHUNIMPL.#432,@77,NONAME")
#pragma comment(linker, "/EXPORT:#.78=SHUNIMPL.#433,@78,NONAME")
#pragma comment(linker, "/EXPORT:#.79=SHUNIMPL.#434,@79,NONAME")
#pragma comment(linker, "/EXPORT:#.80=SHUNIMPL.#435,@80,NONAME")
#pragma comment(linker, "/EXPORT:#.81=SHUNIMPL.#430,@81,NONAME")
#pragma comment(linker, "/EXPORT:#.82=SHUNIMPL.#436,@82,NONAME")
#pragma comment(linker, "/EXPORT:#.83=SHUNIMPL.#437,@83,NONAME")
#pragma comment(linker, "/EXPORT:#.84=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.84,@84,NONAME")
#pragma comment(linker, "/EXPORT:#.85=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.85,@85,NONAME")
#pragma comment(linker, "/EXPORT:#.86=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.86,@86,NONAME")
#pragma comment(linker, "/EXPORT:#.87=SHUNIMPL.#438,@87,NONAME")
#pragma comment(linker, "/EXPORT:#.88=SHUNIMPL.#439,@88,NONAME")
#pragma comment(linker, "/EXPORT:#.90=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.90,@90,NONAME")
#pragma comment(linker, "/EXPORT:#.91=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.91,@91,NONAME")
#pragma comment(linker, "/EXPORT:#.92=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.92,@92,NONAME")
#pragma comment(linker, "/EXPORT:#.93=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.93,@93,NONAME")
#pragma comment(linker, "/EXPORT:#.94=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.94,@94,NONAME")
#pragma comment(linker, "/EXPORT:#.96=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.96,@96,NONAME")
#pragma comment(linker, "/EXPORT:#.97=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.97,@97,NONAME")
#pragma comment(linker, "/EXPORT:#.99=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.99,@99,NONAME")
#pragma comment(linker, "/EXPORT:#.100=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.100,@100,NONAME")
#pragma comment(linker, "/EXPORT:#.101=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.101,@101,NONAME")
#pragma comment(linker, "/EXPORT:#.102=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.102,@102,NONAME")
#pragma comment(linker, "/EXPORT:#.104=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.104,@104,NONAME")
#pragma comment(linker, "/EXPORT:#.105=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.105,@105,NONAME")
#pragma comment(linker, "/EXPORT:#.106=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.106,@106,NONAME")
#pragma comment(linker, "/EXPORT:#.107=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.107,@107,NONAME")
#pragma comment(linker, "/EXPORT:#.108=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.108,@108,NONAME")
#pragma comment(linker, "/EXPORT:#.109=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.109,@109,NONAME")
#pragma comment(linker, "/EXPORT:#.110=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.110,@110,NONAME")
#pragma comment(linker, "/EXPORT:#.111=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.111,@111,NONAME")
#pragma comment(linker, "/EXPORT:#.112=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.112,@112,NONAME")
#pragma comment(linker, "/EXPORT:#.113=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.113,@113,NONAME")
#pragma comment(linker, "/EXPORT:#.115=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.115,@115,NONAME")
#pragma comment(linker, "/EXPORT:#.116=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.116,@116,NONAME")
#pragma comment(linker, "/EXPORT:#.117=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.117,@117,NONAME")
#pragma comment(linker, "/EXPORT:#.118=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.118,@118,NONAME")
#pragma comment(linker, "/EXPORT:#.119=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.119,@119,NONAME")
#pragma comment(linker, "/EXPORT:#.122=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.122,@122,NONAME")
#pragma comment(linker, "/EXPORT:#.123=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.123,@123,NONAME")
#pragma comment(linker, "/EXPORT:#.124=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.124,@124,NONAME")
#pragma comment(linker, "/EXPORT:#.125=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.125,@125,NONAME")
#pragma comment(linker, "/EXPORT:#.126=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.126,@126,NONAME")
#pragma comment(linker, "/EXPORT:#.127=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.127,@127,NONAME")
#pragma comment(linker, "/EXPORT:#.128=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.128,@128,NONAME")
#pragma comment(linker, "/EXPORT:#.130=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.130,@130,NONAME")
#pragma comment(linker, "/EXPORT:#.131=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.131,@131,NONAME")
#pragma comment(linker, "/EXPORT:#.132=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.132,@132,NONAME")
#pragma comment(linker, "/EXPORT:#.133=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.133,@133,NONAME")
#pragma comment(linker, "/EXPORT:#.135=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.135,@135,NONAME")
#pragma comment(linker, "/EXPORT:#.136=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.136,@136,NONAME")
#pragma comment(linker, "/EXPORT:#.137=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.137,@137,NONAME")
#pragma comment(linker, "/EXPORT:#.138=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.138,@138,NONAME")
#pragma comment(linker, "/EXPORT:#.139=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.139,@139,NONAME")
#pragma comment(linker, "/EXPORT:#.140=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.140,@140,NONAME")
#pragma comment(linker, "/EXPORT:#.141=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.141,@141,NONAME")
#pragma comment(linker, "/EXPORT:#.142=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.142,@142,NONAME")
#pragma comment(linker, "/EXPORT:#.143=C:\\WINDOWS\\SYSTEM32\\UXTHEME.#.143,@143,NONAME")


#ifndef NDEBUG
#define DEBUGLOG(x) OutputDebugString(TEXT("[wezterm-gui MessageBeep hook] ") x TEXT("\n"))
#else 
#define DEBUGLOG(x)
#endif

// 原始函数指针类型声明
typedef BOOL(WINAPI* MessageBeepType)(UINT);
static MessageBeepType OriginalMessageBeep = nullptr;

typedef struct _GET_PROCESS_MAIN_WINDOW_CONTEXT {
	DWORD ProcessId;          // 目标进程 ID
	HWND Window;              // 找到的主窗口句柄
	BOOL SkipInvisible;       // 是否跳过不可见窗口
	BOOL IsImmersive;         // 是否为沉浸式窗口
	HWND ImmersiveWindow;     // 沉浸式窗口句柄
} GET_PROCESS_MAIN_WINDOW_CONTEXT, * PGET_PROCESS_MAIN_WINDOW_CONTEXT;


// 回调函数，用于枚举窗口
BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam) {
	PGET_PROCESS_MAIN_WINDOW_CONTEXT context = (PGET_PROCESS_MAIN_WINDOW_CONTEXT)lParam;
	DWORD processId;
	WINDOWINFO windowInfo;

	// 跳过不可见窗口
	if (context->SkipInvisible && !IsWindowVisible(hWnd)) {
		return TRUE;
	}

	// 获取窗口所属进程 ID
	GetWindowThreadProcessId(hWnd, &processId);

	// 检查窗口是否属于目标进程
	if (processId == context->ProcessId) {
		// 检查是否为沉浸式窗口
		if (!context->ImmersiveWindow && context->IsImmersive &&
			GetPropA(hWnd, "Windows.ImmersiveShell.IdentifyAsMainCoreWindow")) {
			context->ImmersiveWindow = hWnd;
		}

		// 获取窗口信息
		windowInfo.cbSize = sizeof(WINDOWINFO);
		if (!context->Window && GetWindowInfo(hWnd, &windowInfo) && (windowInfo.dwStyle & WS_DLGFRAME)) {
			context->Window = hWnd;

			// 如果不是沉浸式窗口，直接返回
			if (!context->IsImmersive) {
				return FALSE;
			}
		}
	}

	return TRUE;
}

HWND GetProcessMainWindow(DWORD dwProcessId, BOOL bSkipInvisible, BOOL bIsImmersive) {
	GET_PROCESS_MAIN_WINDOW_CONTEXT context = { 0 };
	context.ProcessId = dwProcessId;
	context.SkipInvisible = bSkipInvisible;
	context.IsImmersive = bIsImmersive;

	// 枚举所有顶层窗口
	EnumWindows(EnumWindowsProc, (LPARAM)&context);

	// 返回找到的主窗口
	return context.Window ? context.Window : context.ImmersiveWindow;
}


// 自定义的MessageBeep函数
BOOL WINAPI MyMessageBeep(UINT uType) {
	DEBUGLOG(TEXT("hooked!"));

	FLASHWINFO fwi = { sizeof(fwi) };
	fwi.hwnd = GetProcessMainWindow(GetCurrentProcessId(), TRUE, FALSE);
	fwi.dwFlags = FLASHW_ALL | FLASHW_TIMERNOFG;
	fwi.uCount = 0;         // 无限次闪烁
	fwi.dwTimeout = 0;       // 使用系统默认闪烁间隔

	FlashWindowEx(&fwi);

	return OriginalMessageBeep(uType);
}

BOOL HookMessageBeepInIAT() {
	// 获取当前模块基址（假设DLL注入到目标进程）
	HMODULE hModule = GetModuleHandleA(nullptr);
	if (!hModule) {
		DEBUGLOG(TEXT("Failed to get module handle"));
		return FALSE;
	}

	// 解析PE头
	PIMAGE_DOS_HEADER pDosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(hModule);
	if (pDosHeader->e_magic != IMAGE_DOS_SIGNATURE) {
		DEBUGLOG(TEXT("Invalid DOS header"));
		return FALSE;
	}

	PIMAGE_NT_HEADERS pNtHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(
		reinterpret_cast<BYTE*>(hModule) + pDosHeader->e_lfanew);
	if (pNtHeaders->Signature != IMAGE_NT_SIGNATURE) {
		DEBUGLOG(TEXT("Invalid NT header"));
		return FALSE;
	}

	// 获取导入表目录
	IMAGE_DATA_DIRECTORY importDir = pNtHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
	if (importDir.VirtualAddress == 0 || importDir.Size == 0) {
		DEBUGLOG(TEXT("No import table found"));
		return FALSE;
	}

	// 遍历导入描述符
	PIMAGE_IMPORT_DESCRIPTOR pImportDesc = reinterpret_cast<PIMAGE_IMPORT_DESCRIPTOR>(
		reinterpret_cast<BYTE*>(hModule) + importDir.VirtualAddress);

	while (pImportDesc->Name != 0) {
		LPCSTR moduleName = reinterpret_cast<LPCSTR>(reinterpret_cast<BYTE*>(hModule) + pImportDesc->Name);
		if (_stricmp(moduleName, "user32.dll") == 0) {
			break;
		}
		pImportDesc++;
	}

	if (pImportDesc->Name == 0) {
		DEBUGLOG(TEXT("user32.dll not found in import table"));
		return FALSE;
	}

	// 准备获取原始函数地址
	HMODULE hUser32 = GetModuleHandle(TEXT("user32.dll"));
	if (!hUser32) {
		DEBUGLOG(TEXT("Failed to get user32 module"));
		return FALSE;
	}

	OriginalMessageBeep = reinterpret_cast<MessageBeepType>(
		GetProcAddress(hUser32, "MessageBeep"));
	if (!OriginalMessageBeep) {
		DEBUGLOG(TEXT("Failed to find original MessageBeep"));
		return FALSE;
	}

	// 遍历导入函数
	IMAGE_THUNK_DATA* pThunk = reinterpret_cast<IMAGE_THUNK_DATA*>(
		reinterpret_cast<BYTE*>(hModule) + pImportDesc->OriginalFirstThunk);
	IMAGE_THUNK_DATA* pIAT = reinterpret_cast<IMAGE_THUNK_DATA*>(
		reinterpret_cast<BYTE*>(hModule) + pImportDesc->FirstThunk);

	for (; pThunk->u1.AddressOfData != 0; pThunk++, pIAT++) {
		// 跳过序号导入
		if (pThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG) continue;

		// 获取导入函数名称
		PIMAGE_IMPORT_BY_NAME pImport = reinterpret_cast<PIMAGE_IMPORT_BY_NAME>(
			reinterpret_cast<BYTE*>(hModule) + pThunk->u1.AddressOfData);

		if (strcmp(pImport->Name, "MessageBeep") == 0) {
			// 修改内存保护
			DWORD oldProtect;
			if (!VirtualProtect(&pIAT->u1.Function, sizeof(ULONG_PTR), PAGE_READWRITE, &oldProtect)) {
				DEBUGLOG(TEXT("Failed to change memory protection"));
				return FALSE;
			}

			// 替换IAT地址
			pIAT->u1.Function = reinterpret_cast<ULONG_PTR>(MyMessageBeep);

			// 恢复内存保护
			DWORD temp;
			VirtualProtect(&pIAT->u1.Function, sizeof(ULONG_PTR), oldProtect, &temp);

			DEBUGLOG(TEXT("Successfully hooked MessageBeep!"));
			return TRUE;
		}
	}

	DEBUGLOG(TEXT("Failed to find MessageBeep in IAT"));
	return FALSE;
}

// 创建一个安全描述符，仅允许当前进程可写，其他进程只读
SECURITY_ATTRIBUTES* CreateSecureAttributes() {
	// 安全描述符字符串（SDDL）：
	// - "D:"：DACL（自主访问控制列表）
	// - "(A;OICI;GA;;;SY)"：SYSTEM 完全控制
	// - "(A;OICI;GR;;;WD)"：Everyone 只读
	// - "(A;OICI;GWGR;;;OW)"：Owner（当前进程）可读可写
	//const TCHAR SDDL[] = TEXT("D:(A;OICI;GA;;;SY)(A;OICI;GR;;;WD)(A;OICI;GWGR;;;OW)");
	const TCHAR SDDL[] = TEXT("D:(A;OICI;GA;;;SY)(A;OICI;GR;;;WD)(A;OICI;GR;;;OW)");;
	SECURITY_ATTRIBUTES* sa = (SECURITY_ATTRIBUTES*)LocalAlloc(LPTR, sizeof(SECURITY_ATTRIBUTES));
	if (!sa) return NULL;

	if (!ConvertStringSecurityDescriptorToSecurityDescriptor(
		SDDL,
		SDDL_REVISION_1,
		&(sa->lpSecurityDescriptor),
		NULL)) {
		LocalFree(sa);
		return NULL;
	}

	sa->nLength = sizeof(SECURITY_ATTRIBUTES);
	sa->bInheritHandle = FALSE;
	return sa;
}

// 创建受保护的共享内存
HANDLE CreateProtectedSharedMemory(const TCHAR* name, size_t size) {
	//DebugBreak();
	SECURITY_ATTRIBUTES* sa = CreateSecureAttributes();
	if (!sa) return NULL;

	HANDLE hMap = CreateFileMapping(
		INVALID_HANDLE_VALUE,   // 使用物理内存（不落盘）
		sa,                     // 安全属性
		PAGE_READWRITE,         // 可读可写
		0,                      // 高32位大小
		size,                   // 低32位大小
		name                    // 共享内存名称
	);

	LocalFree(sa->lpSecurityDescriptor);
	LocalFree(sa);
	return hMap;
}


BOOL NsLoad()
{

	TCHAR szAppName[] = TEXT("wezterm-gui.exe");//请修改宿主进程名
	TCHAR szCurName[MAX_PATH];

	GetModuleFileName(NULL, szCurName, MAX_PATH);
	PathStripPath(szCurName);

	//是否判断宿主进程名
	if (StrCmpI(szCurName, szAppName) == 0)
	{
		DEBUGLOG("we are in wezterm....");
		if (!HookMessageBeepInIAT()) {
			DebugBreak();
		}

		HANDLE hMap = CreateProtectedSharedMemory(TEXT("__wezterm_gui_pid__"), sizeof(DWORD));
		if (hMap) {
			// 当前进程可写
			DWORD* pBuf = (DWORD*)MapViewOfFile(hMap, FILE_MAP_WRITE, 0, 0, sizeof(DWORD));
			if (pBuf) {
				*pBuf = GetCurrentProcessId();
				UnmapViewOfFile(pBuf);
			}
			DEBUGLOG("shm ok");
		}
		else {
			DEBUGLOG("create shm failed");
		}
	}
	return TRUE;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                      DWORD  ul_reason_for_call,
                      LPVOID lpReserved
                      )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        {
            g_hCurrentModule = hModule;
            DisableThreadLibraryCalls(hModule);
            if ( !NsLoad() )
                return FALSE;
            break;
        }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


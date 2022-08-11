#pragma once


#ifdef WE_PLATFORM_WINDOWS
	#ifdef WE_BUILD_DLL
		#define WE_API __declspec(dllexport)
	#else
		#define WE_API __declspec(dllimport)
	#endif // WE_BUILD_DLL
#else
	#error WRealEngine only support Windows
#endif
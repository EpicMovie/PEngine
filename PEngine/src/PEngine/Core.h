#pragma once

#ifdef PENGINE_PLATFORM_WINDOWS
	#ifdef PENGINE_BUILD_DLL
		#define PENGINE_API __declspec(dllexport)
	#else
		#define PENGINE_API __declspec(dllimport)
	#endif
#else
	#error Only Windows Supported!
#endif 
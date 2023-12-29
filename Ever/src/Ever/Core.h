#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define EVER_API __declspec(dllexport)
	#else 
		#define EVER_API __declspec(dllimport)
	#endif
#else
	#error Ever only supports Windows! 
#endif
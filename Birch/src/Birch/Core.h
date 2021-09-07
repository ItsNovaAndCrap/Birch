#pragma once

#ifdef BR_PLATFORM_WINDOWS
	#ifdef BR_BUILD_DLL
		#define BIRCH_API __declspec(dllexport)
	#else
		#define BIRCH_API __declspec(dllimport)
	#endif
#else
	#error Birch only supports Windows!
#endif

#define BIT(x) (1 << x)
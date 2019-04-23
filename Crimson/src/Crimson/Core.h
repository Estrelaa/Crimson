#pragma once

#ifdef CM_PLATFORM_WINDOWS
	#ifdef CM_BUILD_DLL
		#define CRIMSON_API __declspec(dllexport)
	#else
		#define CRIMSON_API __declspec(dllimport)
	#endif
#else
	#error Crimson only supports Windows!
#endif

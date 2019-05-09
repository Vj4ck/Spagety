#pragma once

#ifdef SETY_PLATFORM_WIN
	#ifdef SETY_BUILD_DLL
		#define SETY_API __declspec(dllexport)
	#else 
		#define SETY_API __declspec(dllimport)
	#endif
#else
	#error SpagEty only supports windows for now
#endif 

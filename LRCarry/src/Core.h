#pragma once

#define DEBUG_LOG

#ifdef LRC_PLATFORM_WINDOWS
    #ifdef LRC_BUILD_DLL
        #define DEBUG_LOG "windows debug logging"
    #else
        #define DEBUG_LOG "windows anything logging"
    #endif
#elif defined(LRC_PLATFORM_MACOS)
    #ifdef LRC_BUILD_DLL
        #define DEBUG_LOG "mac debug logging"
    #else
        #define DEBUG_LOG "mac anything logging"
    #endif
#else
    #warning LRCarry currently don't surpport this platform!
#endif

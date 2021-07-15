#ifndef LOG_H
#define LOG_H



#define ENABLE_LOG 1

#if ENABLE_LOG == 1
	#include <stdlib.h> 
    #define LOG(x) std::cout << (x)
    #define LOGLN(x) LOG(x) << "\n"
#elif ENABLE_LOG == 0
    #define LOG(x)
    #define LOGLN(x)
#else 
    #error ENABLE_LOG value not defined
#endif

#endif
#ifndef _SYS_LOG_DEFINE_
#define _SYS_LOG_DEFINE_

#include <stdio.h>

#define LOG_LEVEL_CLOSE 0
#define LOG_LEVEL_ERROR 1
#define LOG_LEVEL_INFO  2
#define LOG_LEVEL_DEBUG 3

#ifndef SYS_LOG_TAG
#define SYS_LOG_TAG  "SYS_LOG"
#endif 

#ifndef LOG_LEVEL
#define LOG_LEVEL	LOG_LEVEL_DEBUG
#endif

#ifndef SYS_LOG_DETAIL
#define PRINT(format,...)   printf("%s:"format,SYS_LOG_TAG,##__VA_ARGS__);
#else
#define PRINT(format,...)   printf("%s %s: [%s,%s,%d]: %s: " format,__DATE__,__TIME__,__FILE__,__FUNCTION__,__LINE__,SYS_LOG_TAG,##__VA_ARGS__);
#endif // !SYS_LOG_DETAIL

#if LOG_LEVEL >= LOG_LEVEL_ERROR
#define LOGE(format,...)   PRINT(format,__VA_ARGS__)
#else
#define LOGE(format,...)
#endif

#if LOG_LEVEL >= LOG_LEVEL_INFO
#define LOGI(format,...)   PRINT(format,__VA_ARGS__)
#else
#define LOGI(format,...)
#endif

#if LOG_LEVEL >= LOG_LEVEL_DEBUG
#define LOGD(format,...)   PRINT(format,__VA_ARGS__)
#else
#define LOGD(format,...)
#endif

#endif //_SYS_LOG_DEFINE_
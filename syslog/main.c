#include <stdio.h>

//#define SYS_LOG_DETAIL  //打印时间，函数名等详细信息
#include "syslog.h"

#define SYS_LOG_TAG  "MAIN.C"


int main()
{
	//不带可变参数
	LOGE("错误输出日志\n");
	LOGI("普通信息输出日志\n");
	LOGD("调试信息输出日志\n");

	//带可变参数
	LOGE("错误输出日志:%d\n",100);
	LOGI("普通信息输出日志:%d\n",200);
	LOGD("调试信息输出日志:%d\n",300);

	system("pause");
	return 0;
}
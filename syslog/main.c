#include <stdio.h>

//#define SYS_LOG_DETAIL  //��ӡʱ�䣬����������ϸ��Ϣ
#include "syslog.h"

#define SYS_LOG_TAG  "MAIN.C"


int main()
{
	//�����ɱ����
	LOGE("���������־\n");
	LOGI("��ͨ��Ϣ�����־\n");
	LOGD("������Ϣ�����־\n");

	//���ɱ����
	LOGE("���������־:%d\n",100);
	LOGI("��ͨ��Ϣ�����־:%d\n",200);
	LOGD("������Ϣ�����־:%d\n",300);

	system("pause");
	return 0;
}
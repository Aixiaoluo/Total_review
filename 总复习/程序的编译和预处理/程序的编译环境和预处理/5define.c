#include <stdio.h>
#include <stdlib.h>

#define MAX 1000//���ֵMAX=1000
#define reg register//Ϊregister����һ���̵Ĺؼ���
#define do_forever for(;;)
#define CASE break;case//дcase��ʱ���Զ���ȫbreak

//����stuff������ʱ����Ի���д����ÿһ�еĺ���Ҫ���Ϸ�б�ܣ���������
#define DEBUG_PRINT printf("file:%s line:%d date:%d time:%d\n",\
					__FILE__,\
					__LINE__,\
					__DATE__,\
					__TIME__)

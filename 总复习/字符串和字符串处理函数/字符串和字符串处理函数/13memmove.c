#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��sourceλ�ÿ�ʼ�����num���ֽڵõ����ݵ�destination�С�
//memmove��memcpy��������memmove����Դ�ڴ���Ŀ���ڴ���ʱ������ص�
int main13()
{
	char str[] = "memmove can be very useful����";
	memmove(str + 20, str + 15, 11);
	puts(str);
	system("pause");
	return 0;
}
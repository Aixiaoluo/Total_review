#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//strncmp  �Ƚ������ַ�ǰnum���ַ��Ƿ�һ��   һ�·���0��ǰ�ߴ󷵻����������ߴ󷵻ظ���
/*
���������ʼ�Ƚ�ÿ���ַ����ĵ�һ���ַ���
������Ǳ˴���ȣ������ִ�����²�����
ֱ���ַ���ͬΪֹ��ֱ������һ����ֹ�Ŀ��ַ���
����ֱ�������ַ����е�num�ַ�ƥ��Ϊֹ
(���ȷ��������Ϊ׼)*/
int main7()
{
	char str[][5] = { "R2D2", "C3PO", "R2A6" };
	int n;
	puts("Looking for R2 astromech droids...");
	for (n = 0; n < 3; n++)
	if (strncmp(str[n], "R2xx", 2) == 0)
	{
		printf("found %s\n", str[n]);
	}
	system("pause");
	return 0;
}
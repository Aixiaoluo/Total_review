#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�������ַ��� 
//����һ��ָ��str1�е�һ�γ��ֵ�str2��ָ�룬���str2����str1��һ���֣��򷵻�һ����ָ�롣
//ƥ����̲�������ֹ�Ŀ��ַ��������͵���Ϊֹ��
int main8()
{
	char str1[] = "This is a simple string";
	char *pstr;
	pstr = strstr(str1, "simple");
	strncpy(pstr, "simple", 6);
	puts(str1);
	system("pause");
	return 0;
}
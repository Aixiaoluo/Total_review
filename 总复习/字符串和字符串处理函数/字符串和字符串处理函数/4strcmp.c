#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcmp  �Ƚ������ַ����Ƿ���ȣ���ȷ���0  ǰ�ߴ󷵻����������ߴ󷵻ظ���
int main4()
{
	const char *str1 = "abcde";
	const char *str2 = "abcd";
	if (strcmp(str1, str2) == 0)
	{
		printf("str1 == str2\n");
	}
	else if (strcmp(str1, str2) >=0)
	{
		printf("str1 >= str2\n");
	}
	else
	{
		printf("str1 <= str2\n");
	}

	system("pause");
	return 0;
}
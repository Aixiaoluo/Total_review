#include <stdio.h>
#include <stdlib.h>

int main1()
{
	//str3��str4��ͬһ���������ַ�����C/C++��ѳ����ַ����洢��������һ���ڴ����򣬵�����ָ��ָ��ͬһ���ַ�����ʱ������ָ��ͬһ���ڴ棻��str3 == str4
	//str1��str2�ǳ�ʼ����ͬ������ʱ��ͻῪ�ٲ�ͬ���ڴ档��str1 ��= str2
	char str1[] = "Hello,World!";
	char str2[] = "Hello,World!";
	char *str3 = "Hello,World!";
	char *str4 = "Hello,World!";

	if (str1 == str2)
	{
		printf("str1 == str2\n");
	}
	else
	{
		printf("str1 != str2\n");
	}

	if (str3 == str4)
	{
		printf("str3 == str4\n");
	}
	else
	{
		printf("str3 != str4\n");
	}


	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main1()
{
	int a;
	printf("������һ�����֣�\n");
	scanf("%d", &a);
	int flag = a % 2;
	if (flag)
	{
		printf("������\n");
	}
	else
	{
		printf("��ż��\n");
	}
	system("pause");
	return 0;
}
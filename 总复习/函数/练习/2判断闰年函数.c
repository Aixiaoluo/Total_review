#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isLeap(int* n)
{
	if ((*n % 100 != 0 && *n % 4 == 0) || *n % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int main2() {
	int n;
	printf("������һ����ݣ�\n");
	scanf("%d", &n);
	if (isLeap(&n))
	{
		printf("%d�����꣡\n", n);
	}
	else
	{
		printf("%d��ƽ�꣡\n", n);
	}
	system("pause");
	return 0;
}
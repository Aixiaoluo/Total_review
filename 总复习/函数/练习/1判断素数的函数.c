#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
	int res = 0;
	int tmp = sqrt(n);
	for (int i = 2; i < tmp; i++)
	{
		if (n % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main1() {
	int n;
	printf("������һ��������\n");
	scanf("%d", &n);
	if (!isPrime(n)) {
		printf("%d��������\n", n);
	}
	else {
		printf("%d����������\n", n);
	}
	system("pause");
	return 0;
}
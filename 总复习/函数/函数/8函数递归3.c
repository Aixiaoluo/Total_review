#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ݹ���n�Ľ׳�
int factorial1(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial1(n - 1);
	}
}

//�ǵݹ���n�Ľ׳�
int factorial2(int n)
{
	int res = 1;
	while (n > 1)
	{
		res *= n;
		n--;
	}
	return res;
}

int main8()
{
	printf("%d\n", factorial1(5));
	printf("%d\n", factorial2(5));
	system("pause");
	return 0;
}
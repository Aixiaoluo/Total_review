#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//������̨������
int jumpFloor1(int n)
{
	if ((n == 1) || (n == 2))
	{
		return n;
	}
	else
	{
		return jumpFloor1(n - 1) + jumpFloor1(n - 2);
	}
}

int jumpFloor2(int n)
{
	int l1 = 1;
	int l2 = 2;
	int res = 0;
	if ((n == 1) || (n == 2))
	{
		return n;
	}
	while (n > 2)
	{
		res = l1 + l2;
		l1 = l2;
		l2 = res;
		n--;
	}
	return res;
}

int main6()
{
	int n;
	printf("������̨�׸�����");
	scanf("%d", &n);
	printf("���ķ�����%d��\n", jumpFloor1(n));
	printf("���ķ�����%d��\n", jumpFloor2(n));
	system("pause");
	return 0;
}
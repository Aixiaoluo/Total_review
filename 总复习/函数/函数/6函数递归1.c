#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺12345678����� 1 2 3 4 5 6 7 8.
void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num%10);
}

int main6()
{
	int num = 12345678;
	print(num);
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main10()
{
	//a��b��Ҫ��������������c����Ҫ�������������ʽa == 0xb6��a == 0xb600ֵΪ�٣��������c
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
	{
		printf("a");
	}
	if (b == 0xb600)
	{
		printf("b");
	}
	if (c == 0xb6000000)
	{
		printf("c");
	}

	system("pause");
	return 0;
}

int main10()
{
	char c = 1;
	//cֻҪ��������ͻᷢ���������������ʽ+c�ͻᷢ������������
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main2()
{
	int n = 10;
	char *pch = (char*)&n;
	int *pin = &n;
	//˵��ָ������;�����ָ����+��-��ʱ���ƫ�����Ƕ���
	printf("%p\n", &n);
	printf("%p\n", pch);
	printf("%p\n", pch + 1);
	printf("%p\n", pin);
	printf("%p\n", pin + 1);
	system("pause");
	return 0;
}
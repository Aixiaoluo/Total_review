#include <stdio.h>
#include <stdlib.h>

//��NULLָ��Ľ����ò���
void test1()
{
	int *p = (int *)malloc(INT_MAX / 4);
	*p = 20;
	free(p);
	p = NULL;
}

int main1()
{
	test1();
	system("pause");
	return 0;
}
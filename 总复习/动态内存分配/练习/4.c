#include <stdio.h>
#include <stdlib.h>

//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
void test4()
{
	int *p = (int *)malloc(100);
	p++;
	free(p);
}

int main4()
{
	test4();
	system("pause");
	return 0;
}
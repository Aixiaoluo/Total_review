#include <stdio.h>
#include <stdlib.h>

//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
void test3()
{
	int a = 10;
	int *p = &a;
	free(p);
}

int main3()
{
	test3();
	system("pause");
	return 0;
}
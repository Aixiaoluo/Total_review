#include <stdio.h>
#include <stdlib.h>

//��ͬһ���ڴ����ͷ�
void test5()
{
	int *p = (int *)malloc(100);
	free(p);
	free(p);
}

int main5()
{
	test5();
	system("pause");
	return 0;
}
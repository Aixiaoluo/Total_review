#include <stdio.h>
#include <stdlib.h>

int main6()
{
	int a = 20;
	int *pa = &a;
	int **ppa = &pa;
	*ppa = &a;//�ȼ���	pa = &b;
	*ppa = 30;
	//�ȼ��� *pa = 30��
	//�ȼ��� a = 30��
	system("pause");
	return 0;
}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//ת���Ŀ����Բ����׷�ٴ���

int main()
{
	int i = 1;
	double d = 1;//��ʽ����ת��
	printf("%d %.2f\n", i, d);

	int* p = &i;
	int address = (int)p;//��ʾ����ת��
	printf("%x %d\n", p, address);
	system("pause");
	return 0;
}

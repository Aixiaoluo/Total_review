#include <stdio.h>

int global = 2020;//ȫ�ֱ���

int main3()
{
	//�ֲ�������ȫ�ֱ���ͬ��ʱ���ֲ���������ʹ��
	int local = 2020;//�ֲ�����
	int global = 2019;//�ֲ�����
	printf("%d\n", global);
	system("pause");
	return 0;
}
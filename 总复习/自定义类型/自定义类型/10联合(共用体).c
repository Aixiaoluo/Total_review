#include <stdio.h>
#include <stdlib.h>

//�������������
union Un
{
	char c;
	int i;
};

int main10()
{
	//������Ķ���
	union Un un;
	printf("%d\n", sizeof(un));
	system("pause");
	return 0;
}
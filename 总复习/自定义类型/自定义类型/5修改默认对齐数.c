#include <stdio.h>
#include <stdlib.h>

//�޸�Ĭ�϶�����Ϊ8
#pragma pack(8)

struct s1
{
	char c1;
	int i;
	char c2;
};

//ȡ������Ĭ�϶���������ԭΪĬ��
#pragma pack()


//�޸�Ĭ�϶�����Ϊ1
#pragma pack(1)

struct s2
{
	char c;
	int i;
	char c2;
};

//ȡ������Ĭ�϶���������ԭΪĬ��
#pragma pack()

int main5()
{
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

//1��λ�εĳ�Ա������int��unsigned int��signed int
//2��λ�Ƶĳ�Ա�������һ��ð�ź�һ�����֡�
//3����ṹ�����ơ�

struct A
{
	int a : 2;//λ��aռ2λ
	int b : 5;//λ��bռ5λ
	int c : 10;//λ��cռ10λ
	int d : 30;//λ��dռ30λ
};

int main7()
{
	printf("%d\n", sizeof(struct A));
	system("pause");
	return 0;
}
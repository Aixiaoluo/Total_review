#include <stdio.h>
#include <stdlib.h>

/*
�ṹ��Ķ������
1����һ����Ա��ṹ�����ƫ����Ϊ0�ĵ�ַ����
2��������Ա�������뵽ĳ�����֣������������������ĵ�ַ��
������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ  
ע��vsĬ�϶�����Ϊ8��Linux��Ĭ�϶�����Ϊ4
3���ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
4�����Ƕ���˽ṹ�壬Ƕ�׽ṹ����뵽�Լ����������������������ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������
*/

struct s1
{
	char c1;
	int i;
	char c2;
};

struct s2
{
	char c1;
	char c2;
	int i;
};

struct s3
{
	double d;
	char c;
	int i;
};

struct s4
{
	char c1;
	struct s3 s;
	double d;
};


int main4()
{
	printf("%d\n", sizeof(struct s1));//12
	printf("%d\n", sizeof(struct s2));//8
	printf("%d\n", sizeof(struct s3));//16
	printf("%d\n", sizeof(struct s4));//32
	system("pause");
	return 0;
}
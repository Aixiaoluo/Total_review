#include <stdio.h>
#include <stdlib.h>

/*
���������ص㣺
1���ṹ���е����������Ա��ǰ����һ��������Ա
2��sizeof���ص����ֽṹ��С����������������ڴ�
3���������������Ա�Ľ����malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ��Ĵ�С������Ӧ���������Ԥ�ڴ�С
*/
typedef struct st_type1
{
	int i;
	int a[0];//���������Ա
}type_a1;

typedef struct st_type2
{
	int i;
	int a[];//���������Ա
}type_a2;

int main5()
{
	printf("%d\n", sizeof(type_a1));//4
	printf("%d\n", sizeof(type_a2));//4
	system("pause");
	return 0;
}
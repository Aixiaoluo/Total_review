#include <stdio.h>
#include <stdlib.h>

struct Student1
{
	int data[1000];
	int num;
};

struct Student1 s1 = { { 1, 2, 3, 4 }, 1000 };

//�ṹ�崫��
void Print1(struct Student1 s)
{
	printf("%d\n", s.num);
}

//�ṹ���ַ����
void Print2(struct Student1 *ps)
{
	printf("%d\n", ps->num);
}

int main()
{
	Print1(s1);
	Print2(&s1);
	system("pause");
	return 0;
}
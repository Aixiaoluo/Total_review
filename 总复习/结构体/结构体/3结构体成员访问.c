#include <stdio.h>
#include <stdlib.h>

//�ṹ�����ͨ��.������ʵ��

struct Stu 
{
	char name[20];
	int age;
};

void Print(struct Stu *ps)
{
	printf("name = %s age = %d", (*ps).name, (*ps).age);
}

int main3()
{
	struct Stu s = { "zhangsan", 20 };
	Print(&s);
	system("pause");
	return 0;
}
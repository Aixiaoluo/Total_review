#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[15];//ѧ��
};

int main14()
{
	struct Student Stu = { "����", "20", "��", "20200202" };
	printf("name = %s age = %d sex = %s id = %s", Stu.name, Stu.age, Stu.sex, Stu.id);
	system("pause");
	return 0;
}
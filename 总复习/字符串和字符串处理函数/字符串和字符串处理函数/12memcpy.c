#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��sourceλ�ÿ�ʼ�����num���ֽڵõ����ݵ�destination�С�
//memmove��memcpy��������memcpy����Դ�ڴ���Ŀ���ڴ���ʱ�򲻿����ص������Ƿ����ص������¸��ƽ��δ���塣
struct Student
{
	char name[20];
	int age;
}person, person_copy;

int main12()
{
	char myname[] = "Pierre de Fermat";

	/*using memcpy to copy string:*/
	memcpy(person.name, myname, sizeof(myname) + 1);
	
	person.age = 23;
	/*using memcpy to copy structure:*/
	memcpy(&person_copy, &person, sizeof(person));

	printf("person_copy:%s,%d\n", person_copy.name, person_copy.age);
	system("pause");
	return 0;
}
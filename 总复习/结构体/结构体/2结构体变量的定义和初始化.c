#include <stdio.h>
#include <stdlib.h>

struct Point 
{
	int x;
	int y;
}p1;//�������͵�ͬʱ�������p1

struct Point p2;//����ṹ�����p2

struct Point p3 = { 2, 3 };//�����ṹ�����p3����ֵ

struct Stu 
{
	char name[20];
	int age;
};

struct Stu s = { "zhangsan", 20 };

struct Node 
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10, { 4, 5 }, NULL };//�ṹ��Ƕ�׳�ʶ��

struct Node n2 = { 20, { 5, 6 }, NULL };

int main2()
{

	system("pause");
	return 0;
}
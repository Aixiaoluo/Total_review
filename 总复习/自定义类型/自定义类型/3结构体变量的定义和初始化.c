#include <stdint.h>
#include <stdlib.h>

struct Point
{
	int x;
	int y;
}p1;		//�������͵�ͬʱ�������p1

//����ֵ
struct Point p3 = { 2, 3 };

struct Student		//��������
{
	char name[15];
	int age;
};

struct Student s = { "zhangsan", 20 };//��ʼ��


struct Node3		//�ṹ��Ƕ�׳�ʼ��
{
	int data;
	struct Point p;
	struct Node *next;
}n1 = { 10, { 4, 5 }, NULL };

struct Node3 n2 = { 20, { 5, 6 }, NULL };//�ṹ��Ƕ�׳�ʼ��

int main3()
{

	system("pause");
	return 0;
}
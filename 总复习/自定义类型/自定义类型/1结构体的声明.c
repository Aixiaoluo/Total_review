#include <stdio.h>
#include <stdlib.h>

//�ṹ����һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
//һ������
struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[20];
};

//��������
//�����ṹ������,���������ṹ���������ʱ��ʡ�Ե��˽ṹ���ǩ��tag��
struct
{
	int a;
	char b;
	float c;
}x;

struct
{
	int a;
	char b;
	float c;
}a[20], *p;

int main1()
{
	p = &x;
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

//�ṹ�崫����ѡ����ַ�������ṹ����������¿��Է�ֹ����ѹջ�����п������󣬵��������½�������

struct qwe
{
	int data[2000];
	int num;
};

struct qwe q = { { 1, 2, 3, 4 }, 1000 };

//�ṹ�崫��
void Print1(struct qwe q)
{
	printf("%d\n", q.num);
}

void Print2(struct qwe *q)
{
	printf("%d\n", q->num);
}

int main6()
{
	Print1(q); //���ṹ��
	Print2(&q);//����ַ
	system("pause");
	return 0;
}
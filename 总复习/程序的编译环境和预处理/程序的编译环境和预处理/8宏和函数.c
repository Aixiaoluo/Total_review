#include <stdio.h>
#include <stdlib.h>

//����ŵ�
//1�������ٶȿ�
//2��������������޹�
//���ȱ��
//1��������ʱ������Ӵ��볤��
//2����û�а취����
//3����û�в������ͣ������Ͻ�
//4�����������ȼ����⣬���³������

//������������������������飬���磺��Ĳ�������������

#define MAX(a, b) ((a)>(b)?a:b)

#define MALLOC(num, type)\
	(type *)malloc(num * sizeof(type))

int main8()
{
	printf("max = %d\n", MAX(2, 3));
	MALLOC(10, int);//�滻Ϊ(int *)malloc(10 * sizeof(int));
	system("pause");
	return 0;
}
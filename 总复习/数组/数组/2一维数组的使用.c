#include <stdio.h>
#include <stdlib.h>

int main2()
{
	//[]��ΪС�����ò�����

	int arr1[10] = { 0 };//����Ĳ���ȫ��ʼ��
	int size = sizeof(arr1) / sizeof(arr1[0]);//��������Ĵ�С
	//����������ݽ��и�ֵ
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = i;
	}
	//������������
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	system("pause");
	return 0;
}
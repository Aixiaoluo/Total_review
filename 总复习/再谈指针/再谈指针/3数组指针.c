#include <stdio.h>
#include <stdlib.h>

//��������ָ���ָ������
int main3()
{
	int *p1[10];//ָ������
	int(*p2)[10];//����ָ��
	system("pause");
	return 0;
}

//&��������������������
int main32()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	system("pause");
	return 0;
}
//&��������ʾ������ĵ�ַ
//��������ʾ��������Ԫ�صĵ�ַ
int main33()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);

	printf("%p\n", arr + 1);
	printf("%p\n", &arr + 1);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
malloc���������ڴ�����һ���������õĿռ䣬���������ռ��ָ��
1�����ٳɹ�������ָ�򿪱ٺÿռ��ָ��
2������ʧ�ܣ�����NULL��malloc�ķ���ֵҪ�����
3��malloc�ڿ��ٿռ��ʱ�򣬿��ٵĿռ�������ʹ���߾���
4��malloc��sizeΪ0����δ���壬ȡ���ڱ�����
*/

/*
free���������ͷŶ�̬���ٵ��ڴ�
1������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���ôfree��������Ϊ��δ�����
2������ptrΪNULL������ʲô�¶�������
*/

int main1()
{
	int num = 0;
	scanf("%d", &num);
	int arr;

	int *ptr = NULL;
	ptr = (int *)malloc(num*sizeof(int));
	if (ptr)
	{
		for (int i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);
	ptr = NULL;
	system("pause");
	return 0;
}
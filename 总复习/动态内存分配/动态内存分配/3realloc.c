#include <stdio.h>
#include <stdlib.h>

/*
realloc
�ɶԶ�̬�����ڴ�Ĵ�С���е���
1��ptr��Ҫ�������ڴ��ַ
2��size����֮��Ĵ�С
3������ֵΪ����֮����ڴ���ʼ��ַ
4�������������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ�
*/

int main3()
{
	int *ptr = malloc(100);
	if (ptr)
	{

	}
	else
	{
		exit(EXIT_FAILURE);
	}
	//��չ����
	ptr = realloc(ptr, 1000);

	int *p = NULL;
	p = realloc(ptr, 1000);
	if (p)
	{
		ptr = p;
	}

	free(ptr);
	ptr = NULL;
	system("pause");
	return 0;
}
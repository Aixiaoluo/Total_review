#include <stdio.h>
#include <stdlib.h>

/*
calloc
1��Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ䣬���ѿռ�ÿ���ֽڳ�ʼ��Ϊ0
2��calloc�ڷ��ص�ַ֮ǰ�������Ŀռ��ÿ���ֽ�����
*/

int main2()
{
	int *p = calloc(10, sizeof(int));
	if (p)
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 0;
		}
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
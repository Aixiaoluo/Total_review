#include <stdio.h>
#include <stdlib.h>

#if 0
int main()
{
	//��������ʾ��������׵�ַ
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *parr = &arr;
	printf("%p\n", &arr[0]);
	printf("%p\n", parr);
	system("pause");
	return 0;
}

#else

int main5()
{
	//parr+i��ʾ��������arr�±�Ϊi�ĵ�ַ
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *parr = &arr;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		printf("&arr[%d] = %p <=====> p + %d = %p\n", i, &arr[i], i, parr + i);
	}
	system("pause");
	return 0;
}

#endif

#if 1

int main5()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *parr = &arr;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(parr + i));
	}
	system("pause");
	return 0;
}

#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//sizeof���������� ��ʾ��������
//&������ ��ʾ�������飬ȡ��������������ĵ�ַ
//�������������ʾ��Ԫ�ص�ַ

#if 0
int main1()
{
	//һά����
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a + 1));//4
	printf("%d\n", sizeof(&a[0]));//4
	printf("%d\n", sizeof(&a[0] + 1));//4

	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));

	char *p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//4
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4
	//printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16
	system("pause");
	return 0;
}
#endif
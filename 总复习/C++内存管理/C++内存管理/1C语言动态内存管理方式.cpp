#include <stdio.h>
#include <stdlib.h>

//malloc����size����С���ڴ�ռ�
//calloc����num��size��С���ڴ�ռ�
//realloc��*ptr���濪��size����С���ڴ�ռ�
int main()
{
	int* p1 = (int*)malloc(sizeof(int));
	free(p1);
	int* p2 = (int*)calloc(4, sizeof(int));
	int* p3 = (int*)realloc(p2, sizeof(int)* 10);
	free(p3);
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main1()
{
	int a = 10000;
	FILE *pf = fopen("test.txt", "wb");
	fwrite(&a, 1, 4, pf);//�����Ƶ���ʽд���ļ���
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}
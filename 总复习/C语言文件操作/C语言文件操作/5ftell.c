#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//ftell example
//ftell �����ļ�ָ���������ʼλ�õ�ƫ����
int main5()
{
	FILE *pfile;
	long size;
	pfile = fopen("ftell example.txt", "ab");
	if (pfile == NULL)
	{
		perror("error opening file");
	}
	else
	{
		fseek(pfile, 0, SEEK_END);
		size = ftell(pfile);
		fclose(pfile);
		printf("Size of ftell exampletxt:%ld bytes.\n", size);
		pfile = NULL;

	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//fseek example
//fseek�����ļ�ָ���λ�ú�ƫ��������λָ���ļ�
int main4()
{
	FILE *pfile;
	pfile = fopen("fseek example.txt", "wb");
	fputs("This is an apple.", pfile);
	fseek(pfile, 9, SEEK_SET);
	fputs("sam", pfile);
	fclose(pfile);
	pfile = NULL;
	system("pause");
	return 0;
}
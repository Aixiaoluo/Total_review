#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//rewind example
//rewind���ļ�ָ��ص��ļ�����ʼλ��
int main6()
{
	int n;
	FILE *pfile;
	char buffer[27];
	pfile = fopen("rewind example.txt", "wb+");
	for (n = "A"; n <= 'Z'; n++)
	{
		fputc(n, pfile);
	}
	rewind(pfile);
	fread(buffer, 1, 26, pfile);
	fclose(pfile);
	buffer[26] = '\0';
	puts(buffer);
	pfile = NULL;
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//strerror���ش����룬����Ӧ�Ĵ�����Ϣ
int main10()
{
	FILE *pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL)
	{
		printf("Error opening file unexist.ent:%s\n", strerror(errno));
		//errno:Last error number
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

//һ��ʹ��
int main1()
{
	char ch = 'a';
	char *pch = &ch;
	*pch = 'b';
	system("pause");
	return 0;
}

int main11()
{
	//��һ�������ַ������ַ�H�����ָ�����pstr��
	char *pstr = "Hello,World!";
	printf("%s\n", pstr);
	system("pause");
	return 0;
}
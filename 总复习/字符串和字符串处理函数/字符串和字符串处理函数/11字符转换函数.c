#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//towler ת��ΪСд��ĸ
//toupper ת��Ϊ��д��ĸ
int main11()
{
	int i = 0;
	char str[] = "I AM A STUDENT!\n";
	char c;
	while (str[i])
	{
		c = str[i];
		if (isupper(c))
		{
			c = tolower(c);
		}
		putchar(c);
		i++;
	}
	system("pause");
	return 0;
}
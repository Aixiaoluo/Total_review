#include <stdio.h>
#include <stdlib.h>

int check_sys2()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}

int main2()
{
	if (check_sys2())
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

//ǰ��++��ǰ��--
int main5()
{
	int a = 10;
	int x = ++a;
	int y = --a;
	printf("%d\n", y);
	system("pause");
	return 0;
}

//����++��--
int main5()
{
	int a = 10;
	int x = a++;
	int y = a--;
	printf("%d\n", y);
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

//x+1;����������
//x++;���и�����
#define MAX(a, b) ((a)>(b)?a:b)

int main9()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x = %d y = %d z = %d\n", x, y, z);
	system("pause");
	return 0;
}
#include <stdint.h>
#include <stdlib.h>

//��̬�ڴ濪�ٵ������ͷ�(������ڴ�й©)
void test6()
{
	int *p = (int *)malloc(100);
	if (p)
	{
		*p = 20;
	}
}

int main6()
{
	test6();
	system("pause");
	return 0;
}
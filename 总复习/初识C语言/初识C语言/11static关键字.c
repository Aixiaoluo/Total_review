#include <stdio.h>
#include <stdlib.h>


//static���������α����ͺ�����
//1�����ξֲ�����
#if 0
void test()
{
	int i = 0;
	i++;
	printf("%d ", i);
}

int main11()
{
	for (int i = 0; i < 10; i++)
	{
		test();
	}
	system("pause");
	return 0;
}
#else
void test()
{
	static int i = 0;
	i++;
	printf("%d ", i);
}

int main11()
{
	for (int i = 0; i < 10; i++)
	{
		test();
	}
	system("pause");
	return 0;
}
#endif
//2������ȫ�ֱ���
#if 0
int g_val = 2020;

int main11()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}
#else
static int g_val = 2020;

int main11()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}
#endif

//3�����κ���
#if 0
int Add(int x, int y)
{
	return x + y;
}

int main11()
{
	printf("%d\n", add(2, 3));
	system("pause");
	return 0;
}
#else
static int Add(int x, int y)
{
	return x + y;
}

int main11()
{
	printf("%d\n", add(2, 3));
	system("pause");
	return 0;
}
#endif
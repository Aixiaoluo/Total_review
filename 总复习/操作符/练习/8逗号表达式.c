#include <stdio.h>
#include <stdlib.h>

int main8()
{
	int a = 1;
	int b = 2;
	//���ű��ʽ������������ִ�У��������ʽ�Ľ���������һ�����ʽ�Ľ����
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);
	system("pause");
	return 0;
}
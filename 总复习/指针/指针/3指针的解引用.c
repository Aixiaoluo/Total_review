#include <stdio.h>
#include <stdlib.h>

int main3()
{
	//ָ������;�����ָ������õ�ʱ����Բ�����Ȩ�ޡ�char*ָ������þ�ֻ�ܷ���һ���ֽڣ�int*�����ÿ��Է����ĸ��ֽڡ�
	int n = 0x11223344;
	char *pc = (char*)&n;
	char *pi = &n;
	*pc = 0x55;
	*pi = 0;
	system("pause");
	return 0;
}
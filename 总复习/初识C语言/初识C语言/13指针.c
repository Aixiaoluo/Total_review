#include <stdio.h>
#include <stdlib.h>

#if 0
int main()
{
	int num = 10;
	&num;//ȡ��num�ĵ�ַ
	printf("%p\n", &num);
	system("pause");
	return 0;
}
#endif
//ָ���ʹ��ʵ��
#if 0
int main()
{
	int num = 10;
	int* p = &num;
	*p = 20;
	printf("%d\n", num);
	system("pause");
	return 0;
}
#endif
//ָ����ƹ�
#if 0
int main()
{
	char ch = 'w';
	char* pch = &ch;
	*pch = 'q';
	printf("%c\n", ch);
	system("pause");
	return 0;
}
#endif
//ָ������Ĵ�С
//ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�
#if 0
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long double*));

	printf("%d\n", sizeof(char*));


	system("pause");
	return 0;
}
#endif
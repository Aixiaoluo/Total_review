#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
	return x + y;
}
/*C���Է��ע��
int Sub(int x, int y)
{
	return x-y;
}
*/

int main6()
{
	"Hello,World!";//�ַ�������ֵ���ַ�����
	//�ַ����Ľ�����־��\0�ǽ�����־���������ַ������ݡ�

	//����Ļ�ϴ�ӡһ��Ŀ¼C:\code\test.c
	printf("C:\\code\\test.c\n");

	//����Ļ�ϴ�ӡһ��������'
	printf("%c\n", '\'');
	//����Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫����"
	printf("%s\n", "\"");

	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("C:\test\328\test.c"));

	//C++ע�ͷ��
	//int a = 10;
	//����Add��������ɼӷ�
	printf("%d\n", Add(1, 2));
	system("pause");
	return 0;
}
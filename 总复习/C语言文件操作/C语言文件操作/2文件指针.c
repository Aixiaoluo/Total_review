#include <stdio.h>
#include <stdlib.h>

//�ļ��������͵�����
struct _iobuf1
{
	char *_ptr;
	int _cnt;
	char *_base;
	int _flag;
	int _file;
	int _charbuf;
	int _bufsiz;
	char _tmpfname;
};

typedef struct _iobuf1 FILE1;

int main2()
{
	FILE *pf;//����FILE��ָ�����
	system("pause");
	return 0;
}
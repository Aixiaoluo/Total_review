#include <stdio.h>
#include <stdlib.h>

#define N_VALUES 5
//�����ַ�������
int my_strlen(char *s)
{
	char *p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}

int main4()
{
	float values[N_VALUES];
	float *vp;
	//ָ��+-������ָ��Ĺ�ϵ����
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}

	for (vp = &values[N_VALUES - 1]; vp >= 0; vp--)
	{
		*vp = 0;
	}
	
	system("pause");
	return 0;
}
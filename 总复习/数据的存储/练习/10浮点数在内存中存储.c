#include <stdio.h>
#include <stdlib.h>

int main10()
{
	int n = 9;
	float *pfloat = (float*)&n;
	printf("n��ֵΪ;%d\n", n);
	printf("*pfloat��ֵΪ��%f\n", *pfloat);

	*pfloat = 9.0;
	printf("n��ֵΪ��%d\n", n);
	printf("*pfloat��ֵ��%f\n", *pfloat);
	system("pause");
	return 0;
}
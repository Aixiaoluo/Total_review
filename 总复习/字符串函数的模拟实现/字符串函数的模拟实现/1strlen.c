#include <stdio.h>
#include <stdlib.h>

//��ʽһ����������ʽ
size_t my_strlen1(char *str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//��ʽ������������ʱ�����ĵݹ�ʵ��
size_t my_strlen2(char *str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen2(str + 1);
	}
	return 0;
}

//��ʽ����ָ��-ָ��ʵ��
size_t my_strlen3(char *str)
{
	char *p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;

}

int main1()
{
	const char *str1 = "abcdef";
	const char *str2 = "abc";
	if (my_strlen1(str1) > my_strlen1(str2))
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2");
	}
	if (my_strlen2(str1) > my_strlen2(str2))
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2");
	}
	if (my_strlen3(str1) > my_strlen3(str2))
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2");
	}
	system("pause");
	return 0;
}
#include <iostream>

//1����ͨ�����ռ�
namespace N1 //N1Ϊ�����ռ������
{
	//�����ռ��е����ݣ��ȿ��Զ��������Ҳ���Զ��庯��
	int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}

//2�������ռ��Ƕ��ʹ��
namespace N2
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N3
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}
	}
}

//3��ͬһ������������ֶ����ͬ���Ƶ������ռ�(����������ϲ���ͬһ�������ռ���)
namespace N1
{
	int Mul(int left, int right)
	{
		return left * right;
	}
}
//һ�������ռ�Ͷ�����һ���µ������������ռ������е����ݶ�������ڸ������ռ���

//�����ռ������ʹ�÷�ʽ
namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return left + right;
	}
	int Mul(int left, int right)
	{
		return left * right;
	}
}
//1���������ռ����Ƽ��������޶���
int main1()
{
	printf("%d\n", N::a);
	system("pause");
	return 0;
}
//2ʹ��using�������ռ��г�Ա����
using N::b;
int main2()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	system("pause");
	return 0;
}
//3��ʹ��using namespace �����ռ���������
using namespace N;
int main3()
{
	printf("%d\n", a);
	printf("%d\n", b);
	system("pause");
	return 0;
}
#include <iostream>

using namespace std;

//��ʽʵ�������ñ���������ʵ�������Լ�����ģ�������ʵ������
template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

void Test1()
{
	int a = 10;
	int b = 20;
	double c = 10.5;
	double d = 20.8;

	cout << Add(a, b) << endl;
	cout << Add(c, d) << endl;

	//�û�ǿ��ת��
	cout << Add(a, (int)c) << endl;
}

//��ʾʵ�������ں��������<>��ָ��ģ�����ʵ������
void Test2()
{
	int a = 10;
	int b = 20;
	double c = 10.5;
	double d = 20.8;

	cout << Add<int>(a, b) << endl;
	cout << Add<double>(c, d) << endl;

	//�û�ǿ��ת��
	cout << Add<int>(a, c) << endl;
}
int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}

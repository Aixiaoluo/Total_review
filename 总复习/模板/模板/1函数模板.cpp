#include <iostream>

using namespace std;

//����ģ��
//����ģ�����һ���������壬�ú���ģ���������޹أ���ʹ��ʱ��������������ʵ�����Ͳ����������ض����Ͱ汾

//����ģ���ʽ
//template<typename T1, typename T2, ��, typename Tn>
//����ֵ���� �������������б�{}

template <typename T>
void Swap(T& left, T& right)
{
	T tmp = left;
	left = right;
	right = tmp;
}
//typename������������ģ������Ĺؼ��֣�������class����

int main()
{
	char a = '0';
	char b = '9';
	Swap(a, b);
	cout << a << endl;
	cout << b << endl;

	int c = 10;
	int d = 20;
	Swap(c, d);
	cout << c << endl;
	cout << d << endl;

	double e = 2.1;
	double f = 3.2;
	Swap(e, f);
	cout << e << endl;
	cout << f << endl;

	system("pause");
	return 0;
}

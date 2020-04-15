#include <iostream>

using namespace std;

//��ģ���ƫ�ػ���ָ�κ�ģ�������һ�������������Ƶ��ػ��汾

//��ģ���ƫ�ػ���Ϊ����
//һ���ǲ����ػ�����ģ�������һ�����ػ�
//����һ���ǲ����Ľ�һ�����ƣ�ƫ�ػ�Ҳ�����ǽ�ģ��������и���һ�������ƣ�����Ƴ���ģ��

template<class t1, class t2>
class data
{
public:
	data()
	{
		cout << "data()<t1, t2>" << endl;
	}
private:
	t1 m_d1;
	t2 m_d2;
};

template<class t2>
class data<int, t2>
{
public:
	data()
	{
		cout << "data()<int, t2>" << endl;
	}
private:
	int m_d1;
	t2 m_d2;
};

template<class t1>
class data<t1, char>
{
public:
	data()
	{
		cout << "data()<t1, char>" << endl;
	}
private:
	t1 m_d1;
	char m_d2;
};

template<class t1, class t2>
class data<t1*, t2*>
{
public:
	data()
	{
		cout << "data()<t1*, t2*>" << endl;
	}
private:
	t1* m_d1;
	t2* m_d2;
};

template<class t1, class t2>
class data<t1&, t2&>
{
public:
	data(const t1& d1, const t2& d2)
		:m_d1(d1)
		, m_d2(d2)
	{
		cout << "data(t1&, t2&)" << endl;
	}
private:
	const t1& m_d1;
	const t2& m_d2;
};

int main()
{
	data<double, int> d1; // �����ػ���int�汾
	data<int, double> d2; // ���û�����ģ��
	data<int *, int*> d3; // �����ػ���ָ��汾
	data<int&, int&> d4(1, 2); // �����ػ���ָ��汾

	system("pause");
	return 0;
}

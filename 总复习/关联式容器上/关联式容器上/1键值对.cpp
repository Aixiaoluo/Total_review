#include <iostream>

using namespace std;

//��ֵ�ԣ�������ʾ����һһ��Ӧ��ϵ�Ľṹ���ýṹһ�����������Ա����key��value��key�������value����ֵ��value��ʾ��key��Ӧ����Ϣ

template<class T1, class T2>
class pair
{
public:
	typedef T1 fist_type;
	typedef T2 second_type;
	pair()
		:first(T1())
		, second(T2())
	{

	}

	pair(const T1& a, const T2& b)
		:first(a)
		, second(b)
	{

	}
public:
	T1 first;
	T2 second;
};

int main()
{

	system("pause");
	return 0;
}

#include <iostream>

using namespace std;

//1����������Ҳ�����ָ�룬һ�����Ǵ��麯����һ���ִ��Ա
//2�����������������һ�����麯������дҲ�и���
//3���麯���ı�����һ�����麯��ָ���ָ�����飬����������ŵ���nullptr
//4����������麯��ָ�룬�����ڴ����

//��������������ܽ᣺
//1������������ݿ���һ�ݵ������������
//2��������������д�˻����麯�������������Լ����麯����������л�����麯��
//3���������Լ��������麯���������������е������������ӵ��������������

class Base
{
public:
	virtual void Func1()
	{
		cout << "Base::Func1()" << endl;
	}

	virtual void Func2()
	{
		cout << "Base::Func2()" << endl;
	}

	void Func3()
	{
		cout << "Base::Func3()" << endl;
	}
public:
	int m_b = 1;
};

class Derive : public Base
{
public:
	virtual void Func1()
	{
		cout << "Derive::Func1()" << endl;
	}
private:
	int m_d = 2;
};
int main()
{
	Base b;
	Derive d;
	system("pause");
	return 0;
}

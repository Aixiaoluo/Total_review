#include <iostream>

using namespace std;

//Э�䣨�������������麯������ֵ���Ͳ�ͬ��
//��������д�����麯����ʱ��������麯������ֵ���Ͳ�ͬ���������麯�����ػ�������ָ��������ã��������麯����������������ָ�������ʱ����ΪЭ��

class A
{

};

class B : public A
{

};

class Person
{
public:
	virtual A* f()
	{
		return new A;
	}
};

class Student : public Person
{
public:
	virtual B* f()
	{
		return new B;
	}
};

int main()
{

	system("pause");
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

//��Ԫ��ϵ���ܼ̳У�������Ԫ���ܷ���������˽�кͱ�����Ա

class student;
class person
{
public:
	person(const string& s = "zhangsan")
		:m_name(s)
	{

	}

	friend void display(const person& p, const student& s);
protected:
	string m_name;
};

class student : public person
{
public:
	student(const string& s, const int num = 10)
		:person(s)
		, m_num(num)
	{

	}

public:
	int m_num;
};

void display(const person& p, const student& s)
{
	cout << p.m_name << endl;
	cout << s.m_num << endl;
}

int main()
{
	person p;
	student s("lisi", 20);
	display(p, s);
	system("pause");
	return 0;
}

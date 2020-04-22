#include <iostream>
#include <string>

using namespace std;

//1��������Ĺ��캯��������û���Ĺ��캯����ʼ��������ǲ��ֳ�Ա�����ǻ���û��Ĭ�ϵĹ��캯����������������๹�캯���ĳ�ʼ���б�׶���ʾ����
//2��������Ŀ������캯��������û���Ŀ���������ɻ���Ŀ�����ʼ��
//3���������operator=����Ҫ���û����operator=��ɻ���ĸ���
//4��������������������ڱ�������ɺ��Զ����û��������������ɻ����Ա�������Ӷ���֤��������������������Ա������
//5������������ʼ���ȵ��û��๹���ٵ������๹��
//6��������������������ȵ��������������ڵ��û�������

class Person
{
public:
	Person(const char* name = "zhangsan")
		:m_name(name)
	{
		cout << "Person(const char* name = ""zhangsan"")" << endl;
	}

	Person(const Person& p)
		:m_name(p.m_name)
	{
		cout << "Person(const Person& p)" << endl;
	}

	Person& operator = (const Person& p)
	{
		cout << "Person& operator = (const Person& p)" << endl;

		if (this != &p)
		{
			m_name = p.m_name;
		}
		return *this;
	}

	~Person()
	{
		cout << "~Person()" << endl;
	}

protected:
	string m_name;
};

class Student : public Person
{
public:
	Student(const char* name, int num)
		:Person(name)
		, m_num(num)
	{
		cout << "Student(const char* name, int num)" << endl;
	}

	Student(const Student& s)
		:Person(s)
		, m_num(s.m_num)
	{
		cout << "Student(const Student& s)" << endl;
	}

	Student& operator = (const Student& s)
	{
		cout << "Student& operator = (const Student& s)" << endl;

		if (this != &s)
		{
			Person::operator=(s);
			m_num = s.m_num;
		}

		return *this;
	}

	~Student()
	{
		cout << "~Student()" << endl;
	}

protected:
	int m_num;
};

int main()
{
	Student s1("lisi", 18);
	Student s2(s1);
	Student s3("wanglaowu", 19);
	s1 = s3;
	system("pause");
	return 0;
}

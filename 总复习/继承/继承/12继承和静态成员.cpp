#include <iostream>
#include <string>

using namespace std;

//���ඨ����static��̬��Ա���������̳���ϵ��ֻ��һ�������ĳ�Ա����������������˶������࣬��ֻ��һ��static��Աʵ��

class Person
{
public:
	Person()
	{
		++m_count;
	}
protected:
	string m_name;
public:
	static int m_count;
};

int Person::m_count = 0;

class Student : public Person
{
protected:
	int m_stuid;
};

class Gaduate :public Student
{
protected:
	string m_seminarCourse;
};

int main()
{
	Student s1;
	Student s2;
	Student s3;
	Gaduate s4;

	cout << "m_count " << Person::m_count << endl;
	Student::m_count = 0;
	cout << "m_count " << Person::m_count << endl;
	system("pause");
	return 0;
}

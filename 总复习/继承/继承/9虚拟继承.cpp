#include <iostream>
#include <string>

using namespace std;

//����̳н�������μ̳еĶ����Ժ���������

class Person
{
public:
	string m_name;
};

class Student : virtual public Person
{
protected:
	int m_num;
};

class Teacher : virtual public Person
{
protected:
	string m_stuid;
};

class Assistant : public Student, public Teacher
{
protected:
	string m_majorCourse;
};

int main()
{
	Assistant a;
	a.m_name = "zhangsan";
	system("pause");
	return 0;
}

#include <iostream>
#include  <string>
using namespace std;

//���̳У�һ��������ֻ��һ��ֱ�ӻ���
//��̳У�һ�������������������ϵĸ���
//���μ̳У��Ƕ�̳е�һ���������

//���μ̳д������ݵ�����Ͷ���������

class Person
{
public:
	string m_name;
};

class Student : public Person
{
protected:
	int m_num;
};

class Teacher : public Person
{
protected:
	int m_stuid;
};


class Assistant : public Student, public Teacher
{
protected:
	string m_majorCourse;
};

int main()
{
	Assistant a;
	//a.m_name = "zhangsan";//�˴����ֶ���������

	a.Student::m_name = "zhangsan";
	a.Teacher::m_name = "lisi";
	system("pause");
	return 0;
}

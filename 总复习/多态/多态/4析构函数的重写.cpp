#include <iostream>

using namespace std;

//������������д
//���ǻ������������Ϊ�麯������ʱ��������������ֻҪ���壬�����Ƿ��virtual�ؼ��֣����������鹹����������д����Ȼ�����������������������ֲ�ͬ����Ȼ��������ͬ����������������Ϊ�����������������ͳһ����Ϊdestructor

class Person
{
public:
	virtual ~Person()
	{
		cout << "~Person()" << endl;
	}
};

class Student : public Person
{
public:
	virtual ~Student()
	{
		cout << "~Student()" << endl;
	}
};

//ֻ�������������������д�˻����������������ʱdelete����������������ſ��Թ��ɶ�̬�����ܱ�ָ֤��ָ��Ķ�����ȷ������������

int main()
{
	Person* per = new Person;
	Student* stu = new Student;

	delete per;
	delete stu;
	system("pause");
	return 0;
}

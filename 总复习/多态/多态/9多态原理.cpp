#include <iostream>

using namespace std;

//��ͬ�������ͬһ��Ϊʱ���չ�ֳ���̬
//Ҫʵ�ֶ�̬����Ҫʵ���麯���ĸ��ǺͶ����ָ������õ����麯��

class Person
{
public:
	virtual void doSomething()
	{
		cout << "Person" << endl;
	}
};

class Student : public Person
{
public:
	virtual void doSomething()
	{
		cout << "Student" << endl;
	}
};

void Func(Person& people)
{
	people.doSomething();
}

int main()
{
	Person per;
	Func(per);

	Student stu;
	Func(stu);
	system("pause");
	return 0;
}

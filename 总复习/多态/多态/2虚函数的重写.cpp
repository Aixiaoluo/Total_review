#include <iostream>

using namespace std;

//�麯������д�����ǣ���������ֻ��һ�����Ż�����ȫ��ͬ���麯�������������麯��������麯���ķ���ֵ���͡��������֡������б� ��ȫ��ͬ����Ϊ��������麯����д�˻�����麯��

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
	//ע��
	//�麯������д����������Բ���virtual�ؼ��֣���ȻҲ���Թ�����д��ϵ�����Ǽ̳к������麯�����̳������������������ɱ����麯�����ԣ�����д�����淶
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

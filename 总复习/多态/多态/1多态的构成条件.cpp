#include <iostream>

using namespace std;

//�麯������virtual���ε����Ա����
//��ָ̬���ǲ�ͬ�ļ̳й�ϵ�������ȥ����ͬһ�����������˲�ͬ��Ϊ��

//���ɶ�̬����������
//1������ͨ�������ָ��������õ����麯��
//2�������õĺ����������麯���������������Ի�����麯��������д

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
	Person zhangsan;
	Func(zhangsan);

	Student lisi;
	Func(lisi);
	system("pause");
	return 0;
}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
////��Ԫ��ϵ���ܼ̳У�������Ԫ���ܷ���������˽�кͱ�����Ա
//
//class Student;
//class Person
//{
//public:
//	Person(const string& s = "zhangsan")
//		:m_name(s)
//	{
//
//	}
//
//	friend void display(const Person& p, const Student& s);
//protected:
//	string m_name;
//};
//
//class Student : public Person
//{
//public:
//	Student(const string& s, const int num = 10)
//		:Person(s)
//		, m_num(num)
//	{
//
//	}
//
//public:
//	int m_num;
//};
//
//void display(const Person& p, const Student& s)
//{
//	cout << p.m_name << endl;
//	cout << s.m_num << endl;
//}
//
//int main()
//{
//	Person p;
//	Student s("lisi", 20);
//	display(p, s);
//	system("pause");
//	return 0;
//}

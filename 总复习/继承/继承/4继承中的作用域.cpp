//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1���ڼ̳��л�����������ж�����������
////2������͸�������ͬ����Ա�������Ա�����ζ�ͬ����Ա��ֱ�ӷ��ʣ�������������أ��ض��壩
////3��ֻ��Ҫ������ͬ���Ϳɹ�������
////4���ڼ̳��о��������ض���
//
//class Person
//{
//protected:
//	string m_name = "zhangsan";
//	int m_num = 610;
//};
//
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << "name : " << m_name << endl;
//		cout << "num : " << m_num << endl;
//		cout << "stuid : " << m_stuid << endl;
//	}
//protected:
//	int m_stuid = 171;
//};
//
//class A
//{
//public:
//	void fun()
//	{
//		cout << "fun()" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		//�����Ա�����θ���ͬ����Ա��ֱ�ӷ���
//		//���ǿ���ʹ�û���::�����Ա ��ʾ����
//		A::fun();
//		cout << "fun(int i)" << i << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.Print();
//
//	B b;
//	b.fun(10);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1�������������Ը�ֵ������Ķ���/�����ָ��/���������
////2����������ܸ����������ֵ
////3�������ָ�����ͨ��ǿ������ת����ֵ���������ָ�룬��ʱ����ָ�������ָ������������ʱ����ǰ�ȫ��
//
//class Person
//{
//protected:
//	string m_name;
//	string m_sex;
//	int m_age;
//};
//
//class Student : public Person
//{
//public: 
//	int m_stuid;
//};
//
//int main()
//{
//	Student sobj;
//	//���������Ը�ֵ������Ķ���/�����ָ��/���������
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//	
//	//��������ܸ�ֵ��������
//	//sobj = pobj;
//
//	//�����ָ�����ͨ��ǿ������ת����ֵ��������ָ��
//	pp = &sobj;
//	Student* ps1 = (Student*)pp;
//	ps1->m_stuid = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp;
//	ps2->m_stuid = 10;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
////����Ϊstatic�����Ա��Ϊ��ľ�̬��Ա����static���εĳ�Ա������Ϊ��̬��Ա��������static���εĳ�Ա������Ϊ��̬��Ա��������̬�ĳ�Ա����һ��Ҫ��������г�ʼ����
//class A
//{
//public:
//	A()
//	{
//		++_scount;
//	}
//
//	A(const A& t)
//	{
//		++_scount;
//	}
//
//	static int GetACount()
//	{
//		return _scount;
//	}
//private:
//	static int _scount;
//};
//
//int A::_scount = 0;
//
////���ԣ�
////1����̬��ԱΪ������Ķ���������
////2����̬��Ա�������������ⶨ�壬����ʱ���ܼ�static�ؼ���
////3���ྲ̬��Ա����������::��̬��Ա���߶���.��̬��Ա������
////4����̬��Ա����û�����ص�thisָ�룬���ܷ����κηǾ�̬��Ա
////5����̬��Ա�������ͨ��Աһ����Ҳ�����ַ����޶�����public��protected��private��
////6���Ǿ�̬��Ա�������Ե��þ�̬��Ա����
//
//int main()
//{
//	cout << A::GetACount() << endl;
//
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//	system("pause");
//	return 0;
//}

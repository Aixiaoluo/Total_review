#include <iostream>
#include <typeinfo>
using namespace std;

//auto��Ϊһ���µ�����ָʾ����ָʾ��������auto�����ı��������б������ڱ���ʱ�Ƶ��õ�
//ע��
//ʹ��autoʱ����Ա������г�ʼ�����ڱ���׶α�������Ҫ���ݳ�ʼ�����ʽ���Ƶ�auto��ʵ�����͡�
//auto��һ����������ʱ�ġ�ռλ�������������ڱ����ڻὫauto�滻Ϊ����ʵ�ʵ����͡�

double testauto()
{
	return 10.0;
}

//auto��ʹ��
//1��auto��ָ������ý��ʹ��
//��auto����ָ������ʱ����auto��auto*û��������auto���������õ�ʱ������&
void testauto1()
{
	int a = 10;
	auto b = &a;
	auto* c = &a;
	auto& d = a;

	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
}

//2����ͬһ�ж���������
//����ͬһ�����������������Щ������������ͬ�����ͣ�������������ᱨ����Ϊ������֧�ӵ�һ�����������Ƶ���
void testauto2()
{
	auto a = 1, b = 2;
	//auto c = 1.2, d = 4;
}

//auto�����Ƶ��ĳ���
//1��auto������Ϊ��������
//2��auto����ֱ��������������
//3��auto��c++11ֻ����Ϊ����ָʾ��
//4��autoʵ�ʳ����÷����Ƿ�Χfor��lambda���ʽ���ʹ��
//5��auto���ܶ�����ķǾ�̬��Ա����
//6��ʵ����ģ�岻��ʹ��auto��Ϊģ�����

int main()
{
	int a = 10;
	auto b = a;
	auto c = 'a';
	auto d = testauto();

	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;

	system("pause");
	return 0;
}

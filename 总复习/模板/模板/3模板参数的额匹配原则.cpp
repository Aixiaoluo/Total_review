#include <iostream>

using namespace std;

//һ����ģ�庯�����Ժ�һ��ͬ���ĺ���ģ��ͬʱ���ڣ����Ҹú���ģ�廹�����ػ�Ϊ�����ģ�庯��
//
//ר�Ŵ���int�ļӷ�����
int Add(const int& left, const int& right)
{
	return left + right;
}

////ͨ�õļӷ�����
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//void Test1()
//{
//	Add(1, 2);//���ģ�庯��ƥ�䣬����������Ҫ�ػ�
//	Add<int>(1, 2);//���ñ������ػ��İ汾
//}

//���ڷ�ģ�庯����ͬ������ģ�壬�������������ͬ���ڵ���ʱ���ȵ��÷�ģ�庯��������ģ����Բ���һ��������ƥ��Ч���ĺ�������ѡ���ػ�ģ��

//ͨ�õļӷ�����
template<class T1, class T2>
T1 Add(const T1& left, const T2& right)
{
	return left + right;
}

void Test2()
{
	Add(1, 2);//����Ҫ�ػ�
	Add(1, 1.2);//ģ�庯���������ɸ��õ�ƥ��汾������������ʵ�����ɸ���ƥ���Add����
}

//ģ�庯���������Զ�����ת����������ͨ��������

int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}

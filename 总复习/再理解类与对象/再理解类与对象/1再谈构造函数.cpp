//#include <iostream>
//
//using namespace std;
//
////�˴��Ĺ��캯���Ǹ���ֵ�����ǳ�ʼ����
//class Date1
//{
//public:
//	Date1(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
////��ʼ���б�
////��ʼ���б�ָ������һ��ð�ſ�ʼ���������Զ��ŷָ����ָ���Ա������ÿ����Ա���������һ��������������ĳ�ʼֵ����ʽ��
//class Date2
//{
//public:
//	Date2(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
////ע��
////1��ÿ����Ա�����ڳ�ʼ���б���ֻ�ܳ���һ�Σ���ʼ��ֻ�ܳ�ʼ��һ�Σ�
////2�����а������³�Ա��������ڳ�ʼ���б�λ�ý��г�ʼ��
////2.1�����ó�Ա����
////2.2��const��Ա����
////2.3�������ͳ�Ա������û��Ĭ�Ϲ��캯����
////3��������ʹ�ó�ʼ���б���Ϊ�Զ������͵ĳ�Ա����һ���������ó�ʼ���б���г�ʼ��
////4����Ա������������������������ڳ�ʼ���б��еĳ�ʼ��˳�������ڳ�ʼ���б��е��Ⱥ�����޹ء�
//
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{
//
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//
//private:
//	A _aobj;//û��Ĭ�Ϲ��캯��
//	int& _ref;//����
//	const int _n;//const
//};
//
//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//
//class Date
//{
//public:
//	Date(int day)
//	{
//
//	}
//private:
//	int _day;
//	Time _t;
//};
//
//int main()
//{
//	Date d1(1);
//	system("pause");
//	return 0;
//}

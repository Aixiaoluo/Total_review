//#include <iostream>
//
//using namespace std;
//
////���캯������
////���캯����һ������ĳ�Ա������������������ͬ�����������Ͷ���ʱ�ɱ������Զ����ã���֤ÿ�����ݳ�Ա����һ�����ʵĳ�ʼֵ�������ڶ��������������ֻ����һ�Ρ�
//
//class Date1
//{
//public:
//	void Display()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//	void SetDate(int yeay, int month, int day)
//	{
//		_year = yeay;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////���캯��������ĳ�Ա���������캯�������񲢲��ǿ��ٿռ䴴���������ǳ�ʼ������
////���캯��������
////1����������������ͬ
////2���޷���ֵ
////3������ʵ�����������Զ����ö�Ӧ�Ĺ��캯��
////4�����캯����������
////5���������û����ʾ���幹�캯������C++���������Զ�����һ�����캯����һ���û���ʾ���壬����������������
////6���޲ι��캯����ȫȱʡ�����Ĺ��캯������ΪĬ�Ϲ��캯��������Ĭ�Ϲ��캯��ֻ����һ����
//
//class Date2
//{
//public:
//	//�޲ι���
//	Date2 ()
//	{
//
//	}
//	//���ι���
//	Date2 (int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate2()
//{
//	Date2 d3;//�����޲ι���
//	Date2 d4(2020, 3, 27);//���ô��ι���
//
//	//ע�⣺�����޲ι��첻�ܴ����ţ���Ȼ�ᵱ�ɺ�������
//	Date2 d5();//�ᱻ��������d5�޲Σ�����Date��ĺ���������
//}
//
//class Date3
//{
//public:
//	////�޲ι���
//	//Date3 ()
//	//{
//
//	//}
//	////���ι���
//	//Date3 (int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate3()
//{
//	Date3 d6;//�˴����õ������Ĭ�Ϲ��캯�����ʿ��Գɹ���������
//}
//
//class Date4
//{
//public:
//	//�޲ι���
//	Date4 ()
//	{
//		_year = 2020;
//		_month = 3;
//		_day = 27;
//	}
//	//ȫȱʡ��������
//	Date4 (int year = 2020, int month = 3, int day = 27)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate4()
//{
//	//Date4 d;//������ΪDate4�к��ж�����캯������������ʱ��֪�õ����ĸ���
//}
//
//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time ()" << endl;
//	}
//
//	Time()
//	{
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//
//};
//
//class Date5
//{
//private:
//	//��������
//	int _year;
//	int _month;
//	int _day;
//	//�Զ�������
//	Time _t;
//};
//
//void TestDate5()
//{
//	Date5 d5;
//}
//
////��Ա�������������
//class Date6
//{
//public:
//	Date6(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//};
//
////��Ա����������һ���������
//class Date7
//{
//public:
//	Date7 (int year)
//	{
//		m_year = year;
//	}
//private:
//	int m_year;
//};
//
//int main()
//{
//	Date1 d1, d2;
//
//	d1.SetDate(2020, 1, 24);
//	d2.SetDate(2020, 3, 26);
//
//	d1.Display();
//	d2.Display();
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <cstring>

using namespace std;

//��Ԫ��Ϊ��Ԫ��������Ԫ��
//��Ԫ�ṩ��һ��ͻ�Ʒ�װ�ķ�ʽ�����ṩ����������ͬ�����������

//��Ԫ����
class Date
{
friend ostream& operator<<(ostream& _cout, const Date& d);
friend istream& operator>>(istream& _cin, const Date& d);
public:
	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
	{

	}
public:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << " " << d._month << " " << d._day << endl;

	return _cout;
}

istream& operator>>(istream& _cin, Date& d)
{
	_cin >> d._year;
	_cin >> d._month;
	_cin >> d._day;

	return _cin;
}

//1����Ԫ�������Է���˽�г�Ա�������ǳ�Ա����
//2����Ԫ����������const����
//3����Ԫ�����������ඨ����κεط�����������������޶���������
//4��һ�����������Ƕ�������Ԫ����
//5����Ԫ�����ĵ��ú���ͨ�������õ�ԭ����ͬ

int main()
{
	Date d(2020, 3, 28);
	cin >> d;
	cout << d << endl;
	system("pause");
	return 0;
}

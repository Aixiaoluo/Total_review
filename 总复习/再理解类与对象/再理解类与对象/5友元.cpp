#include <iostream>

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
private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << " " << d._month << " " << d._day << endl;
	return _cout;
}

istream& operator>>(istream& _cin, const Date& d)
{
	_cin >> d._year;
	_cin >> d._month;
	_cin >> d._day;
	return _cin;
}



int main()
{
	Date d(2020, 3, 28);
	d << cout;
	system("pause");
	return 0;
}

#include <iostream>

using namespace std;

//��Ԫ��ĸ���
//��Ԫ������г�Ա��������������һ�������Ԫ�����������Է�����һ�����еķǹ��г�Ա
//
//
//ע��
//1����Ԫ��ϵ�ǵ���ģ������н�����
//2����Ԫ��ϵ���ܴ���

class Date;//ǰ������

class Time
{
	friend class Date;//����DateΪTime����Ԫ�࣬��Date���п��Է���Time���˽�г�Ա
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{
		
	}


private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 2020, int month = 3, int day = 30)
		:_year(year)
		, _month(month)
		, _day(day)
	{

	}

	void SetTimeOfDate(int hour, int minute, int second)
	{
		//ֱ�ӷ���Time���˽�г�Ա����
		_t._hour = hour;
		_t._minute = minute;
		_t._second = second;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};

int main()
{

	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

//C++Ϊ����ǿ����Ŀɶ��ԣ���������������أ�����������Ǿ������⺯�����ĺ�����
//��������Ϊ���ؼ���operator���������Ҫ���ص����������
//����ԭ�ͣ�����ֵ����operator�������������б�

//ע��
//1������ͨ���������������������µĲ�����������operator@
//2�����ز�����������һ�������ͻ���ö�����͵Ĳ�����
//3�������������͵Ĳ��������京�岻�ܸı䣬���磺��������+�����ܸı��京��
//4����Ϊ���Ա�����غ���ʱ�����βο������Ȳ���������Ŀ��1��Ա�����Ĳ�������һ��Ĭ�ϵ��β�this���޶�Ϊ��һ���β�
//5��. * :: sizeof ? : ��������

//��ֵ���������
//1����������
//2������ֵ
//3������Ƿ��Լ����Լ���ֵ
//4������*this
//5������û����ʾ���壬���������Զ����ɣ���ɶ����ֽ����ֵ����

//ȫ�ֵ�operator==
class Date1
{
public:
	Date1(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
public:
	int _year;
	int _month;
	int _day;
};

//����operator��ȫ�ֵģ���ô��װ�Բ��ܱ���֤
//�˴�����������Ԫ����ֱ�����ɳ�Ա����
bool operator==(const Date1& d1, const Date1& d2)
{
	return d1._year == d2._year && d1._month == d2._month && d1._day == d2._day;
}

class Date2
{
public:
	Date2(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//bool operator==(Date* this, const Date& d2)
	//�˴����������thisָ��ĵ��ú����Ķ���
	bool operator==(const Date2& d2)
	{
		return _year == d2._year && _month == _month && _day == _day;
	}
public:
	int _year;
	int _month;
	int _day;
};

class Date3
{
public:
	Date3(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date3(const Date3& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	Date3& operator=(const Date3& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
	}
public:
	int _year;
	int _month;
	int _day;
};

class Date4
{
public:
	Date4(int year = 2020, int month = 3, int day = 28)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	bool operator==(const Date4& d2)
	{
		return _year == d2._year && _month == _month && _day == _day;
	}
public:
	int _year;
	int _month;
	int _day;
};

class String
{
public:
	String(const char* str = "")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}

	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};

int main()
{
	Date1 d1(2020, 3, 27);
	Date1 d2(2020, 3, 28);
	cout << (d1 == d2) << endl;

	Date2 d3(2020, 3, 28);
	Date2 d4(2020, 3, 28);
	cout << (d3 == d4) << endl;

	Date4 d5;
	Date4 d6(2020, 3, 28);
	d5 = d6;
	cout << (d5 == d6) << endl;

	String s1("Hello");
	String s2("World");

	s1 = s2;

	system("pause");
	return 0;
}

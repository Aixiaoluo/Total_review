#include <iostream>

using namespace std;

//ȡ��ַ���������
//constȡ��ַ���������

//ע�����������������һ��Ĭ�ϸ����� ����������������������ء�
class Date
{
public:
	Date* operator&()
	{
		return this;
	}

	const Date* operator&()const{
		return this;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{

	system("pause");
	return 0;
}
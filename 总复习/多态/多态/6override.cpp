#include <iostream>

using namespace std;

//override���ε��麯����������������麯���Ƿ���д�˻����ĳ���麯��������û����д�����뱨��
class Car
{
public:
	virtual void Drive()
	{
		cout << "Car" << endl;
	}
};

class Benz : public Car
{
public:
	virtual void Drive() override
	{
		cout << "Benz" << endl;
	}
};

int main()
{

	system("pause");
	return 0;
}

#include <iostream>

using namespace std;

//final���ε��麯�������ٱ��̳�

class Car
{
public:
	virtual void Drive() final
	{
		cout << "Car" << endl;
	}
};

class Benz : public Car
{
public:
	virtual void Drive()
	{
		cout << "Benz" << endl;
	}
};

int main()
{

	system("pause");
	return 0;
}

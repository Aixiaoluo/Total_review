#include <iostream>

using namespace std;

class ClassName
{
	//���壺�ɳ�Ա�����ͳ�Ա�������
};//�����ŵĽ�β����ӷֺ�

//����:
class Person
{
public:
	void ShowInfo()
	{
		cout << _name << " " << _sex << " " << _age << endl;
	}
public:
	char* _name;
	char* _sex;
	int _age;
};

int main()
{

	system("pause");
	return 0;
}

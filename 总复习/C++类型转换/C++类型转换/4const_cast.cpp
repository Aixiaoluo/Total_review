#include <iostream>

using namespace std;

//const_cast����ȥ��������const����

int main()
{
	const int a = 2;
	int* p = const_cast<int*>(&a);
	*p = 3;
	cout << a << endl;
	system("pause");
	return 0;
}

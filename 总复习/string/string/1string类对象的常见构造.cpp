#include <iostream>
#include <string>

using namespace std;

void TestString1()
{
	string s1;//����յ�string�����s1
	string s2("Hello, World!");//c��ʽ����string������s2
	string s3(s2);//��������s3
	string s4(10, 'a');//����10���ַ�'a'�ַ�

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

int main()
{
	TestString1();
	system("pause");
	return 0;
}

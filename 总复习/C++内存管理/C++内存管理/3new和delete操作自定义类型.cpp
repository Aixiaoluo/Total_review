#include <iostream>

using namespace std;

//new��delete�����Զ�������
class Test
{
public:
	Test()
		:_data(0)
	{
		cout << "Test()" << endl;
	}

	~Test()
	{
		cout << "~Test()" << endl;
	}
private:
	int _data;
};

void Test1()
{
	Test *p1 = (Test*)malloc(sizeof(Test));
	free(p1);

	Test *p2 = (Test*)malloc(sizeof(Test)* 10);
	free(p2);
}

void Test2()
{
	Test *p3 = new Test;
	delete p3;

	Test *p4 = new Test[10];
	delete[] p4;
}
//�������Զ������ƿռ��ʱ��new����ù��캯����delete�����������������malloc��free�������
int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}

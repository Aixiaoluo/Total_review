#include <iostream>
#include <vector>

using namespace std;

void TestInsertErase()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

	//ɾ�����µ������Ƿ����ʵ�ʧЧ
	vector<int>::iterator pos = find(v.begin(), v.end(), 3);

	v.erase(pos);
	cout << *pos << endl;

	//���뵼�����ݣ����ݺ�posָ���µĿռ䣬ԭ���Ŀռ��Ѿ����ͷ�
	pos = find(v.begin(), v.end(), 3);

	v.insert(pos, 30);
	cout << *pos << endl;
}

void TestVector()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if (*it % 2 == 0)
		{
			it = v.erase(it);
		}
		else
		{
			it++;
		}
	}
	cout << endl;

	//ʧЧ
	/*it = v.begin();
	for (; it != v.end(); it++)
	{
		if (*it % 2 == 0)
		{
			v.erase(it);
		}
	}
	cout << endl;*/


}

int main()
{
	//TestInsertErase();
	TestVector();

	system("pause");
	return 0;
}

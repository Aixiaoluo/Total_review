#include <iostream>
#include <unordered_map>

using namespace std;

//unordered_multimap���ĵ�����
//1�����������Ǵ洢�ɼ�ֵ��ӳ��ֵ��϶��ɵ�Ԫ�صĹ����������ǳ�������unordered_map��������������ͬ��Ԫ�ؾ��еȼ۵ļ���
//2����unordered_������ap�У���ֵͨ������Ωһ�ر�ʶԪ�أ���ӳ���ֵ��һ���������а�����ü�����������ݡ�����ӳ��ֵ�����Ϳ��ܲ�ͬ��
//3�����ڲ�, unordered_multimap�е�Ԫ��û�����κ��ض���˳������Թؼ���ӳ��ֵ, ����֯��Ͱȡ�������ǵ�ɢ��ֵ, �Ա���ٷ��ʵ���Ԫ��ֱ�ӵļ�ֵ(ƽ��һ���㶨��ƽ��ʱ�临�Ӷ�)��
//4�����еȼۼ���Ԫ�ر�������ͬһ��bucket�У����ҵ�����(�μ�equal_range)���Ա�������Ԫ�ء�
//5�������еĵ�����������ǰ���������
//6��ע������������������Լ���ͷ�ļ��ж���ģ����ǹ���ͷ�ļ� <unordered_map>��

int main()
{
	unordered_multimap<std::string, int>
		first,
		second = { { "AAPL", 200 }, { "GOOG", 100 } };

	pair<std::string, int> mypair("MSFT", 500);

	first.insert(mypair);                            // copy insertion
	first.insert(make_pair("GOOG", 50)); // move insertion
	first.insert(second.begin(), second.end());  // range insertion
	first.insert({ { "ORCL", 100 }, { "GOOG", 100 } });    // initializer list insertion

	unordered_multimap<string, string> myumm = {
		{ "strawberry", "red" },
		{ "banana", "yellow" },
		{ "orange", "orange" },
		{ "lemon", "yellow" },
		{ "apple", "red" },
		{ "apple", "green" },
		{ "pear", "green" },
	};


	// erase examples:
	myumm.erase(myumm.begin());     // erasing by iterator
	myumm.erase("apple");             // erasing by key (erases 2 elements)
	myumm.erase(myumm.find("orange"), myumm.end()); // erasing by range

	unordered_multimap<string, string>
		a = { { "orange", "FL" }, { "apple", "NY" }, { "apple", "WA" } },
		b = { { "strawberry", "LA" }, { "strawberry", "NC" }, { "pear", "OR" } };

	a.swap(b);

	cout << myumm.empty() << endl;
	cout << myumm.size() << endl;
	cout << myumm.max_size() << endl;

	system("pause");
	return 0;
}

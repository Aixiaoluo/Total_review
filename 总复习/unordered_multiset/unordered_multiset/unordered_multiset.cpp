#include <iostream>
#include <unordered_set>
#include <array>

using namespace std;

//unordered_multiset
//1��������һ�����������Բ��ض���˳��洢Ωһ��Ԫ�أ����������Ԫ�ص�ֵ���ټ�������Ԫ�ء�
//2����unordered_set�У�Ԫ�ص�ֵͬʱ��Ψһ��ʶ���ļ������ǲ��ɱ�ģ���ˣ�unordered_set�е�Ԫ�ز������������޸�һ�Ρ����������ǿ��Բ����ɾ����
//3�����ڲ���unordered_set�е�Ԫ��û�а����κ��ض���˳�����򣬶��Ǹ������ǵ�ɢ��ֵ��֯��Ͱ���Ӷ�����ͨ�����ǵ�ֱֵ�ӿ��ٷ��ʵ���Ԫ��(ƽ��ʱ�临�Ӷ�Ϊ����)��
//4��unordered_set������set���������ͨ�����ǵļ����ʵ���Ԫ�أ�����������Ԫ���Ӽ��ķ�Χ������ͨ��Ч�ʽϵ͡�
//5�������еĵ�����������ǰ���������

int main()
{
	unordered_set<string> myset = { "yellow", "green", "blue" };
	array<string, 2> myarray = { "black", "white" };
	string mystring = "red";

	myset.insert(mystring);                        // copy insertion
	myset.insert(mystring + "dish");                 // move insertion
	myset.insert(myarray.begin(), myarray.end());  // range insertion
	myset.insert({ "purple", "orange" });           // initializer list insertion
	
	unordered_set<string> myset =
	{ "USA", "Canada", "France", "UK", "Japan", "Germany", "Italy" };

	myset.erase(myset.begin());                    // erasing by iterator
	myset.erase("France");                         // erasing by key
	myset.erase(myset.find("Japan"), myset.end()); // erasing by range
	
	unordered_set<std::string>
		first = { "iron", "copper", "oil" },
		second = { "wood", "corn", "milk" };

	first.swap(second);

	cout << first.empty() << endl;
	cout << first.size() << endl;
	cout << first.max_size() << endl;

	system("pause");
	return 0;
}

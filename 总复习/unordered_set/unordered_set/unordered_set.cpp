#include <iostream>
#include <unordered_set>
#include <array>
#include <string>
using namespace std;

//unordered_set�ĵ����
//1��������һ�����������Բ��ض���˳��洢Ωһ��Ԫ�أ����������Ԫ�ص�ֵ���ټ�������Ԫ�ء�
//2����unordered_set�У�Ԫ�ص�ֵͬʱ��Ψһ��ʶ���ļ������ǲ��ɱ�ģ�ֻ����ɾ�������޸�
//3�����ڲ���unordered_set�е�Ԫ��û�а����κ��ض���˳�����򣬶��Ǹ������ǵ�ɢ��ֵ��֯��Ͱ���Ӷ�����ͨ�����ǵ�ֱֵ�ӿ��ٷ��ʵ���Ԫ��(ƽ��ʱ�临�Ӷ�Ϊ����)��
//4��unordered_set������set���������ͨ�����ǵļ����ʵ���Ԫ�أ�����������Ԫ���Ӽ��ķ�Χ������ͨ��Ч�ʽϵ͡�
//5�������еĵ�����������ǰ���������

int main()
{
	unordered_set<string> myset1 = { "yellow", "green", "blue" };
	array<string, 2> myarray = { "black", "white" };
	string mystring = "red";

	myset1.insert(mystring);                        // copy insertion
	myset1.insert(mystring + "dish");                 // move insertion
	myset1.insert(myarray.begin(), myarray.end());  // range insertion
	myset1.insert({ "black", "white" });           // initializer list insertion


	unordered_set<std::string> myset2 =
	{ "USA", "Canada", "France", "UK", "Japan", "Germany", "Italy" };

	myset2.erase(myset2.begin());                    // erasing by iterator
	myset2.erase("France");                         // erasing by key
	myset2.erase(myset2.find("Japan"), myset2.end()); // erasing by range
	
	//capacity
	cout << myset1.size() << endl;
	cout << myset2.size() << endl;
	cout << myset1.empty() << endl;
	cout << myset2.empty() << endl;

	myset1.clear();
	myset2.clear();

	cout << myset1.size() << endl;
	cout << myset2.size() << endl;
	cout << myset1.empty() << endl;
	cout << myset2.empty() << endl;

	system("pause");
	return 0;
}

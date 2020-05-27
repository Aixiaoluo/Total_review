#include <iostream>
using namespace std;
#include <unordered_map>


//unordered_map�ĵ�����
//1��unordered_map�Ǵ洢<key, value>��ֵ�ԵĹ���ʽ������������ͨ��key���ٵ������������Ӧ��value
//2��unordered_map�У���ֵͨ������Ωһ�ı�ʶԪ�أ���ӳ��ֵ��һ��������������˼�����������ӳ������Ϳ��Բ�ͬ
//3�����ڲ���unordered_mapû�ж�<key, value>��������unordered_map����ͬ��ϣֵ�ļ�ֵ�Է��ڶ�Ӧ��Ͱ��
//4��unordered_map����ͨ��key���ʵ���Ԫ�ر�map�죬��������Ԫ���Ӽ��ķ�Χ�͵�������Ч�ʽϵ�
//5��unordered_mapʵ����ֱ�ӷ��ʲ�������operator[]������ͨ��key��Ϊ��������value
//6��unordered_map�ĵ�����������ǰ�������

int main()
{
	unordered_map<string, double>
		myrecipe,
		mypantry = { { "milk", 2.0 }, { "flour", 1.5 } };

	pair<string, double> myshopping("baking powder", 0.3);

	myrecipe.insert(myshopping);                        // copy insertion
	myrecipe.insert(pair<string, double>("eggs", 6.0)); // move insertion
	myrecipe.insert(mypantry.begin(), mypantry.end());  // range insertion
	myrecipe.insert({ { "sugar", 0.8 }, { "salt", 0.1 } });    // initializer list insertion

	unordered_map<std::string, std::string> mymap;

	// populating container:
	mymap["U.S."] = "Washington";
	mymap["U.K."] = "London";
	mymap["France"] = "Paris";
	mymap["Russia"] = "Moscow";
	mymap["China"] = "Beijing";
	mymap["Germany"] = "Berlin";
	mymap["Japan"] = "Tokyo";

	// erase examples:
	mymap.erase(mymap.begin());      // erasing by iterator
	mymap.erase("France");             // erasing by key
	mymap.erase(mymap.find("China"), mymap.end()); // erasing by range

	//capacity examples:
	cout << mymap.size() << endl;
	cout << mymap.empty() << endl;

	mymap.clear();
	cout << mymap.size() << endl;
	cout << mymap.empty() << endl;

	system("pause");
	return 0;
}

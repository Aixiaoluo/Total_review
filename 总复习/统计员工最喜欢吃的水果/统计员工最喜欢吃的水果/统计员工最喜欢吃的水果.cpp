#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Compare
{
public:
	bool operator()(pair<string, int>& left, pair<string, int>& right)
	{
		return left.second > right.second;
	}
};

void GetFavoriteFruit(const vector<string>& fruits, size_t k)
{
	map<string, int> CountMap;
	for (auto& e : fruits)
	{
		CountMap[e]++;
	}

	vector<pair<string, int>> v;
	for (auto& e : CountMap)
	{
		v.push_back(e);
	}

	sort(v.begin(), v.end(), Compare());

	for (int i = 0; i < k; i++)
	{
		cout << v[i].first << ":" << v[i].second << endl;
	}
}

int main()
{
	vector<string> v = { "ƻ��", "ƻ��", "ƻ��", "ƻ��", "�㽶", "����", "�㽶", "�㽶", "�㽶", "����", "����", "����", "����", "����", "����", "��÷", };
	GetFavoriteFruit(v, 2);
	system("pause");
	return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

class Compare1
{
public:
	bool operator()(pair<string, int>& left, pair<string, int>& right)
	{
		return left.second > right.second;
	}
};

class Compare2
{
public:
	bool operator()(pair<string, int>& left, pair<string, int>& right)
	{
		return left.second < right.second;
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

	sort(v.begin(), v.end(), Compare1());

	for (int i = 0; i < k; i++)
	{
		cout << v[i].first << ":" << v[i].second << endl;
	}
	cout << endl;

	priority_queue<pair<string, int>, vector<pair<string, int>>, Compare2> pq;
	int i = 0;
	for (auto& e : CountMap)
	{
		if (i < k)
		{
			pq.push(e);
		}
		else
		{
			if (e.second > pq.top().second)
			{
				pq.pop();
				pq.push(e);
			}
		}
	}

	for (int i = 0; i < pq.size(); i++)
	{
		cout << pq.top().first << ":" << pq.top().second << endl;
		pq.pop();
	}
}

int main()
{
	vector<string> v = { "ƻ��", "ƻ��", "ƻ��", "ƻ��", "�㽶", "����", "�㽶", "�㽶", "�㽶", "����", "����", "����", "����", "����", "����", "��÷", };
	GetFavoriteFruit(v, 2);
	system("pause");
	return 0;
}

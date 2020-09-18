#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//�ж�x��y�Ƿ�����
bool isRoad(vector<vector<int>>&road, int x, int y)
{
	for (int i = 0; i < road.size(); i++)
	{
		if (road[i][0] == x && road[i][1] == y)
		{
			return true;
		}
	}
	return false;
}

//����a��b������b��c����������£�a��c������·
void AddRoad(vector<vector<int>>& road)
{
	if (road.empty())
	{
		return;
	}

	vector<int> tmp;

	for (int i = 0; i < road.size(); i++)
	{
		for (int j = 0; j < road.size(); j++)
		{
			if (road[i][0] == road[j][0] && i != j)
			{
				tmp.push_back(road[i][1]);
				tmp.push_back(road[j][1]);
				road.push_back(tmp);
				tmp.clear();
			}

			if (road[i][0] == road[j][1] && i != j)
			{
				tmp.push_back(road[i][1]);
				tmp.push_back(road[j][0]);
				road.push_back(tmp);
				tmp.clear();
			}

			if (road[i][1] == road[j][0] && i != j)
			{
				tmp.push_back(road[i][0]);
				tmp.push_back(road[j][1]);
				road.push_back(tmp);
				tmp.clear();
			}

			if (road[i][1] == road[j][1] && i != j)
			{
				tmp.push_back(road[i][0]);
				tmp.push_back(road[j][0]);
				road.push_back(tmp);
				tmp.clear();
			}
		}
	}
	return;
}

int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<int>> road(m, vector<int>(2));
	vector<vector<int>> qus(q, vector<int>(2));
	vector<bool> res;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> road[i][j];
		}
	}

	for (int i = 0; i < q; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> qus[i][j];
		}
	}

	//����a��b������b��c����������£�a��c������·
	AddRoad(road);
	for (int i = 0; i < road.size(); i++)
	{
		for (int j = 0; j < road[i].size(); j++)
		{
			cout << road[i][j] << ' ';
		}
		cout << endl;
	}

	//ÿ����·��С�������
	for (int i = 0; i < road.size(); i++)
	{
		sort(road[i].begin(), road[i].end());
	}

	//ÿ����ѯ��С�������
	for (int i = 0; i < qus.size(); i++)
	{
		sort(qus[i].begin(), qus[i].end());
	}
	//����x��y֮���Ƿ�����
	for (int i = 0; i < qus.size(); i++)
	{
		res.push_back(isRoad(road, qus[i][0], qus[i][1]));
	}

	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << endl;
	}
	return 0;
}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution
//{
//public:
//	vector<vector<int>> generate(int numRows)
//	{
//		vector<vector<int>> vv;
//		vv.resize(numRows);
//
//		for (int i = 1; i <= numRows; i++)
//		{
//			vv[i - 1].resize(i, 0);
//			vv[i - 1][0] = 1;
//			vv[i - 1][i - 1] = 1;
//		}
//
//		for (int i = 0; i < vv.size();  i++)
//		{
//			for (int j = 0; j < vv[i].size(); j++)
//			{
//				if (vv[i][j] == 0)
//				{
//					vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//				}
//			}
//		}
//		return vv;
//	}
//};
//
//int main()
//{
//	Solution s;
//
//	vector<vector<int>> v;
//	v = s.generate(34);
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = 0; j < v[i].size(); j++)
//		{
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

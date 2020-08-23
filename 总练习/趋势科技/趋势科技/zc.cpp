//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void fibo()
//{
//	int n;
//	cin >> n;
//
//	if (n < 1) return;
//
//	int m = n * n;
//
//	vector<int> vc(m + 1, 0);
//	vc[0] = 0;
//	vc[1] = 1;
//	vc[2] = 1;
//
//	for (int i = 3; i < m + 1; ++i)
//	{
//		vc[i] = vc[i - 1] + vc[i - 2];
//	}
//
//	vector<vector<int> > res(n, vector<int>(n, 0));
//
//	int left = 0, right = n - 1;
//	int up = 0, down = n - 1;
//
//	int l = left, r = right;
//	int u = up, d = down;
//
//	int ind = m;
//	for (int i = 0; i <= n; ++i)   //��������ڲ��ӡ   ���˳��������п���
//	{
//		if (left == right)    //nΪ����ʱ�����ڲ�1eft == right����ʱ����ѭ��
//		{
//			res[up][left] = vc[m];
//			break;
//		}
//		l = left;
//		for (; l <= right; ++l)    //��Ȧ������һ��
//		{
//			res[up][l] = vc[m--];
//		}
//		up++;
//		u = up;
//		for (; u <= down; ++u)   //��Ȧ�ұ�һ��
//		{
//			res[u][right] = vc[m--];
//		}
//		right--;
//		r = right;
//		for (; r >= left; --r) //��Ȧ�±�һ��
//		{
//			res[down][r] = vc[m--];
//		}
//		down--;
//		d = down;
//		for (; d >= up; --d)    //��Ȧ���һ��
//		{
//			res[d][left] = vc[m--];
//		}
//		left++;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cout << res[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	fibo();
//	return 0;
//}
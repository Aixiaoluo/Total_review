//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//
//using namespace std;
//
//class Solution
//{
//public:
//	//��num��λ����vector<int> tmp��
//	//��num����������(���û����㷨)��vector<vector<int>> res;
//	//�ж��µ������û��0~25������ ��ɾ��  �����ά���������  ���ǲ�ͬ�ķ��뷽��
//	int translateNum(int num)
//	{
//		vector<int> tmp;
//		vector<vector<int>> res;
//		while (num)
//		{
//			tmp.push_back(num % 10);
//			num /= 10;
//		}
//		int left = 0;
//		int right = tmp.size() - 1;
//		while (left < right)
//		{
//			swap(tmp[left], tmp[right]);
//			left++;
//			right--;
//		}
//
//			
//
//		return 0;
//	}
//};
//
//int main()
//{
//	Solution a;
//	a.translateNum(12158);
//
//	return 0;
//}
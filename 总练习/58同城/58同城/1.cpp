#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
	vector<string> findCommonString(string** values, int valuesRowLen, int* valuesColLen)
	{
		//1�����ַ�����ά��������vector<vector<string>>��
		//2�����������ά���飬�ж������ά�����ÿһ�еĵ�j���Ƿ���ͬ
		//3������ͬ�Ķ�ά�������vector<string> res�У�����res

		//Ҳ���Խ���ά���鵼��һά����res��  ����mapͳ��string�������ڶ�ά�������±��ʱ���򷵻���Щstring��Ϊ�����
		vector<string> res;
		vector<vector<string>> src(valuesRowLen, vector<string>(*valuesColLen));
		map<string, int> m;
		for (int i = 0; i < valuesRowLen; i++)
		{
			for (int j = 0; j < *valuesColLen; j++)
			{
				src[i][j] = *(*(values + i) + j);
			}
		}

		int index = 0;
		for (int i = 0; i < src.size(); i++)
		{
			for (int j = 0; j < src[i].size(); j++)
			{
				res[index++] = src[i][j];
			}
		}

		for (int i = 0; i < res.size(); i++)
		{
			
		}

		return res;
	}
};

int main()
{

	return 0;
}
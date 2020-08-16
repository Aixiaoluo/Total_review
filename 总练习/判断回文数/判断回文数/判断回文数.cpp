#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	/**
	 * �ж��Ƿ��ǻ���
	 * @param str char�ַ���һά���� �����ַ���
	 * @param strLen int str���鳤��
	 * @return bool������
	 */
	bool CheckPalindrome(char* str, int strLen) {
		int left = 0;
		int right = strLen - 1;
		while (left < right)
		{
			if (*(str + left) != *(str + right))
			{
				return false;
			}
			left++;
			right--;
		}

		return true;
	}
};


int main()
{
	char str[] = "abcdef";
	char str1[] = "abcba";
	int len = 6;
	int len1 = 5;
	Solution a;
	cout << a.CheckPalindrome(str, len) << endl;
	cout << a.CheckPalindrome(str1, len1) << endl;
	return 0;
}
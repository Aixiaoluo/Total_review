#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n)
		{
			if (n & 1)
			{
				count++;
			}

			n >>= 1;
		}

		cout << count << endl;
	}
	system("pause");
	return 0;
}

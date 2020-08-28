#include <iostream>


using namespace std;

long QuickPow(long a, long b, long c)//���������ָ����ģ
{
	long res = 1;//�����ʼΪ1
	long A = a % c;//����
	//�ȶԵ���ȡģһ��
	while (b)
	{
		if (b & 1)
		{
			res = (res * A) % c;//ע��ȡģ��ֹ���
		}
		b >>= 1;
		A = (A * A) % c;//ͬ��ȡģ��ֹ���
	}
	return res;
}

long exgcd(long a, long b, long& x, long& y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	long gcd = exgcd(b, a%b, x, y);
	long x1 = x;
	long y1 = y;
	x = y1;
	y = x1 - (a / b) * y1;
	return gcd;
}

int main()
{
	cout << QuickPow(10, 100, 67) << endl;
	long x, y;
	cout << exgcd(10, 51, x, y) << endl;
	cout << x << " " << y << endl;
	return 0;
}
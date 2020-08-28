#include "rsa.h"

void testRsa()
{
	//1��������������������д������Լ��ƽp, q
	//2������n = p * q
	//3������ŷ������orla(n) = (p - 1) * (q - 1)
	//4�����ѡȡe��֤1 <= e <= orla(n) && e �� orla(n)����
	//5������e��orla(n)��ģ��Ԫ��d��ʹ��d * e = 1(mod orla(n))
	//6������һ�Թ�Կ��˽Կ(e, n) (d, n)
	RSA rsa;
	DataType p = rsa.getPrime();
	std::cout << "p:" << p << std::endl;
	DataType q = rsa.getPrime();
	std::cout << "q:" << q << std::endl;
	DataType n = rsa.getNkey(p, q);
	std::cout << "n:" << n << std::endl;
	DataType orla = rsa.getOrla(p, q);
	std::cout << "orla:" << orla<< std::endl;
	DataType e = rsa.getEkey(orla);
	std::cout << "e:" << e << std::endl;
	DataType d = rsa.getDkey(e, orla);
	std::cout << "d:" << d << std::endl;
	std::cout << "(e, n) <==> (" << e << ',' << n << ')' << std::endl;
	std::cout << "(d, n) <==> (" << d << ',' << n << ')' << std::endl;

}

int main()
{
	testRsa();

	return 0;
}
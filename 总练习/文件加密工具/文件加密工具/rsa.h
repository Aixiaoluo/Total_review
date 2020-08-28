#define BOOST_NO_CXX11_VARIADIC_TEMPLATES

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>//������
#include <boost/multiprecision/random.hpp>//�������������
#include <boost/multiprecision/miller_rabin.hpp>//�������Լ��

//1��������������������д������Լ��ƽp, q
//2������n = p * q
//3������ŷ������orla(n) = (p - 1) * (q - 1)
//4�����ѡȡe��֤1 <= e <= orla(n) && e �� orla(n)����
//5������e��orla(n)��ģ��Ԫ��d��ʹ��d * e = 1(mod orla(n))
//6������һ�Թ�Կ��˽Կ(e, n) (d, n)

typedef boost::multiprecision::int1024_t DataType;

struct Key
{
	DataType m_eKey;
	DataType m_dKey;
	DataType m_nKey;
};

class RSA
{
public:
	bool isPrime(DataType num);
	DataType ecrept(DataType a, DataType b, DataType c);
	DataType getPrime();
	DataType getNkey(DataType p, DataType q);
	DataType getOrla(DataType p, DataType q);
	DataType getEkey(DataType orla);
	DataType getDkey(DataType eKey, DataType orla);
	DataType getGcd(DataType a, DataType b);
	DataType getExgcd(DataType a, DataType b, DataType x, DataType y);
private:
	Key m_key;
};

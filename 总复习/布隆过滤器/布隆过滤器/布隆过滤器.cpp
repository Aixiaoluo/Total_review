#include <iostream>

using namespace std;

// ���貼¡��������Ԫ������ΪK��ÿ��Ԫ�ض�Ӧ5����ϣ����
template<class K, class KToInt1 = KeyToInt1, class KToIn
class KToInt3 = KeyToInt3, class KToIn
class KToInt5 = KeyToInt5>
class BloomFilter
{
public:
	BloomFilter(size_t size) // ��¡��������Ԫ�ظ���
		: _bmp(5 * size), _size(0)
	{}
	bool Insert(const K& key)
	{
		size_t bitCount = _bmp.Size();
		size_t index1 = KToInt1()(key) % bitCount;
		size_t index2 = KToInt2()(key) % bitCount;
		size_t index3 = KToInt3()(key) % bitCount;
		size_t index4 = KToInt4()(key) % bitCount;
		size_t index5 = KToInt5()(key) % bitCount;
		_bmp.Set(index1); _bmp.Set(index2); _bmp.Set(inde
			_bmp.Set(index4); _bmp.Set(index5);
		_size++;
	}
private:
	bitset _bmp;
	size_t _size; // ʵ��Ԫ�صĸ���
};

int main()
{

	system("pause");
	return 0;
}

#include <iostream>

using namespace std;

//��ģ�����һ������壬����ģ���������޹أ���ʹ��ʱ��������������ʵ�����Ͳ�������ض����Ͱ汾

//��ģ��ĸ�ʽ��
//template<class T1, class T2, ��, class Tn>
//class ��ģ����
//{
//	����
//}

template<class T>
class Vector
{
public:
	Vector(size_t capacity)
		:_pData(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{

	}

	~Vector();

	void PushBack()
	{
		_pData[_size] = x;
		_size++;
	}

	size_t Size()
	{
		return _size;
	}

	T& operator[](size_t pos)
	{
		if (pos < _size)
		{
			return _pData[pos];
		}
	}

private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};

//ע������ģ��������ж���ʱҪ��ģ������б�
template<class T>
Vector<T>::~Vector()
{
	if (_pData)
	{
		delete[] _pData;
	}
	_size = 0;
	_capacity = 0;
}

//��ģ��ʵ������Ҫ����ģ�����ֺ����<>��Ȼ��ʵ���������ͷ���<>�м��ɡ�
//ע��ʵ�����Ľ��������������
int main()
{
	Vector<int> s1(10);
	Vector<double> s2(20);
	system("pause");
	return 0;
}

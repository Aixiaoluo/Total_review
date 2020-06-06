#pragma once

template<class V>
struct HashBucketNode
{
	HashBucketNode(const V& data)
	: _pNext(nullptr), _data(data)
	{}
	HashBucketNode<V>* _pNext;
	V _data;
};
// ������ʵ�ֵĹ�ϣͰ��key��Ψһ��
template<class V, class HF = DefHashF<T> >
class HashBucket
{
	typedef HashBucketNode<V> Node;
	typedef Node* PNode;
public:
	HashBucket(size_t capacity = 3) : _size(0)
	{
		_ht.resize(GetNextPrime(capacity), nullptr);
	}
	// ��ϣͰ�е�Ԫ�ز����ظ�
		PNode* Insert(const V& data)
	{
			// ȷ���Ƿ���Ҫ���ݡ�����
			// _CheckCapacity();
			// 1. ����Ԫ�����ڵ�Ͱ��
			size_t bucketNo = HashFunc(data);
			// 2. ����Ԫ���Ƿ���Ͱ��
			PNode pCur = _ht[bucketNo];
			while (pCur)
			{
				if (pCur->_data == data)
					return pCur;
				pCur = pCur->_pNext;
			}
			// 3. ������Ԫ��
			pCur = new Node(data);
			pCur->_pNext = _ht[bucketNo];
			_ht[bucketNo] = pCur;
			_size++;
			return pCur;
		}
	// ɾ����ϣͰ��Ϊdata��Ԫ��(data�����ظ�)������ɾ��Ԫ�ص���һ���ڵ�
	PNode* Erase(const V& data)
	{
		size_t bucketNo = HashFunc(data);
		PNode pCur = _ht[bucketNo];
		PNode pPrev = nullptr, pRet = nullptr;
		while (pCur)
		{
			if (pCur->_data == data)
			{
				if (pCur == _ht[bucketNo])
					_ht[bucketNo] = pCur->_pNext;
				else
					pPrev->_pNext = pCur->_pNext;
				pRet = pCur->_pNext;
				delete pCur;
				_size--;
				return pRet;
			}
		}
		return nullptr;
	}
		PNode* Find(const V& data);
	size_t Size()const;
	bool Empty()const;
	void Clear();
	bool BucketCount()const;
	void Swap(HashBucket<V, HF>& ht;
	~HashBucket();
private:
	size_t HashFunc(const V& data);
private:
	vector<PNode*> _ht;
	size_t _size; // ��ϣ������ЧԪ�صĸ���
};
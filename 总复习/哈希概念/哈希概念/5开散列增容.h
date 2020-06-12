#pragma once

void _CheckCapacity()
{
	size_t bucketCount = BucketCount();
	if (_size == bucketCount)
	{
		HashBucket<V, HF> newHt(bucketCount);
		for (size_t bucketIdx = 0; bucketIdx < bucketCount; ++bucketIdx)
		{
			PNode pCur = _ht[bucketIdx];
			while (pCur)
			{
				// ���ýڵ��ԭ��ϣ���в����
				_ht[bucketIdx] = pCur->_pNext;
				// ���ýڵ���뵽�¹�ϣ����
				size_t bucketNo = newHt.HashFunc(pCur->_data);
				pCur->_pNext = newHt._ht[bucketNo];
				newHt._ht[bucketNo] = pCur;
				pCur = _ht[bucketIdx];
			}
		}
		newHt._size = _size;
		this->Swap(newHt);
	}
}
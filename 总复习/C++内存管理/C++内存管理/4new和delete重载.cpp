//#include <iostream>
//
//using namespace std;
//
//operator new��operator delete��ϵͳ�ṩ��ȫ�ֺ�����
//new�ڵײ����operator newȫ�ֺ���������ռ�
//delete�ڵײ����operator deleteȫ�ֺ������ͷſռ�
//
//operator newͨ������malloc������ռ䣬��malloc����ռ�ĳɹ�ʱֱ�ӷ��أ�
//����ռ�ʧ�ܳ���ִ�пռ䲻���Ӧ�Դ�ʩ�������Ӧ�Դ�ʩ�û������ˣ���������룬�����׳��쳣
//operator delete�����ͨ��free���ͷſռ��
//
//void* _CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
//{
//	try to allocate size bytes
//	void *p;
//	while ((p = malloc(size)) == 0)
//	{
//		if (_callnewh(size) == 0)
//		{
//			report no memory
//			����ʧ�ܣ��׳�bad_alloc�쳣
//			static const bad_alloc nomem;
//			_RAISE(nomem)
//		}
//	}
//	return (p);
//}
//
//operator delete�ú���������ͨ��free���ͷſռ��
//void operator delete(void *pUserData)
//{
//	_CrMemblockHeader *pHead;
//
//	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//
//	if (pUserData == NULL)
//	{
//		return;
//	}
//
//	_mlock(_HEAP_LOCK);
//	_TRY
//
//		pHead = pHdr(pUserData);
//
//		_ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
//
//		_free_dbg(pUserData, pHead->nBlockUse);
//
//		_FINALLY
//			_munlock(_HEAP_LOCK);
//		_END_TRY_FINALLY
//
//		return;
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <set>

using namespace std;

//multiset����
//1��multiset�ǰ����ض�˳��洢Ԫ�ص�����������Ԫ���ǿ����ظ���
//2����multiset�ڣ�Ԫ�ص�valueҲ��ʶ������ɵļ�ֵ�ԣ�multisetԪ�ص�ֵ�����������н����޸ģ������Բ����ɾ��
//3�����ڲ���multiset�����ض����ϸ�������׼���������
//4��multiset����ͨ��key���ʵ���Ԫ�ر�unordered_multiset������������ʹ�õ�����������ʱ�򣬻�õ�һ����������
//5��multiset�ĵײ��Ƕ������������������

//ע��
//1��multiset�ĵײ�洢����<value, value>�ļ�ֵ��
//2��multiset�Ĳ���ӿ���ֻ��Ҫ���뼴��
//3��multiset��set��������multiset�е�Ԫ�ؿ����ظ�
//4��ʹ�õ��������������Եõ������multiset
//5��multiset�е�Ԫ�ز����޸�
//6��multiset�Ĳ��ҵ�ʱ�临�Ӷ���Olog2N
//7��multiset�����ã����Զ�Ԫ�ؽ�������

int main()
{
	int array[] = { 0, 2, 1, 4, 3, 6, 5, 7, 8, 9, 0, 7, 6, 8, 9, 5, 4, 2, 1, 3 };

	multiset<int> ms(array, array + sizeof(array) / sizeof(array[0]));
	for (auto& e : ms)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

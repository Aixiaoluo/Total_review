//#include <iostream>
//#include <set>
//#include <string>
//
//using namespace std;
//
////set���ܣ�
////1��set�ǰ���һ���Ĵ���洢Ԫ�ص�����
////2����set�У�Ԫ��valueҲ��ʶ����value����key������ΪT��������ÿ��value������Ωһ��
////3��set��������ɾ�����������޸�
////4��set�����ڲ��Ƚ϶������ͱȽϣ���ָʾ���ض��ϸ�������׼���������
////5��set�ڵײ��ö������������������ʵ��
//
////ע��
////1��set��ֻ��value�����ǵײ��ŵ���<value, value>�ļ�ֵ��
////2��set����Ԫ��ֻ��ѽ����value����
////3��set�е�Ԫ��Ψһ
////4��set����������Ĭ�ϰ���С������
////5��set�в���Ԫ�صĸ��Ӷ�Ϊlog2n
////6��set�е�Ԫ�ز������޸�
////7��set�ĵײ�ʹ�ö������������������ʵ��
//
//int main()
//{
//	//������array�е�Ԫ�ع���set
//	int array[] = { 1, 3, 2, 4, 5, 6, 7, 8, 9, 0, 8, 7, 0, 9, 2, 1, 3, 6, 4, 5 };
//	set<int> s(array, array + sizeof(array) / sizeof(array[0]));
//	cout << s.size() << endl;
//
//	for (auto& e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	cout << s.count(3) << endl;
//	system("pause");
//	return 0;
//}

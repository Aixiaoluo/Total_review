//#include <iostream>
//
//using namespace std;
//
////ģ�������Ϊ�����Ͳ����ͷ����Ͳ���
////�����Ͳ�����������ģ������б��У�����class����typename�Ĳ�����������
////�����Ͳ�����������һ��������Ϊ��(����)ģ���һ������������(����)ģ���п��Խ��ò������ɳ���ʹ��
//
////ע��
////1����������������Լ��ַ�����������Ϊ������ģ�����
////2��������ģ����������ڱ���������ȷ�Ͻ��
//
//namespace gwp
//{
//	//����һ��ģ�����͵ľ�̬����
//	template<class T, size_t N= 10>
//	class array
//	{
//	public:
//		T& operator(size_t index)
//		{
//			return m_array[index];
//		}
//
//		const T& operator(size_t index) const
//		{
//			return m_array[index];
//		}
//
//		size_t size() const
//		{
//			return m_size;
//		}
//
//		bool empty() const
//		{
//			return (m_size == 0) ? true : false;
//		}
//	private:
//		T m_array[N];
//		size_t m_size;
//	};
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}

#include <iostream>

using namespace std;

//内存泄漏及危害
//内存泄漏指因为疏忽或错误造成程序未能释放已经不再使用的内存情况。内存泄漏并非物理上的消失，而是应用程序分配某段内存后，因为设计错误，失去了对该段内存的控制，因而造成了内存的浪费
//危害
//长期运行的程序出现内存泄漏，会导致程序响应变慢，最终卡死

//内存泄漏的分类
//堆内存泄漏
//主要是指malloc calloc realloc new出来的一块内存没有free或者delete
//系统资源泄漏
//主要是指套接字，文件描述符，管道没有使用对应的函数释放导致系统资源泄漏，会导致系统效能降低，系统不稳定

//规避内存泄漏
//1、工程前期良好的设计规范，养成良好的编码规范，申请的内存空间记着匹配的去释放
//2、采用RAII思想或者智能指针来管理资源
//3、使用内存泄漏工具检测

void MemoryLeaks()
{
	//1、内存申请了忘记释放
	int* p1 = (int*)malloc(sizeof(int));
	int* p2 = new int;

	//2、异常安全问题
	int* p3 = new int[10];

	Func();//这里的Func函数抛出异常，导致delete[] p3未执行，导致内存泄漏

	delete[] p3;
}

int main()
{

	system("pause");
	return 0;
}

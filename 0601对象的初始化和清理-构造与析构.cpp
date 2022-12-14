#include<iostream>
using namespace std;

/********************************************************************************************
* 1.引入
*	生活中我们买的电子产品都基本会有出产设置，在某一天我们不用的时候也会删除一些自己信息数据保证安全
*	c++中的面向对象来源于生活，每个对象也会有初始设置以及对象销毁前的清理数据的设置
* 2.构造函数与析构函数
*	对象的初始化和清理也是两个非常重要的安全问题
*		一个对象或者变量没有初始状态，对其使用后果是未知
*		同样的使用完一个对象或变量，没有及时清理，也会造成一定的安全问题
*	c++利用了构造函数和析构函数解决上述问题，这两个函数将会被编译器自动调用，完成对象初始化和清理工作。
*	对的初始化和清理工作是编译器强制要我们做的事情，因此如果我们不提供构造和析构，编译器会提供编译器提供
*	的构造函数和析构函数时空实现。
*	2.1 构造函数
*		主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无需手动调用。
*		2.1.1 构造函数语法： 类名(){}
*			(1)构造函数没有返回值，也不写void
*			(2)函数名称与类名相同
*			(3)构造函数可以有参数，因此可以发生重载
*			(4)程序在调用对象的时候会自动调用构造，无需手动调用，而且只调用一次	
*	2.2 析构函数
*		主要作用在于对象销毁前系统自动调用，执行一些清理工作
*		2.2.1 析构函数语法： ~类名(){}
*			(1)析构函数没有返回值也不写void
*			(2)函数名称与类名相同，在名称前加上符号 ~
*			(3)析构函数不可以有参数，因此不可以发生重载
*			(4)程序在对象销毁前会自动调用析构，无需手动调用，而且只会调用一次
*	
**********************************************************************************************/

class Gpoint
{
public:
	Gpoint()
	{
		cout << "Gpoint构造函数的调用。" << endl;
	}
	~Gpoint()
	{
		cout << "Gpoint的析构函数调用。" << endl;
	}
};

void Test_0_1()
{
	Gpoint p;//在栈上的数据，Test_0_1执行完毕后，释放这个对象
}

//int main()  
//{
//	
//	//Test_0_1();
//	Gpoint p;
//	system("pause");
//	return 0;
//}
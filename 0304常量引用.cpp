#include<iostream>
using namespace std;

/********************************************
* 1.作用：常量引用主要用来修饰形参，防止形参改变实参
* 
* 在函数形参列表中，可以加const修饰形参，防止形参改变实参
* 
*/

void showValue(const int &val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}
//int main()
//{
//	//常量引用：用来修饰形参，防止形参改变实参
//
//	//int a = 10;
//	// int &ref = 10; 引用本身需要一个合法空间，因此这行错误
//	//加上const之后，编译器将代码修改   int temp = 10; const int &ref = temp;
//	//const int& ref = 10;
//	//ref = 20;//加入cosnt后变为只读，不可修改
//
//	int a = 100;
//	showValue(a);
//	cout<<"a  = " << a << endl;
//	system("pause");
//	return 0;
//}
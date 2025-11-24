#include<iostream>
#include "swap.h"
using namespace std;

//数字交换

////函数的声明
//void swap(int a, int b);
//
////函数的定义
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1. 创建.h 的头文件
//2. 创建 .cpp的源文件
//3. 在头文件写函数的声明
//4. 在源文件中写函数的定义


int main() {

	int a = 10;
	int b = 20;

	cout<< "Before Swap"<< endl;
	cout<< "a = "<< a<< endl;
	cout<< "b = "<< b<< endl;
	
	swap(a, b);

	//system("pause");
	return 0;

}

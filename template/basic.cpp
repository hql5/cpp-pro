/*
 * @Author: lhq
 * @Date: 2022-11-02 19:46:28
 * @LastEditTime: 2022-11-02 19:51:58
 * @LastEditors: lhq
 * @Description: 模板的使用(1.自动推导类型。2.显示指定类型)
 * @FilePath: \cpp-pro\template\basic.cpp
 */
#include <iostream>
using namespace std;

//交换整型函数
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

//交换浮点型函数
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

//利用模板提供通用的交换函数
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	
	//swapInt(a, b);

	//利用模板实现交换
	//1、自动类型推导，必须推导出一致的类型T才可以，否则报错
	mySwap(a, b);

	//2、显示指定类型
	mySwap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

int main() {

	test01();

	return 0;
}
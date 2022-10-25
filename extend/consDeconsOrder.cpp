/*
 * @Author: lhq
 * @Date: 2022-10-25 21:24:42
 * @LastEditTime: 2022-10-25 21:26:20
 * @LastEditors: lhq
 * @Description: 继承中的构造析构函数调用顺序
 * @FilePath: \cpp-pro\extend\consDeconsOrder.cpp
 */
#include <iostream>
using namespace std;

class Base 
{
public:
	Base()
	{
		cout << "Base构造函数!" << endl;
	}
	~Base()
	{
		cout << "Base析构函数!" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son构造函数!" << endl;
	}
	~Son()
	{
		cout << "Son析构函数!" << endl;
	}

};


void test01()
{
	//继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
	Son s;
}

int main() {

	test01();

	return 0;
}
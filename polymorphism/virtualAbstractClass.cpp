/*
 * @Author: lhq
 * @Date: 2022-10-26 14:12:05
 * @LastEditTime: 2022-10-26 14:18:38
 * @LastEditors: lhq
 * @Description:父类的虚函数实现没有意义，改为纯虚函数。类中有了纯虚函数，也就是抽象类
 *      。抽象类无法实例化对象，子类必须重写纯虚函数，否则也是抽象类。
 * @FilePath: \cpp-pro\polymorphism\virtualAbstractClass.cpp
 */
#include <iostream>
using namespace std;

class Base
{
public:
	//定义方式
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func调用" << endl;
	};
};

void test01()
{
	Base * base = NULL;
	// base = new Base; // 错误，抽象类无法实例化对象
	base = new Son;
	base->func();
	delete base;//记得销毁
}

int main() {

	test01();

	return 0;
}
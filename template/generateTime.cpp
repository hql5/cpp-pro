/*
 * @Author: lhq
 * @Date: 2022-11-02 21:09:47
 * @LastEditTime: 2022-11-02 21:11:10
 * @LastEditors: lhq
 * @Description: 类模板成员函数创建时机
 * @FilePath: \cpp-pro\template\generateTime.cpp
 */
#include <iostream>
using namespace std;

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	//类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成

	void fun1() { obj.showPerson1(); }
	void fun2() { obj.showPerson2(); }

};

void test01()
{
	MyClass<Person1> m;
	
	m.fun1();

	// m.fun2();//编译会出错，说明函数调用才会去创建成员函数
}

int main() {

	test01();

	return 0;
}
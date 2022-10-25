/*
 * @Author: lhq
 * @Date: 2022-10-25 21:27:20
 * @LastEditTime: 2022-10-25 21:35:39
 * @LastEditors: lhq
 * @Description: 继承中，同名的静态函数处理
 * @FilePath: \cpp-pro\extend\sameStaticNameFuncExtend.cpp
 */
#include <iostream>
using namespace std;

class Base {
public:
	static void func()
	{
		cout << "Base - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}

	static int m_A;
};

int Base::m_A = 100;

class Son : public Base {
public:
	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
	static int m_A;
};

int Son::m_A = 200;

//同名成员属性
void test01()
{
	//通过对象访问
	cout << "通过对象访问： " << endl;
	Son s;
	cout << "Son  下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;

	//通过类名访问
	cout << "通过类名访问： " << endl;
	// cout << "Son  下 m_A = " << Son::m_A << endl;
	cout << "Son  下 m_A = " << Son::m_A << endl;
	// cout << "Base 下 m_A = " << Son::Base::m_A << endl;
	cout << "Base 下 m_A = " << Base::m_A << endl;
}

//同名成员函数
void test02()
{
	//通过对象访问
	cout << "通过对象访问： " << endl;
	Son s;
	s.func();
	s.Base::func();

	cout << "通过类名访问： " << endl;
	Son::func();
	Son::Base::func();
	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
	Son::Base::func(100);
}
int main() {

	test01();
	test02();

	return 0;
}
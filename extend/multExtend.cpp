/*
 * @Author: lhq
 * @Date: 2022-10-25 21:26:45
 * @LastEditTime: 2022-10-25 21:39:42
 * @LastEditors: lhq
 * @Description: 多继承，继承多个父类（不建议使用）
 * @FilePath: \cpp-pro\extend\multExtend.cpp
 */
#include <iostream>
using namespace std;

class Base1 {
public:
	Base1()
	{
		m_A = 100;
	}
public:
	int m_A;
};

class Base2 {
public:
	Base2()
	{
		m_A = 200;  //开始是m_B 不会出问题，但是改为mA就会出现不明确
	}
public:
	int m_A;
};

//语法：class 子类：继承方式 父类1 ，继承方式 父类2 
class Son : public Base2, public Base1 
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
public:
	int m_C;
	int m_D;
};


//多继承容易产生成员同名的情况
//通过使用类名作用域可以区分调用哪一个基类的成员
void test01()
{
	Son s;
	cout << "sizeof Son = " << sizeof(s) << endl;
    // cout << s.m_A << endl;    //error
	cout << s.Base1::m_A << endl;
	cout << s.Base2::m_A << endl;
}

int main() {

	test01();

	return 0;
}
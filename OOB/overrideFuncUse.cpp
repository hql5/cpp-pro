/*
 * @Author: lhq
 * @Date: 2022-10-25 20:53:43
 * @LastEditTime: 2022-10-25 20:56:09
 * @LastEditors: lhq
 * @Description: 函数调用运算符重载
 * @FilePath: \cpp-pro\OOB\overrideFuncUse.cpp
 */
#include <iostream>
using namespace std;

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}

};
void test01()
{
	//重载的（）操作符，也称为仿函数，语法高亮可以看出不同颜色
	MyPrint myFunc;
	myFunc("hello world");
}


class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test02()
{
	MyAdd myadd;
	int ret = myadd(10, 10);
	cout << "ret = " << ret << endl;

	//匿名对象调用  
	cout << "MyAdd()(100,100) = " << MyAdd()(100, 100) << endl;
}

int main() {

	test01();
	test02();

	return 0;
}
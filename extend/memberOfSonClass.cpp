/*
 * @Author: lhq
 * @Date: 2022-10-25 21:22:34
 * @LastEditTime: 2022-10-25 21:24:01
 * @LastEditors: lhq
 * @Description: 继承的对象有哪些
 * @FilePath: \cpp-pro\extend\memberOfSonClass.cpp
 */
#include <iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main() {

	test01();

	return 0;
}
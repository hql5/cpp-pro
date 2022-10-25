/*
 * @Author: lhq
 * @Date: 2022-10-25 21:42:13
 * @LastEditTime: 2022-10-25 21:51:14
 * @LastEditors: lhq
 * @Description: 菱形继承，主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义，
 *                  虚继承可以解决菱形继承问题
 * @FilePath: \cpp-pro\extend\diamondExtend.cpp
 */
#include <iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

//继承前加virtual关键字后，变为虚继承
//此时公共的父类Animal称为虚基类
class Sheep : virtual public Animal {};
class Tuo   : virtual public Animal {};
class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Tuo::m_Age = 200;
	st.Sheep::m_Age = 100;

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " <<  st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
}


int main() {

	test01();

	return 0;
}
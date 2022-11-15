/*
 * @Author: lhq
 * @Date: 2022-11-15 14:46:09
 * @LastEditTime: 2022-11-15 14:47:53
 * @LastEditors: lhq
 * @Description: pair对组的创建，可以返回两个结果
 * @FilePath: \cpp-pro\STL\pair_constructor.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * pair<type, type> p = (value1, value2);
 * pair<type, type> p = make_pair(value1, value2);
*/

void test01()
{
	pair<string, int> p(string("Tom"), 20);
	cout << "姓名： " <<  p.first << " 年龄： " << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
}

int main() {

	test01();

	return 0;
}
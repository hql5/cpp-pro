/*
 * @Author: lhq
 * @Date: 2022-11-07 21:58:47
 * @LastEditTime: 2022-11-11 13:41:56
 * @LastEditors: lhq
 * @Description: string赋值操作
 * @FilePath: \cpp-pro\STL\container_string_assign.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/** 赋值函数原型：
 *  string& operator=(const char* s); char*类型字符串赋值给当前字符串
 *  string& operator=(const string &s); 字符串s赋值
 *  string& operator=(char c); 当前字符赋值给字符串
 *  string& assign(const char *s);
 *  string& assign(const char *s, int n); 字符串s的前n个字符赋值给当前字符串
 *  string& assign(const string &s)
 *  string& assign(int n, char c)
*/

void test01()
{
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hello c++",5);
	cout << "str5 = " << str5 << endl;


	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(5, 'x');
	cout << "str7 = " << str7 << endl;
}

int main() {

	test01();
	return 0;
}
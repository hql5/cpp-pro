/*
 * @Author: lhq
 * @Date: 2022-11-07 22:44:37
 * @LastEditTime: 2022-11-07 22:54:35
 * @LastEditors: lhq
 * @Description: string的查找替换操作
 * @FilePath: \cpp-pro\STL\container_string_find_replace.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**函数原型：
 * int find(const string& str, int pos = 0) const;
 * int find(const char* s, int pos = 0) const; 从pos开始查找s第一次出现的位置
 * int find(const char* s, int pos, int n) const; 从pos开始查找s的前n个字符第一次位置
 * int find(const char c, int pos = 0) const; 查找c第一次出现的位置
 * int rfind(const string& str, int pos = npos) const; 查找str最后一次位置，从pos开始
 * int rfind(const char* s, int pos = npos) const;
 * int rfind(const char* s, int pos, int n) const;
 * int rfind(const char c, int pos = 0) const;
 * string& replace(int pos, int n, const string& str);
 * string& replace(int pos, int n, const char* s);
*/

void test01()
{
	//查找
	string str1 = "abcdefgde";

	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}
	

	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;

}

void test02()
{
	//替换
	string str1 = "abcdefgde";
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

int main() {

	test01();
	test02();
	return 0;
}
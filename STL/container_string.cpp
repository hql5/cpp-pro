/*
 * @Author: lhq
 * @Date: 2022-11-07 21:17:34
 * @LastEditTime: 2022-11-07 21:24:47
 * @LastEditors: lhq
 * @Description: string类。类内部封装了char*，是一个char*型的容器。
 * @FilePath: \cpp-pro\STL\container_string.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * 构造函数原型：
 * string();
 * string(const char* s); 使用字符串s初始化
 * string(const string& str); 使用另一个string对象初始化
 * string(int n, char c); 使用n个字符c初始化
*/

void test() {
    string s1; //创建空字符串，调用无参构造函数
	cout << "str1 = " << s1 << endl;

	const char* str = "hello world";
	string s2(str); //把c_string转换成了string

	cout << "str2 = " << s2 << endl;

	string s3(s2); //调用拷贝构造函数
	cout << "str3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "str4 = " << s4 << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

/*
 * @Author: lhq
 * @Date: 2022-11-07 22:04:30
 * @LastEditTime: 2022-11-07 22:08:14
 * @LastEditors: lhq
 * @Description: 字符串拼接
 * @FilePath: \cpp-pro\STL\container_string_concate.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**函数原型
 * string& operator+=(const char* str);
 * string& operator+=(const char c);
 * string& operator+=(const string& str);
 * string& append(const char* s);
 * string& append(const char *s, int n);
 * string& append(const string &s)
 * string& append(const string &s, int pos, int n); 从s中pos开始连接n个字符
*/

void test()
{
	string str1 = "我";

	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;
	
	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
	cout << "str3 = " << str3 << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

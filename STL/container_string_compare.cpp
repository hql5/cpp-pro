/*
 * @Author: lhq
 * @Date: 2022-11-07 22:56:35
 * @LastEditTime: 2022-11-07 23:04:26
 * @LastEditors: lhq
 * @Description: string比较
 * @FilePath: \cpp-pro\STL\container_string_compare.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**字符串比较是按字符的ASCII码进行对比
 * 函数原型：
 * int compare(const string& s) const;
 * int compare(const char* s) const;
*/

void test() {
    string s1 = "hello";
    string s2 = "aello";
    const char* ret = s1.compare(s2) ? "YES":"NO";
    cout << ret << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

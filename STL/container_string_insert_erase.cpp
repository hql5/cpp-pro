/*
 * @Author: lhq
 * @Date: 2022-11-07 23:10:41
 * @LastEditTime: 2022-11-07 23:13:36
 * @LastEditors: lhq
 * @Description: string插入删除字符串操作
 * @FilePath: \cpp-pro\STL\container_string_insert_erase.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**函数原型：
 * string& insert(int pos, const char* s);
 * string& insert(int pos, const string& str);
 * string& insert(int pos, int n, char c); 指定位置pos插入n个字符c
 * string& erase(int pos, int n = npos); 删除从pos开始的n个字符
*/

void test() {
    string s = "hello";
    s.insert(1, "111");
    cout << s << endl;

    s.erase(3, 2);
    cout << s << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

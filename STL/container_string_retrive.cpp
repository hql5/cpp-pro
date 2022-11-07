/*
 * @Author: lhq
 * @Date: 2022-11-07 23:07:23
 * @LastEditTime: 2022-11-07 23:09:30
 * @LastEditors: lhq
 * @Description: string字符存取
 * @FilePath: \cpp-pro\STL\container_string_retrive.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**string中单个字符的存取有两种方式：
 * char& operator[](int n);
 * char& at(int n); at方法获取字符
*/

void test() {
    string str = "hello world";
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << "\t";
    }
    cout << endl;

    /*字符修改*/
    str[0] = 'x';
    str.at(1) = 'x';
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

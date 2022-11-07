/*
 * @Author: lhq
 * @Date: 2022-11-07 23:14:14
 * @LastEditTime: 2022-11-07 23:17:02
 * @LastEditors: lhq
 * @Description: string字串操作
 * @FilePath: \cpp-pro\STL\container_string_substr.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**函数原型：
 * string substr(int pos = 0, int n = npos) const;
*/

void test() {
    string s = "abcdefg";
    string ss = s.substr(1, 5);
    cout << "sub str:" << ss << endl;

    string email = "hello@gmail.com";
    int pos = email.find("@");
    string uName = email.substr(0, pos);
    cout << "user name in an email:" << uName << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

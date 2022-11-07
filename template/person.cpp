/*
 * @Author: lhq
 * @Date: 2022-11-07 18:32:14
 * @LastEditTime: 2022-11-07 18:34:05
 * @LastEditors: lhq
 * @Description: 包含person.hpp文件，调用类成员函数showPerson()
 * @FilePath: \cpp-pro\template\person.cpp
 */
#include <iostream>
#include "person.hpp"
using namespace std;

void test() {
    Person<string, int> p("Tom", 10);
    p.showPerson();
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

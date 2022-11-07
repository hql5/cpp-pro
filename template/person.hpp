/*
 * @Author: lhq
 * @Date: 2022-11-07 18:27:07
 * @LastEditTime: 2022-11-07 18:35:06
 * @LastEditors: lhq
 * @Description: 分文件编写类模板。类模板声明和实现写在.hpp文件中（约定俗成）。
 * @FilePath: \cpp-pro\template\person.hpp
 */
#pragma once

#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age);
    void showPerson();

    T1 mName;
    T2 mAge;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    mName = name;
    mAge = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson(){
    cout << "姓名: " << mName << ". 年龄: " << mAge << endl;
}
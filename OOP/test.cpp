/*
 * @Author: lhq
 * @Date: 2022-10-16 17:40:45
 * @LastEditTime: 2022-10-17 21:13:47
 * @LastEditors: lhq
 * @Description: 
 * @FilePath: \cpp-pro\OOB\test.cpp
 */
#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;

class Person
{
private:
    int age;
public:
    Person() {
        cout << "无参构造函数调用。" << endl;
    }
    Person(int a) {
        age = a;
        cout << "有参构造函数。" << endl;
    }
    Person(const Person& p) {
        age = p.age;
        cout << "拷贝构造函数。" << endl;
    }
    ~Person() {
        cout << "析构函数调用。" << endl;
    }
};


void test() {
    Person p;
}

void test2() {
    Person p1(10);

    Person p2 = Person(10);
    Person p3 = Person(p2);

    Person p4 = 10;
    Person p5 = p4;
}


int main() {
    // test();
    test2();

    return 0;
}
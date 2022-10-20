/*
 * @Author: lhq
 * @Date: 2022-10-20 19:34:31
 * @LastEditTime: 2022-10-20 19:48:17
 * @LastEditors: lhq
 * @Description: 静态成员变量
 * @FilePath: \cpp-pro\OOB\staticObjVariables.cpp
 */
#include <iostream>
using namespace std;

class Person {
public: 
    int c;
    static int a;    //类内声明，类外初始化
    static void func() {
        cout << "static func " << endl;
        a = 300;
        // c = 100;    //error, static func only read static member variable
    }
private:
    static int b;
    static void func2() {
        cout << "static func2 " << endl;
    }
};

int Person::a = 10;
int Person::b = 10;

void test1() {
    Person p1;
    p1.a = 100;
    cout << "p1.a = " << p1.a << endl;

    Person p2;
    p2.a = 200;
    cout << "p1.a = " << p1.a << endl;    //也是200，所有对象的静态成员变量共享一个数据
    cout << "p2.a = " << p2.a << endl;

    cout << "a = " << Person::a << endl;
    // cout << "b = " << Person::b << endl;     //error
}

void test2() {
    Person p1;
    p1.func();

    Person::func();
    // Person::func2();    //error , private

    cout << "p1.a = " << p1.a << endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();
    return 0;
}

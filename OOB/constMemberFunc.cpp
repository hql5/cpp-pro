/*
 * @Author: lhq
 * @Date: 2022-10-20 20:06:08
 * @LastEditTime: 2022-10-20 20:38:07
 * @LastEditors: lhq
 * @Description: const修饰成员函数和对象
 * @FilePath: \cpp-pro\OOB\constMemberFunc.cpp
 */
#include <iostream>
using namespace std;

class Person {
public:
    int ma;
    mutable int mb; //可修改，可变

    Person() {
        ma = 0;
        mb = 0;
    }
    
    void showPerson() const {
        //this本质是一个指针常量(例如int * const),指向不可修改，如果想让指针指向的值也不可以修改，需要声明常函数
        // const修饰成员函数后，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
        this->mb = 100;
    }

    void myFunc () const {
        // ma = 1000;    //error
    }
};

void test1() {
    const Person p1;
    cout << p1.ma << endl;
    p1.mb = 100;    //常对象可以修改mutable修饰的成员变量
    cout << p1.mb << endl;
    p1.showPerson();
    p1.myFunc();    //error
}

int main(int argc, char const *argv[])
{
    test1();
    return 0;
}

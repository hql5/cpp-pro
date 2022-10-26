/*
 * @Author: lhq
 * @Date: 2022-10-20 19:07:03
 * @LastEditTime: 2022-10-20 19:31:19
 * @LastEditors: lhq
 * @Description: this指针的使用
 * @FilePath: \cpp-pro\OOB\thisPoint.cpp
 */
#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
    string phone_name;
    
    Phone(string tname) {
        phone_name = tname;
        cout << "Phone constructor" << endl;
    }

    ~Phone() {
        cout << "Phone destructor" << endl;
    }
};

class Person {
public:
    string per_name;
    Phone per_phone;

    Person(string tname, string pname) : per_name(tname), per_phone(pname) {
        cout << "Person constructor" << endl;
    }

    ~Person () {
        cout << "Person destructor" << endl;
    }

    //person behave
    void playGame() {
        cout << per_name << " use " << per_phone.phone_name << " play games." << endl;
    }
};

void test() {
    Person p1("hql", "XiaoMi 12");
    p1.playGame();
}

int main(int argc, char const *argv[])
{
    test();     
    return 0;
}

#include <iostream>
using namespace std;

class Person {
public:
    // 类内的成员变量和成员函数分开存储
    int ma;     //对象空间
    static int mb;      //非对象空间
    
    int age;

    Person(int age) {
        ma = 0;
        this->age = age;
    }

    //函数不占对象空间，所有函数共享一个函数实例
    void func() {
        cout << "ma = " << this->ma << endl;
    }

    static void sfunc(){};

    Person & personAddPerson(Person p) {
        this->age += p.age;
        return *this;
    }

    void showClassName() {
        cout << "Class Person" << endl;
    }

    void showPerson() {
        if (this == NULL) {
            return;
        }
        cout << age;
    }
};

void test1() {
    Person p1(10);
    cout << "p1.age = " << p1.age << endl;

    Person p2(10);
    p2.personAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
}

void test2() {
    Person *p = NULL;    //空指针可以调用成员函数
    p->showClassName();
    p->showPerson();    //如果成员函数中使用了this，就不可以了
}

int main(int argc, char const *argv[])
{
    // cout << sizeof(Person) << endl; 
    // test1();
    test2();
    return 0;
}

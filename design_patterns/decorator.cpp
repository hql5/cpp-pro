/*
 * @Author: lhq
 * @Date: 2022-11-23 13:44:15
 * @LastEditTime: 2022-11-23 14:42:17
 * @LastEditors: lhq
 * @Description: 装饰模式
 * @FilePath: \cpp-pro\design_patterns\decorator.cpp
 */
#include <iostream>
#include <string>
using namespace std;

//==================================Component===================================
class Person {
    string m_name;
public:
    Person() {};
    ~Person() {};
    
    Person(string name) {
        this->m_name = name;
    }

    virtual void show() {
        cout << "装饰的是" << this->m_name << endl;
    };
};

//==================================Decorator===================================
class Finery : public Person{
    Person component;

public:
    Finery() {};
    ~Finery() {};

    void decorate(Person component) {
        this->component = component;
    }

    void show() {
        this->component.show();
    }

};

class Tshirt : public Finery {
public:
    Tshirt() {};
    ~Tshirt() {};

    void show() {
        cout << "T恤." << endl;
        Finery::show();
    }
};

class Shoes : public Finery {
public:
    Shoes() {};
    ~Shoes() {};

    void show() {
        cout << "鞋子." << endl;
        Finery::show();
    } 
};

//====================================main======================================
int main(int argc, char const *argv[])
{
    Person per("张三");
    Tshirt ts;
    Shoes shoe;

    //装饰
    ts.decorate(per);
    shoe.decorate(per);
    shoe.show();
    
    return 0;
}

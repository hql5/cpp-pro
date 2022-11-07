/*
 * @Author: lhq
 * @Date: 2022-11-07 20:57:40
 * @LastEditTime: 2022-11-07 21:11:00
 * @LastEditors: lhq
 * @Description: vector存放自定义类型
 * @FilePath: \cpp-pro\STL\second_test.cpp
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
public:
    string m_name;
    int m_age;
public:
    Person(string name, int age);
    ~Person();
};

Person::Person(string name, int age)
{
    this->m_name = name;
    this->m_age = age;
}

Person::~Person()
{
}

/**测试函数1. vector存放对象*/
void test() {
    /*声明一个vector*/
    vector<Person> v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
    
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name:\t" << (*it).m_name << "\tAge:\t" << (*it).m_age << endl;
    }
    
}

/**测试函数2. vector存放对象指针*/
void test2() {
    vector<Person*> v;
    
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for(vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
        /* it是迭代器类型，存放person对象的指针，使用*it才是Person*类型 */
        Person *p = *it;
        cout << "Name:\t" << p->m_name << "\tAge:\t" << p->m_age << endl;
    }
}

/**main*/
int main(int argc, char const *argv[])
{
    test();
    test2();
    return 0;
}

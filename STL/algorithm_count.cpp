/*
 * @Author: lhq
 * @Date: 2022-11-15 18:53:20
 * @LastEditTime: 2022-11-15 19:12:41
 * @LastEditors: lhq
 * @Description: count统计元素个数，对于自定义类型需要重载==运算符号
 * @FilePath: \cpp-pro\STL\algorithm_count.cpp
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person {
public:
    Person(string name, int age) {
        this->m_name = name;
        this->m_age = age;
    }

    bool operator==(const Person& p) {
        if (this->m_age == p.m_age) {
            return true;
        }
        else
            return false;
    }
    
    string m_name;
    int m_age;
};

void test02()
{
	vector<Person> v;

	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
    
    Person p("诸葛亮",35);

	int num = count(v.begin(), v.end(), p);
	cout << "num = " << num << endl;

    for_each(v.begin(), v.end(),
        [](const Person& p) {
            cout << p.m_name << " " << p.m_age;
        });
}

int main(int argc, char const *argv[])
{
    test02();
    return 0;
}

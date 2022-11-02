/*
 * @Author: lhq
 * @Date: 2022-11-02 21:02:08
 * @LastEditTime: 2022-11-02 21:05:44
 * @LastEditors: lhq
 * @Description: 类模板
 * @FilePath: \cpp-pro\template\classTemplate.cpp
 */
#include <iostream>
#include <string>
using namespace std;

//类模板
template<class NameType, class AgeType> 
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

void test01()
{
	// 指定NameType 为string类型，AgeType 为 int类型
	Person<string, int>P1("孙悟空", 999);
	P1.showPerson();
}

int main() {

	test01();

	return 0;
}
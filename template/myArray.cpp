/*
 * @Author: lhq
 * @Date: 2022-11-07 18:55:13
 * @LastEditTime: 2022-11-07 20:11:00
 * @LastEditors: lhq
 * @Description: 模板类实现的自定义数组。测试。
 * @FilePath: \cpp-pro\template\myArray.cpp
 */
#include <string>
#include "myArray.hpp"

//测试int类型
void printIntArray(MyArray<int> & arr) {
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

//测试内置数据类型
void test1() {
    MyArray<int> arr(10);
    for (int i = 0; i < 10; i++)
    {
        arr.Push_back(i);
    }
    cout << "arr: " << endl;
    printIntArray(arr);
    cout << "arr's size: " << arr.getSize() << endl;
    cout << "arr's capacity: " << arr.getCapacity() << endl;

    cout << "====================================================" << endl;

    MyArray<int> arr2(arr);
    arr2.Pop_back();
    cout << "arr2: " << endl;
    printIntArray(arr2);
    cout << "arr2's size: " << arr2.getSize() << endl;
    cout << "arr2's capacity: " << arr2.getCapacity() << endl;
}

//测试自定义类型
class Person{
public:
    Person() {}
    Person (string name, int age) {
        this->mName = name;
        this->mAge = age;
    }
    
    string mName;
    int mAge;
};

void printPersonArray(MyArray<Person> & personArr) {
    for (int i = 0; i < personArr.getSize(); i++)
    {
        cout << "姓名：" << personArr[i].mName
            << "\t年龄：" << personArr[i].mAge << endl;
    }
}

//测试自定义类型数组
void test2() {
    MyArray<Person> pArr(10);

    //构造
    Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);
    //拷贝构造
    pArr.Push_back(p1);
    pArr.Push_back(p2);
    pArr.Push_back(p3);
    pArr.Push_back(p4);
    pArr.Push_back(p5);

    printPersonArray(pArr);
    cout << "person arr's size: " << pArr.getSize() << endl;
    cout << "person arr's capacity: " << pArr.getCapacity() << endl;
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}

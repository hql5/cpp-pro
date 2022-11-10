/*
 * @Author: lhq
 * @Date: 2022-11-08 23:35:07
 * @LastEditTime: 2022-11-08 23:44:54
 * @LastEditors: lhq
 * @Description: 对vector容器的容量和大小操作
 * @FilePath: \cpp-pro\STL\vector_check_info.cpp
 */
#include <vector>
#include <iostream>
using namespace std;

/**
 * 函数原型:
 * empty();
 * capacity(); 容器的容量
 * size();
 * resize(int num);
 * resize(int num, elem); 重新指定容器长度为num，变长则用elem填充，变短则删除后面元素
*/

void printVector(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << "\t";
    }
    cout << endl;
}

void test() {
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    printVector(v);

    if (v.empty())
    {
        cout << "vector v is empty." << endl;
    }
    else
    {
        cout << "vector v isn't empty." << endl;
        cout << "vector v's capacity is " << v.capacity() << endl;
        cout << "vector v's size is " << v.size() << endl;
    }

    // v.resize(15, 10);
    v.resize(15);
    printVector(v);

    v.resize(5);
    printVector(v);
    
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

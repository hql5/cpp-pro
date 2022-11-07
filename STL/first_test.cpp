/*
 * @Author: lhq
 * @Date: 2022-11-07 20:45:01
 * @LastEditTime: 2022-11-07 20:56:39
 * @LastEditors: lhq
 * @Description: STL初识
 * @FilePath: \cpp-pro\STL\first_test.cpp
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void MyPrint(int val) {
    cout << val << endl;
}

void test() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator pBegin = v.begin();
    vector<int>::iterator pEnd = v.end();

    /*第一种遍历方式*/
    while (pBegin != pEnd)
    {
        cout << *pBegin << endl;
        pBegin++;
    }
    
    /*第二种遍历方式*/
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;

    /*第三种遍历方式
      STL提供的标准遍历算法，需要包含头文件algorithm. */
    for_each(v.begin(), v.end(), MyPrint);
    
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

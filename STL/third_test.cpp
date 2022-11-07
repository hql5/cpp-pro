/*
 * @Author: lhq
 * @Date: 2022-11-07 21:11:30
 * @LastEditTime: 2022-11-07 21:15:09
 * @LastEditors: lhq
 * @Description: 容器嵌套容器实现遍历输出所有数据
 * @FilePath: \cpp-pro\STL\third_test.cpp
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test() {
    vector<vector<int>> v;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
        v4.push_back(i+4);
    }
    
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
        for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++) {
            cout << *it2 << "\t";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

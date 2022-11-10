/*
 * @Author: lhq
 * @Date: 2022-11-07 23:43:54
 * @LastEditTime: 2022-11-07 23:49:14
 * @LastEditors: lhq
 * @Description: vector赋值操作
 * @FilePath: \cpp-pro\STL\vector_assign.cpp
 */
#include <iostream>
#include <vector>
using namespace std;

/**函数原型：
 * vector& operator=(const vector &vec);
 * assign(beg, end);
 * assign(n, elem);
*/

void printVector(vector<int>& v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
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

    vector<int> v2;
    v2 = v;
    printVector(v2);

    vector<int> v3;
    v3.assign(v.begin(), v.end());
    printVector(v3);

    vector<int> v4;
    v4.assign(10, 100);
    printVector(v4);
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

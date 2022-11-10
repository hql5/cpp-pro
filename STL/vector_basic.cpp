/*
 * @Author: lhq
 * @Date: 2022-11-07 23:19:42
 * @LastEditTime: 2022-11-07 23:42:11
 * @LastEditors: lhq
 * @Description: vector的构造函数
 * @FilePath: \cpp-pro\STL\vector_basic.cpp
 */
#include <iostream>
#include <vector>
using namespace std;

/**函数原型：
 * vector<T> v;
 * vector(v.begin(), v.end()); 拷贝区间元素给本身
 * vector(n, elem), n个elem拷贝给本身
 * vector(const vector& vec), 拷贝构造函数
*/

void printVector(vector<int>& v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << "\t";
    }
    cout << endl;
}

/**测试函数*/
void test() {
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    printVector(v);
    
    vector<int> v2(v.begin(), v.end());
    printVector(v2);

    vector<int> v3(10, 100);
    printVector(v3);

    vector<int> v4(v3);
    printVector(v4);
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

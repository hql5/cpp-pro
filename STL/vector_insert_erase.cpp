/*
 * @Author: lhq
 * @Date: 2022-11-08 23:46:26
 * @LastEditTime: 2022-11-10 20:59:27
 * @LastEditors: lhq
 * @Description: vector插入删除操作
 * @FilePath: \cpp-pro\STL\vector_insert_erase.cpp
 */
#include <iostream>
#include <vector>
using namespace std;

/**函数原型：
 * push_back(ele);
 * pop_back();
 * insert(const_iterator pos, ele);
 * insert(const_iterator pos, int count, ele); 插入count个ele元素
 * erase(const_iterator pos);
 * erase(const_iterator start, const_iterator end);
 * clear();
*/

void printVector(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << "\t";
    }
    cout << endl;
}

void test01()
{
	vector<int> v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	//尾删
	v1.pop_back();
	printVector(v1);
	//插入
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);

	//删除
	v1.erase(v1.begin());
	printVector(v1);

	//清空
	v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

int main() {

	test01();

	return 0;
}
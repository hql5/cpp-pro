/*
 * @Author: lhq
 * @Date: 2022-11-10 23:23:49
 * @LastEditTime: 2022-11-10 23:23:59
 * @LastEditors: lhq
 * @Description: 使用sort对deque元素排序
 * @FilePath: \cpp-pro\STL\deque_sort.cpp
 */
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

/**
 * sort(iterator beg, iterator end);
*/

void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque(d);
	sort(d.begin(), d.end());
	printDeque(d);

}

int main() {

	test01();

	return 0;
}
/*
 * @Author: lhq
 * @Date: 2022-11-10 23:16:07
 * @LastEditTime: 2022-11-10 23:16:17
 * @LastEditors: lhq
 * @Description: deque中数据存取操作
 * @FilePath: \cpp-pro\STL\deque_data_operate.cpp
 */
#include <iostream>
#include <deque>
using namespace std;

/**
 * at(int idx);
 * operator[];
 * front();
 * back();
*/

void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

//数据存取
void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "front:" << d.front() << endl;

	cout << "back:" << d.back() << endl;

}

int main() {

	test01();

	return 0;
}
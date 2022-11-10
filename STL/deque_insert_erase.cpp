/*
 * @Author: lhq
 * @Date: 2022-11-10 21:49:32
 * @LastEditTime: 2022-11-10 23:14:47
 * @LastEditors: lhq
 * @Description: deque的插入与删除
 * @FilePath: \cpp-pro\STL\deque_insert_erase.cpp
 */
#include <iostream>
#include <deque>
using namespace std;

/**
 * push_back(elem);
 * push_front(elem);
 * pop_back();
 * pop_front();
 * 
 * insert(pos, elem); 返回新数据的位置
 * insert(pos, n, elem); 无返回值
 * insert(pos, beg, end); 插入[beg,end)区间的数据，无返回值
 * clear();
 * erase(beg, end); 删除区间的数据，返回下一个数据的位置
 * erase(pos); 删除pos位置的数据，返回下一个数据的位置
*/

void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//两端操作
void test01()
{
	deque<int> d;
	//尾插
	d.push_back(10);
	d.push_back(20);
	//头插
	d.push_front(100);
	d.push_front(200);

	printDeque(d);

	//尾删
	d.pop_back();
	//头删
	d.pop_front();
	printDeque(d);
}

//插入
void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.insert(d.begin(), 1000);
	printDeque(d);

	d.insert(d.begin(), 2,10000);
	printDeque(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	//insert(pos, beg, end)
	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);

}

//删除
void test03()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.erase(d.begin());
	printDeque(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printDeque(d);
}

int main() {

	//test01();

	test02();

    // test03();

	return 0;
}
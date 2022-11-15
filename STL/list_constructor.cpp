/*
 * @Author: lhq
 * @Date: 2022-11-11 14:35:10
 * @LastEditTime: 2022-11-11 14:38:59
 * @LastEditors: lhq
 * @Description: 
 * @FilePath: \cpp-pro\STL\list_constructor.cpp
 */
#include <iostream>
#include <list>
using namespace std;

/**
 * list<T> lst;
 * list(beg, end);
 * list(n, elem);
 * list(const list& lst);
*/

void printList(const list<int>& L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	list<int> L2(L1.begin(),L1.end());
	printList(L2);

	list<int> L3(L2);
	printList(L3);

	list<int> L4(10, 1000);
	printList(L4);
}

int main() {

	test01();

	return 0;
}
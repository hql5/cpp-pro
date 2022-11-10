/*
 * @Author: lhq
 * @Date: 2022-11-10 21:07:31
 * @LastEditTime: 2022-11-10 21:09:06
 * @LastEditors: lhq
 * @Description: 预留空间减少动态扩展的次数，如果数据量大，可以一开始预留空间
 * @FilePath: \cpp-pro\STL\vector_reserve.cpp
 */
#include <iostream>
#include <vector>
using namespace std;

void test01()
{
	vector<int> v;

	//预留空间
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}

	cout << "num:" << num << endl;
}

int main() {

	test01();

	return 0;
}
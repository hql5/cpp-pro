/*
 * @Author: lhq
 * @Date: 2022-11-10 21:01:59
 * @LastEditTime: 2022-11-10 21:02:12
 * @LastEditors: lhq
 * @Description: 数据存取操作
 * @FilePath: \cpp-pro\STL\vector_data_operator.cpp
 */
#include <iostream>
#include <vector>
using namespace std;

/**
 * at(int idx);
 * operator[];
 * front();
 * back();
*/

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "v1的第一个元素为： " << v1.front() << endl;
	cout << "v1的最后一个元素为： " << v1.back() << endl;
}

int main() {

	test01();

	return 0;
}
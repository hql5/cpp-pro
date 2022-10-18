/*
 * @Author: lhq
 * @Date: 2022-10-15 20:51:04
 * @LastEditTime: 2022-10-15 20:51:12
 * @LastEditors: lhq
 * @Description: swap.h头文件中声明的函数进行定义
 * @FilePath: \cpp-pro\swap.cpp
 */
#include "swap.h"

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
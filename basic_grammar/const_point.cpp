/*
 * @Author: lhq
 * @Date: 2022-10-15 10:19:05
 * @LastEditTime: 2022-10-15 21:33:13
 * @LastEditors: lhq
 * @Description: 
 * @FilePath: \cpp-pro\test.cpp
 */
#include <iostream>
#include "swap.h"

int main() {

	int a = 10;
	int b = 20;

	//const修饰的是指针，指针指向可以改，指针指向的值不可以更改
	const int * p1 = &a; 
	//*p1 = 100;  报错
	cout << "const int * p1" << endl;
	cout << "	" << "p1的值为 : " << p1 << endl;
	cout << "	" << "*p1的值为 : " << *p1 << endl;
	p1 = &b; //正确
	cout << "	" << "修改p1后，p1的值为 : " << p1 << endl;
	cout << "	" << "修改p1后，*p1的值为 : " << *p1 << endl;
	

	//const修饰的是常量，指针指向不可以改，指针指向的值可以更改
	int * const p2 = &a;
	//p2 = &b; //错误
	cout << "int * const p2" << endl;
	cout << "	" << "p2的值为 : " << p2 << endl;
	cout << "	" << "*p2的值为 : " << *p2 << endl;
	*p2 = 100; //正确
	cout << "	" << "修改*p2后，p2的值为 : " << p2 << endl;
	cout << "	" << "修改*p2后，*p2的值为 : " << *p2 << endl;

    //const既修饰指针又修饰常量
	const int * const p3 = &a;
	//p3 = &b; //错误
	//*p3 = 100; //错误

	return 0;
}
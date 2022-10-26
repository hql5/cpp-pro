/*
 * @Author: lhq
 * @Date: 2022-10-26 16:40:21
 * @LastEditTime: 2022-10-26 16:43:38
 * @LastEditors: lhq
 * @Description: 读文件可以利用 ifstream  ，或者fstream类
 * @FilePath: \cpp-pro\operateFiles\readFiles.cpp
 */
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);

    //判断文件是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//第一种方式
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种,按行读取
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();


}

int main() {

	test01();

	return 0;
}
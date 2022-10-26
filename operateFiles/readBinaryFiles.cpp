/*
 * @Author: lhq
 * @Date: 2022-10-26 16:44:45
 * @LastEditTime: 2022-10-26 16:52:58
 * @LastEditors: lhq
 * @Description: ifstream& read(char *buffer,int len)
 * @FilePath: \cpp-pro\operateFiles\readBinaryFiles.cpp
 */
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}

	Person p;
	ifs.read((char *)&p, sizeof(p));

	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}

int main() {

	test01();

	return 0;
}
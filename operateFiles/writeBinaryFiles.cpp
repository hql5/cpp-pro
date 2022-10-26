/*
 * @Author: lhq
 * @Date: 2022-10-26 16:44:31
 * @LastEditTime: 2022-10-26 16:49:54
 * @LastEditors: lhq
 * @Description: write函数已二进制方式写数据。
 * @FilePath: \cpp-pro\operateFiles\writeBinaryFiles.cpp
 */
#include <fstream>
#include <string>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

//二进制文件  写文件
void test01()
{
	//1、包含头文件
	//2、创建输出流对象，指定读写方式为ios::binary
	ofstream ofs("person.txt", ios::out | ios::binary);
	
	//3、打开文件
	//ofs.open("person.txt", ios::out | ios::binary);

	Person p = {"张三"  , 18};

	//4、写文件,字符指针buffer指向一段内存，len是读写的字节数
	ofs.write((const char *)&p, sizeof(p));

	//5、关闭文件
	ofs.close();
}

int main() {

	test01();

	return 0;
}
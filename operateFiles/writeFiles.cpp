/*
 * @Author: lhq
 * @Date: 2022-10-26 16:32:38
 * @LastEditTime: 2022-10-26 16:38:32
 * @LastEditors: lhq
 * @Description: 文本文件已ASCII码保存。操作文件ofstream,ifstream,ftream
 * @FilePath: \cpp-pro\operateFiles\textFiles.cpp
 */
#include <fstream>
using namespace std;

void test01()
{
    //流对象
	ofstream ofs;
    //打开文件(路径，打开方式)
    // ios::in,读文件打开
    // ios::out,写文件打开
    // ios::ate，初始位置文件尾
    // ios::app，追加方式写文件
    // ios::trunc，如果文件存在，先删除再创建
    // ios::binary，二进制方式
	ofs.open("test.txt", ios::out);

    //写入数据
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	ofs.close();
}

int main() {

	test01();

	return 0;
}
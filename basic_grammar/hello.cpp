/*
 * @Author: lhq
 * @Date: 2022-10-14 22:55:49
 * @LastEditTime: 2022-10-14 23:40:09
 * @LastEditors: lhq
 * @Description: 
 * @FilePath: \cpp-pro\hello.cpp
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
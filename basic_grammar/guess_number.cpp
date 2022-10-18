/*
 * @Author: lhq
 * @Date: 2022-10-15 09:47:07
 * @LastEditTime: 2022-10-15 10:16:51
 * @LastEditors: lhq
 * @Description: 猜数字小游戏
 * @FilePath: \cpp-pro\guess_number.cpp
 */
#include <iostream>
#include <random>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 97;
    int guess_number = 0;

	do
	{
		cout << endl << "输入你的猜测：" << endl;
        cin >> guess_number;
        
        if (guess_number > num)
        {
            cout << "猜的数大了！再试一次吧。" << endl;
        }
        else if (guess_number < num)
        {
            cout << "猜的数小了！再试一次吧。" << endl;
            
        }
        else
            cout << "猜中了！这个数就是：" << num << endl;

	} while (num != guess_number);
	
    return 0;
}

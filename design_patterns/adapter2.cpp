/*
 * @Author: lhq
 * @Date: 2022-12-01 19:26:12
 * @LastEditTime: 2022-12-01 19:36:30
 * @LastEditors: lhq
 * @Description: 适配器模式2.新接口包含老接口。
 * @FilePath: \cpp-pro\design_patterns\adapter2.cpp
 */

#include <iostream>
using namespace std;

/**
 * 需求：
 * 对c++的STL库进行升级，比如输入参数变少，一些旧的API需要标记为废弃，但是要留一些时间给用户进行升级，此时就可以使用组合适配器的方式来解决这个问题，首先继承old API，同时包含new API的特性。
 */

class API
{
public:
    void old_apply()
    {
        cout << "old apply." << endl;
    }
};

class newAPI
{
public:
    void new_apply()
    {
        cout << "new apply." << endl;
    }
};

class depAPI : public API
{
public:
    newAPI *_api;
    depAPI()
    {
        _api = new newAPI();
    }
    void new_apply()
    {
        _api->new_apply();
    }
};

void apply(int a, int b, int c)
{
    //老接口函数，使用适配接口
    // API a1;
    // a1.old_apply();
    depAPI a1;
    a1.new_apply();
}

void apply(int a, int b)
{
    newAPI a1;
    a1.new_apply();
}

int main()
{
    apply(1, 2, 3);
    apply(1, 2);
    return 0;
}
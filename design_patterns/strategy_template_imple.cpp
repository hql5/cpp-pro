/*
 * @Author: lhq
 * @Date: 2022-11-21 15:42:42
 * @LastEditTime: 2022-11-21 16:22:07
 * @LastEditors: lhq
 * @Description: 策略模式demo,使用模板实现
 * @FilePath: \cpp-pro\design_patterns\strategy_template_imple.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * =====================================strategy================================
*/
class StrategyA {
public:
    void fun() {
        cout << "strategy A" << endl;
    }
};

class StrategyB {
public:
    void fun() {
        cout << "strategy B" << endl;
    }
};

template<class S>
class Context {
public:
    void operation() {
        s.fun();
    }
private:
    S s;
};

/**
 * ========================================main=================================
*/
int main(int argc, char const *argv[])
{
    Context<StrategyA> contxa;
    contxa.operation();

    return 0;
}

/*
 * @Author: lhq
 * @Date: 2022-11-21 15:42:42
 * @LastEditTime: 2022-11-21 16:16:09
 * @LastEditors: lhq
 * @Description: 策略模式demo
 * @FilePath: \cpp-pro\design_patterns\strategy.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * =================================Strategy====================================
*/
class Strategy {
public:
    virtual void algorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy{
public:
    virtual void algorithmInterface() {
        cout << "concrete strategy A." << endl;
    }
};

class ConcreteStrategyB : public Strategy{
public:
    virtual void algorithmInterface() {
        cout << "concrete strategy B." << endl;
    }
};

class ConcreteStrategyC : public Strategy{
public:
    virtual void algorithmInterface() {
        cout << "concrete strategy C." << endl;
    }
};

/**
 * ============================Context,维护一个对Strategy对象的引用===============
*/
class Context {
public:
    //抽象类不能实例化，声明为引用可将子类对象传递给抽象类引用
    Context(Strategy &strategy) {
        this->m_strategy = &strategy;    
    }

    void contextInterface() {
        this->m_strategy->algorithmInterface();
    }

    Strategy *m_strategy;
};

/**
 * =====================================main====================================
*/
int main(int argc, char const *argv[])
{
    ConcreteStrategyA csa;
    ConcreteStrategyB csb;
    ConcreteStrategyC csc;
    Context context(csa);
    context.contextInterface();

    return 0;
}

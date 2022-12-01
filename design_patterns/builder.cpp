/*
 * @Author: lhq
 * @Date: 2022-11-28 16:21:52
 * @LastEditTime: 2022-11-28 17:10:47
 * @LastEditors: lhq
 * @Description: 建造者模式，生成器模式
 * @FilePath: \cpp-pro\design_patterns\builder.cpp
 */
#include <iostream>
using namespace std;
/**
 * 饮品店制作饮品的流程都类似：
 * 1. 拿杯子的类型（中，大）
 * 2. 接水（冷，热，温）
 * 3. 倒入浓缩汁（各种口味的果汁，茶等）
 * 4. 加入配料（珍珠，椰果等）
 * 5. 封口打包
 *
 * 使用建造者模式实现需求：
 * Drink类定义制作的操作，不同饮品实现Drink类，Director类构建一个使用Drink接口的对象定义制作流程，店员Man类实现制作饮品；
 */
class Drink
{
public:
    Drink(){};
    ~Drink(){};
    virtual void takeCup() = 0;
    virtual void getWater() = 0;
    virtual void getJuice() = 0;
    virtual void addThing() = 0;
    virtual void pack() = 0;
};
//珍珠奶茶
class BubbleTea : public Drink
{
public:
    BubbleTea(){};
    ~BubbleTea(){};
    void takeCup()
    {
        cout << "拿一个中杯。" << endl;
    }
    void getWater()
    {
        cout << "接半杯80°热水。" << endl;
    }
    void getJuice()
    {
        cout << "倒入1/4杯奶茶。" << endl;
    }
    void addThing()
    {
        cout << "加两勺珍珠，一勺椰果。" << endl;
    }
    void pack()
    {
        cout << "密封机打包。" << endl;
    }
};
//柠檬水
class LemonWater : public Drink
{
public:
    LemonWater() {}
    ~LemonWater() {}
    void takeCup()
    {
        cout << "拿一个大杯。" << endl;
    }
    void getWater()
    {
        cout << "接3/4杯冷水。" << endl;
    }
    void getJuice()
    {
        cout << "倒入1/4柠檬水。" << endl;
    }
    void addThing()
    {
        cout << "加两片柠檬。" << endl;
    }
    void pack()
    {
        cout << "密封机打包。" << endl;
    }
};

//定义制作流程
template <class T>
class Director
{
private:
    T t;

public:
    Director() {}
    ~Director() {}
    void makeDrink()
    {
        t.takeCup();
        t.getWater();
        t.getJuice();
        t.addThing();
        t.pack();
    }
};

//店员
template <class T>
class Man
{
private:
    Director<T> dir;

public:
    Man();
    ~Man();

    void getDrink()
    {
        dir.makeDrink();
    }
};

int main(int argc, char const *argv[])
{
    cout << "test" << endl;
    Man<BubbleTea> man;
    BubbleTea bt;
    LemonWater lw;
    man.getDrink();

    return 0;
}

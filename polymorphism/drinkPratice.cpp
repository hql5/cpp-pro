/*
 * @Author: lhq
 * @Date: 2022-10-26 14:20:58
 * @LastEditTime: 2022-10-26 14:42:23
 * @LastEditors: lhq
 * @Description: 多态实现饮品。抽象饮品基类，子类制作咖啡和茶。
 * @FilePath: \cpp-pro\polymorphism\drinkPratice.cpp
 */
#include <iostream>
using namespace std;

class Drink
{
public:
	//定义纯虚函数
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourCup() = 0;
    virtual void PutMaterial() = 0;
    
	void makeDrink() {
        Boil();
        Brew();
        PourCup();
        PutMaterial();
    }
};

class Coffee :public Drink
{
public:
    string name = "coffee";
	virtual void Boil() {
        cout << "1. Boil spring water." << endl;
    }

    virtual void Brew() {
        cout << "2. Brew the soluble coffee." << endl;
    }

    virtual void PourCup() {
        cout << "3. Pour it into coffee cup." << endl;
    }

    virtual void PutMaterial() {
        cout << "4. Add a little sugar and milk." << endl;
    }
};

class Tea :public Drink
{
public:
    string name = "tea";
	virtual void Boil() {
        cout << "1. Boil water." << endl;
    }

    virtual void Brew() {
        cout << "2. Brew some tea leaf." << endl;
    }

    virtual void PourCup() {
        cout << "3. Pour it into tea cup." << endl;
    }

    virtual void PutMaterial() {
        cout << "4. Add a lemmon juice." << endl;
    }
};

//父类做形参，实际传入的是不同子类对象
void MakeDrink(Drink* drink) {
    drink->makeDrink();
    delete drink;
}

void test01()
{
	MakeDrink(new Coffee);
    cout << "-------" << endl;
	MakeDrink(new Tea);
}

int main() {
	test01();

	return 0;
}
/*
 * @Author: lhq
 * @Date: 2022-10-26 13:42:42
 * @LastEditTime: 2022-10-26 14:10:56
 * @LastEditors: lhq
 * @Description: 使用多态设计计算器类，将操作设计为子类。父类指针子类对象。
 * @FilePath: \cpp-pro\polymorphism\calculator.cpp
 */
#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    int opr_lef, opr_rig;

    virtual int getResult (){
        return 0;
    }
};

class AddCalculator :public Calculator {
public:
    int getResult() {
        return (opr_lef+opr_rig);
    }
};

class MinusCalculator :public Calculator {
public:
    int getResult() {
        return (opr_lef-opr_rig);
    }
};

class MultiCalculator :public Calculator {
public:
    int getResult() {
        return (opr_lef*opr_rig);
    }
};

void test() {
    //创建加法计算器
	Calculator *abc = new AddCalculator;
	abc->opr_lef = 10;
	abc->opr_rig = 10;
	cout << abc->opr_lef << " + " << abc->opr_rig << " = " << abc->getResult() 
            << endl;
	delete abc;  //用完了记得销毁

	//创建减法计算器
	abc = new MinusCalculator;
	abc->opr_lef = 10;
	abc->opr_rig = 10;
	cout << abc->opr_lef << " - " << abc->opr_rig << " = " << abc->getResult() 
            << endl;
	delete abc;  

	//创建乘法计算器
	abc = new MultiCalculator;
	abc->opr_lef = 10;
	abc->opr_rig = 10;
	cout << abc->opr_lef << " * " << abc->opr_rig << " = " << abc->getResult() 
            << endl;
	delete abc;
};

int main() {
    test();
    
    return 0;
}
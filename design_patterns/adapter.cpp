/*
 * @Author: lhq
 * @Date: 2022-12-01 19:09:40
 * @LastEditTime: 2022-12-01 19:24:02
 * @LastEditors: lhq
 * @Description: 适配器模式(Adapter)
 * @FilePath: \cpp-pro\design_patterns\adapter.cpp
 */

#include <iostream>
using namespace std;

/**
 * 需求：
 * 数据库的ORM，可以支持同一接口对mysql，sqlite3，postgersql三种数据库的访问。这种情况就可用继承的适配方式来实现。
 */

enum sqlType
{
    mysqlType = 1,
    sqlite3Type,
    postgersqlType
};
enum sqlType type;

class mysql
{
public:
    void select()
    {
        cout << "mysql select." << endl;
    }
};

class sqlite3
{
public:
    void select()
    {
        cout << "sqlite3 select." << endl;
    }
};

class postgersql
{
public:
    void select()
    {
        cout << "postgersql select." << endl;
    }
};

class ORM : public mysql, public sqlite3, public postgersql
{
public:
    void orm_select()
    {
        switch (type)
        {
        case mysqlType:
            mysql::select();
            break;
        case sqlite3Type:
            sqlite3::select();
            break;
        case postgersqlType:
            postgersql::select();
            break;
        default:
            break;
        }
    }
};

void init_sqltype(enum sqlType t)
{
    type = t;
}

int main()
{
    ORM *o = new ORM();
    // ORM o;
    init_sqltype(mysqlType);
    o->orm_select();
    init_sqltype(sqlite3Type);
    o->orm_select();
    init_sqltype(postgersqlType);
    o->orm_select();

    delete o;
    return 0;
}
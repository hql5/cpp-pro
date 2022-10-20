/*
 * @Author: lhq
 * @Date: 2022-10-20 20:39:24
 * @LastEditTime: 2022-10-20 21:01:23
 * @LastEditors: lhq
 * @Description: 友元
 * @FilePath: \cpp-pro\OOB\friendObj.cpp
 */
#include <iostream>
using namespace std;

class Building {
    friend void goodGay(Building *building);
public:
    string sittingRoom;

    Building() {
        this->sittingRoom = "客厅";
        this->bedRoom = "卧室";
    }
private:
    string bedRoom;
};

void goodGay(Building * building) {
    cout << building->sittingRoom << endl;
    cout << building->bedRoom << endl;
}

void test() {
    Building b;
    goodGay(&b);
}

int main(int argc, char const *argv[])
{
    test(); 
    return 0;
}

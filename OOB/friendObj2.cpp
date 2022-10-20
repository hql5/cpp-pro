/*
 * @Author: lhq
 * @Date: 2022-10-20 20:46:43
 * @LastEditTime: 2022-10-20 21:02:54
 * @LastEditors: lhq
 * @Description: 类做友元
 * @FilePath: \cpp-pro\OOB\friendObj2.cpp
 */
#include <iostream>
using namespace std;

class Building;
class House {
public:
    House();
    void viewBuilding();
private:
    Building * building;
};

class Building {
    friend class House;
public:
    string sittingRoom;

    Building();
private:
    string bedRoom;
};

Building::Building() {
    this->sittingRoom = "客厅";
    this->bedRoom = "卧室";
}

House::House() {
    building = new Building;
}

void House::viewBuilding() {
    cout << building->sittingRoom << endl;
    cout << building->bedRoom << endl;
}

void test() {
    House hs;
    hs.viewBuilding();
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

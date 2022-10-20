#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    int * height;

public:
    Person() {
        cout << "unarg construct func" << endl;
    };

    Person (int tage, int theight) {
        age = tage;
        height = new int(theight);
    }

    //deep clone solve the problem of  double free point
    Person (Person &p) {
        age = p.age;
        height = new int (*p.height);
    }

    ~Person() {
        cout << "release func" << endl;
        if (height != NULL) {
            delete height;
            height = NULL;
        }
    };
};

void test() {

    Person p1(18, 110);
    cout << "p1's age is : " << p1.age << "\theight : " << *p1.height << endl;

    Person p2(p1);
    cout << "p2's age is : " << p2.age << "\theight : " << *p2.height << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

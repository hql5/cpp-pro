/*
 * @Author: lhq
 * @Date: 2022-11-15 16:04:17
 * @LastEditTime: 2022-11-15 16:27:46
 * @LastEditors: lhq
 * @Description: 
 * @FilePath: \cpp-pro\STL\demo2.cpp
 */
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
using namespace std;

//部门
#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker {
public:
    string m_name;
    int m_salary;
};

void createWorker(vector<Worker>& v) {
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Worker worker;
        worker.m_name = "w";
        worker.m_name += nameSeed[i];
        worker.m_salary = rand() % 10000 + 10000;
        v.push_back(worker);
    }
    
}

void setGroup(vector<Worker>& v, multimap<int,Worker>& m) {
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
        int depId = rand() % 3;
        m.insert(make_pair(depId, *it));
    }
}

void showWorkerByGroup(multimap<int,Worker>& m) {
    cout << "策划部门：" << endl;
    multimap<int,Worker>::iterator pos = m.find(CEHUA);
    int count = m.count(CEHUA);
    int idx = 0;
    for ( ; pos != m.end() && idx < count; pos++, idx++) {
        cout << "姓名：" << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
    }

    cout << "美术部门：" << endl;
    pos = m.find(MEISHU);
    count = m.count(MEISHU);
    idx = 0;
    for ( ; pos != m.end() && idx < count; pos++, idx++) {
        cout << "姓名：" << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
    }

    cout << "研发部门：" << endl;
    pos = m.find(YANFA);
    count = m.count(YANFA);
    idx = 0;
    for ( ; pos != m.end() && idx < count; pos++, idx++) {
        cout << "姓名：" << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned int)time(NULL));
    vector<Worker> vWorker;
    createWorker(vWorker);

    multimap<int, Worker> mWorker;
    setGroup(vWorker, mWorker);

    showWorkerByGroup(mWorker);
    
    return 0;
}

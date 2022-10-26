/*
 * @Author: lhq
 * @Date: 2022-10-26 15:29:12
 * @LastEditTime: 2022-10-26 16:29:27
 * @LastEditors: lhq
 * @Description: 组装电脑设计。CUP显卡内存设计3个抽象类，不同厂商生产不同的零件。电脑
 *      类调用每个零件接口。
 * @FilePath: \cpp-pro\polymorphism\computer.cpp
 */
#include <iostream>
using namespace std;

class CPU {
public:
    virtual void calculate() = 0;
};

class VideoCard {
public:
    virtual void display() = 0;
};

class Memory {
public:
    virtual void storage() = 0;
};

class Computer
{
private:
    CPU *cpu;
    VideoCard *vc;
    Memory *meo;
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *meo):cpu(cpu), vc(vc), meo(meo) {};
    ~Computer();
    void work() {
        cpu->calculate();
        vc->display();
        meo->storage();
    };
};

Computer::~Computer()
{
    //释放每个零件
    if (this->cpu != NULL)
    {
        delete this->cpu;
        cpu = NULL;
    }
    if (this->vc != NULL)
    {
        delete this->vc;
        vc = NULL;
    }
    if (this->meo != NULL)
    {
        delete this->meo;
        meo = NULL;
    }
}

//Intel
class IntelCPU :public CPU {
public:
    virtual void calculate() {
        cout << "Intel CPU calculating." << endl;
    }
};

class IntelVideoCard :public VideoCard {
public:
    virtual void display() {
        cout << "Intel VideoCard displaying." << endl;
    }
};

class IntelMemory :public Memory {
public:
    virtual void storage() {
        cout << "Intel CPU storaging." << endl;
    }
};

//Lenovo
class LenovoCPU :public CPU {
public:
    virtual void calculate() {
        cout << "Lenovo CPU calculating." << endl;
    }
};

class LenovoVideoCard :public VideoCard {
public:
    virtual void display() {
        cout << "Lenovo VideoCard displaying." << endl;
    }
};

class LenovoMemory :public Memory {
public:
    virtual void storage() {
        cout << "Lenovo CPU storaging." << endl;
    }
};

//组装电脑
void test() {
    CPU *intelCpu = new IntelCPU;
    VideoCard *intelCard = new IntelVideoCard;
    Memory *intelMemory = new IntelMemory;

    cout << "NO.1 Computer is loading." << endl;
    Computer * computer1 = new Computer(intelCpu, intelCard, intelMemory);
	computer1->work();
	delete computer1;

    cout << "-----------------------" << endl;
    cout << "NO.2 Computer is loading." << endl;
	//第二台电脑组装
	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, 
                                        new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "-----------------------" << endl;
    cout << "NO.3 Computer is loading." << endl;
	//第三台电脑组装
	Computer * computer3 = new Computer(new LenovoCPU, new IntelVideoCard, 
                                        new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

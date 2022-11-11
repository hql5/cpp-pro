/*
 * @Author: lhq
 * @Date: 2022-11-11 13:43:03
 * @LastEditTime: 2022-11-11 14:18:46
 * @LastEditors: lhq
 * @Description: demo.评委打分
 * @FilePath: \cpp-pro\STL\demo1.cpp
 */
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <time.h>
using namespace std;

/**
 * 5名选手，10个评委打分，去除最高分和最低分，取平均分。
*/

class Player
{
private:
    /* data */
public:
    Player(string name, int score);
    ~Player();

    string m_name;
    int m_score;
};

Player::Player(string name, int score)
{
    this->m_name = name;
    this->m_score = score;
}

Player::~Player()
{
}

void createPlayers(vector<Player>& v) {
    string nameArr = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        int score = 0;
        string name("P_");
        name += nameArr[i];
        Player p(name, score);
        v.push_back(p);
    }
}

void setScore(vector<Player>& v) {
    for (vector<Player>::iterator it = v.begin(); it != v.end(); it++) {
        deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }
        sort(d.begin(), d.end());
        d.pop_back();
        d.pop_front();

        int sum, meanScore = 0;
        for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
            sum += *dit;
        }
        meanScore = sum / d.size();

        it->m_score = meanScore;        
    }
}

void showScore(vector<Player>& v) {
    for (vector<Player>::iterator it = v.begin(); it != v.end(); it++) {
        cout << "姓名：" << it->m_name << "平均分：" << it->m_score << endl;
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned int) time(NULL));
    vector<Player> v;
    createPlayers(v);

    setScore(v);

    showScore(v);
    
    return 0;
}

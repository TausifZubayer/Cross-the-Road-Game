#include<iostream>
#include<deque>
using namespace std;

class cLane {

private:
    deque<bool> cars;
    bool right;
public:
    cLane(int);
    void Move();
    bool checkPos(int);

};

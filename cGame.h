#include<iostream>
#include<vector>
#include<conio.h>
#include<ctime>
#include "cPlayer.h"
#include "cLane.h"
using namespace std;

class cGame {

private:
    bool quit;
    int numberOfLanes;
    int width;
    int score;
    cPlayer* player;
    vector<cLane*> mapping;

public:
    cGame(int,int);
    void Draw();
    void Input();
    void Logic();
    void Run();

};

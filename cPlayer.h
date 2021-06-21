#include<iostream>
using namespace std;

class cPlayer {

private:
    int x, y;
public:
    cPlayer(int);
    void setX(int);
    void setY(int);
    inline int getX() {return x;}
    inline int getY() {return y;}
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

};

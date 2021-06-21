#include "cGame.h"

int main(){

    /*cLane lane1(20);
    for(int i = 0; i < 20; i++) {
        if(lane1.checkPos(i))
            cout << "1";
        else
            cout << "0";
    }
    lane1.Move();
    cout << endl;
    for(int i = 0; i < 20; i++) {
        if(lane1.checkPos(i))
            cout << "1";
        else
            cout << "0";
    }
    lane1.Move();
    lane1.Move();
    lane1.Move();
    lane1.Move();
    cout << endl;
    for(int i = 0; i < 20; i++) {
        if(lane1.checkPos(i))
            cout << "1";
        else
            cout << "0";
    }*/

    srand(time(NULL));
    cGame game(30, 10);
    game.Run();
    cout << "Game over!" << endl;
    return 0;
}

#include "cGame.h"

cGame::cGame(int w = 20, int h = 10) {
    numberOfLanes = h;
    width = w;
    score = 0;
    quit = false;
    for(int i = 0; i < numberOfLanes; i++) {
        mapping.push_back(new cLane(width));
    }
    player = new cPlayer(width);
}

void cGame::Draw() {
    system("cls");
    for(int i = 0; i < numberOfLanes; i++) {
        for(int j = 0; j < width; j++) {
            if(i == 0 && (j == 0 || j == width - 1))
                cout << "S";
            else if(i == numberOfLanes - 1 && (j == 0 || j == width - 1))
                cout << "F";
            else if(mapping[i] -> checkPos(j) && i != 0 && i != numberOfLanes - 1)
                cout << "#";
            else if(player -> getX() == j && player -> getY() == i)
                cout << "V";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << "Score : " << score << endl;
}

void cGame::Input() {

    if(kbhit()){
        char current = getch();
        if(current == 'a') {
            player -> moveLeft();
        }
        if(current == 'd') {
            player -> moveRight();
        }
        if(current == 'w') {
            player -> moveUp();
        }
        if(current == 's') {
            player -> moveDown();
        }
        if(current == 'q') {
            quit = true;
        }
    }
}

void cGame::Logic() {

    for(int i = 1; i < numberOfLanes - 1; i++) {
        if(rand() % 10 == 1) {
            mapping[i] -> Move();
        }
        if(mapping[i] -> checkPos(player -> getX()) && player -> getY() == i) {
            quit = true;
        }
    }

    if(player -> getY() == numberOfLanes - 1) {
        score++;
        player -> setY(0);
        cout << "\x07";
    }
}

void cGame::Run() {
    while(!quit) {
        Input();
        Draw();
        Logic();
    }
}

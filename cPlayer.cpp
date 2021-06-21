#include "cPlayer.h"

cPlayer::cPlayer(int width) {
    x = width / 2;
    y = 0;
}

void cPlayer::setX(int x) {
    this -> x = x;
}
void cPlayer::setY(int y) {
    this -> y = y;
}

void cPlayer::moveUp() {
    y--;
}

void cPlayer::moveDown() {
    y++;
}

void cPlayer::moveLeft() {
    x--;
}

void cPlayer::moveRight() {
    x++;
}

#include <iostream>
using namespace std;

#include "Mario.h"

//initilazer
Mario::Mario(double sp, double jump){
    speed = sp;
    jumpHigh = jump;
}
Mario::Mario(double x, double y, double sp, double jump){
    xPosition = x;
    yPosition = y;
    speed = sp;
    jumpHigh = jump;
}

bool Mario::jump(){
    cout << "Mario jump with hight: " << jumpHigh << endl;
    yPosition += jumpHigh;
    xPosition += speed;
    return true;
}
bool Mario::walk(){
    cout << "Mario walk with speed: " << speed << endl;
    xPosition += speed;
    return true;
}
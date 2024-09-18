#include <iostream>
#include "Mario.h"
#include "SuperMario.h"
#include "FlyObj.h"
#include "FlyMario.h"

int main(int count, const char* args[]){
    //create an object mario
    Mario *mario = new Mario(2, 4);
    mario->walk();

    SuperMario *superMario = new SuperMario(4, 6);
    superMario->jump();

    FlyObj *fo = new FlyObj();
    fo->fly();

    FlyMario *fm = new FlyMario(5, 5);
    fm->fly();

    return 0;
}
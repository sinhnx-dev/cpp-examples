#include <iostream>
using namespace std;

#include "SuperMario.h"

SuperMario::SuperMario(double sp, double jump) : Mario(sp, jump) {
    enableShoot = false;
}

bool SuperMario::shoot(){
    if(enableShoot){
        cout << "Super Mario shooting..." << endl;
        return true;
    }
    return false;
}
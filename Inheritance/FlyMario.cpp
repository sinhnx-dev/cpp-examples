#include <iostream>
#include "FlyMario.h"
using namespace std;

FlyMario::FlyMario(double speed, double jump) : Mario(speed, jump){
    cout << "initilizer FlyMario Object..." << endl;
}

// bool FlyObj::fly(){
//     cout << "Mario is flying..." << endl;
//     return true;
// }
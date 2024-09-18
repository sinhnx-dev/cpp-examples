#include "Mario.h"

#ifndef SuperMario_H
#define SuperMario_H

class SuperMario : public Mario{
    public:
        bool enableShoot;

        SuperMario(double sp, double jump);

        bool shoot();
};

#endif
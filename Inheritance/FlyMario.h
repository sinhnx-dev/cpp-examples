#include "FlyObj.h"
#include "Mario.h"

#ifndef FlyMario_H
#define FlyMario_H

class FlyMario : public Mario, public FlyObj{
    public:
        FlyMario(double speed, double jump);
};

#endif
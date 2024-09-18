#ifndef Mario_H
#define Mario_H

class Mario{
    public:
        double xPosition;
        double yPosition;
        double speed;
        double jumpHigh;

        Mario(double sp, double jump);
        Mario(double x, double y, double sp, double jump);

        bool jump();
        bool walk();
};

#endif
#ifndef FLY_ROCKET_POWERED_H
#define FLY_ROCKET_POWERED_H

#include <iostream>
#include "FlyBehavior.h"

class FlyRocketPowered : public FlyBehavior
{
public:
    virtual void fly() const override {
        std::cout << "I'm flying with a rocket!\n";
    }
};

#endif

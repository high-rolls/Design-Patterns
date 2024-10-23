#ifndef FLY_WITH_WINGS_H
#define FLY_WITH_WINGS_H

#include <iostream>
#include "FlyBehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
    virtual void fly() const override {
        std::cout << "I'm flying!!\n";
    }
};

#endif

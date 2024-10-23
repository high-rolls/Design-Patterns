#ifndef FLY_NO_WAY_H
#define FLY_NO_WAY_H

#include <iostream>
#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
    virtual void fly() const override {
        std::cout << "I can't fly\n";
    }
};

#endif

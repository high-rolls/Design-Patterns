#ifndef SQUEAK_H
#define SQUEAK_H

#include <iostream>
#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:
    Squeak() {}
    
    virtual void quack() const override {
        std::cout << "Squeak\n";
    }
};

#endif

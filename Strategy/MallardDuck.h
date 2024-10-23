#ifndef MALLARD_DUCK_H
#define MALLARD_DUCK_H

#include <iostream>
#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck : public Duck
{
public:
    MallardDuck() : Duck(new FlyWithWings(), new Quack()) {};

    inline void display() const override
    {
        std::cout << "I'm a Mallard duck\n";
    }
};

#endif

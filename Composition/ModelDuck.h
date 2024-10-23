#ifndef MODEL_DUCK_H
#define MODEL_DUCK_H

#include <iostream>
#include "Duck.h"
#include "FlyNoWay.h"
#include "Quack.h"

class ModelDuck : public Duck
{
public:
    ModelDuck() : Duck(new FlyNoWay(), new Quack()) {};

    inline void display() const override
    {
        std::cout << "I'm a model duck\n";
    }
};

#endif

#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H

#include <iostream>
#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:
    Squeak() {}
    
    virtual void quack() const override {
        std::cout << "<< Silence >>\n";
    }
};

#endif

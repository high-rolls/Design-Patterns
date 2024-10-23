#ifndef QUACK_H
#define QUACK_H

#include <iostream>
#include "QuackBehavior.h"

class Quack : public QuackBehavior
{
public:
    Quack() {}
    
    virtual void quack() const override {
        std::cout << "Quack\n";
    }
};

#endif

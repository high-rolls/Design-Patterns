#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
    Duck(FlyBehavior *flyBehavior, QuackBehavior *quackBehavior) : flyBehavior(flyBehavior), quackBehavior(quackBehavior) {}

    ~Duck()
    {
        delete flyBehavior;
        delete quackBehavior;
    };

    virtual void display() const = 0;

    inline void performFly() const { flyBehavior->fly(); }
    inline void performQuack() const { quackBehavior->quack(); }
    inline virtual void swim() const
    {
        std::cout << "All ducks float, even decoys!\n";
    }

protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
};

#endif

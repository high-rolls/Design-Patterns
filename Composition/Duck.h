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

    inline void setFlyBehavior(FlyBehavior *flyBehavior) {
        // Deleting here only works if the behaviors are always allocated
        // prior to calling this method. If you try to use the same behavior
        // instance in multiple classes, this will make it so deleting a behavior
        // in one of them also deletes the behavior in all others.
        delete this->flyBehavior;
        this->flyBehavior = flyBehavior;
    }

    inline void setQuackBehavior(QuackBehavior *quackBehavior) {
        delete this->flyBehavior;
        this->quackBehavior = quackBehavior;
    }
protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
};

#endif

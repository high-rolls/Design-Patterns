#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H

class QuackBehavior
{
public:
    virtual ~QuackBehavior() {};
    virtual void quack() const = 0;
};

#endif

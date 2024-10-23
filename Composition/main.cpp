#include <iostream>
#include "MallardDuck.h"

int main()
{
    Duck *duck;
    MallardDuck mallard;
    duck = &mallard;
    std::cout << "\n";
    duck->display();
    duck->performFly();
    duck->performQuack();
    duck->swim();
}
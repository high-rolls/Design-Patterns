#include <iostream>
#include "FlyRocketPowered.h"
#include "MallardDuck.h"
#include "ModelDuck.h"

int main()
{
    // flushing with endl seems to fix weird console output starting positions
    std::cout << std::endl;

    Duck *duck;
    MallardDuck mallard;
    duck = &mallard;
    duck->display();
    duck->performFly();
    duck->performQuack();
    duck->swim();

    Duck *model;
    ModelDuck modelDuck;
    model = &modelDuck;
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();
}
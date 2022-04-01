#pragma once
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "Squeak.hpp"
#include <iostream>

class RubberDuck : public Duck
{
public:
    RubberDuck()
    {
        setFlyBehavior(std::make_unique<FlyNoWay>());
        setQuackBehavior(std::make_unique<Squeak>());
    }

    void display() override
    {
        std::cout << "I'm Rubber Duck!" << std::endl;
    }
};

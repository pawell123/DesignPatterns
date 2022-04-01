#pragma once
#include "Duck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include <iostream>

class MallardDuck : public Duck
{
public:
    MallardDuck()
    {
        setFlyBehavior(std::make_unique<FlyWithWings>());
        setQuackBehavior(std::make_unique<Quack>());
    }

    void display() override
    {
        std::cout << "I'm Mallard Duck!" << std::endl;
    }
};

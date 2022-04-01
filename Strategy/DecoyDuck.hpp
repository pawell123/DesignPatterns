#pragma once
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"
#include <iostream>

class DecoyDuck : public Duck
{
public:
    DecoyDuck()
    {
        setFlyBehavior(std::make_unique<FlyNoWay>());
        setQuackBehavior(std::make_unique<MuteQuack>());
    }

    void display() override
    {
        std::cout << "I'm Decoy Duck!" << std::endl;
    }
};

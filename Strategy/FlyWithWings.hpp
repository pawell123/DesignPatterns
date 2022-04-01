#pragma once
#include "FlyBehavior.hpp"
#include <iostream>

class FlyWithWings : public FlyBehavior
{
public:
    void fly()
    {
        std::cout << "I'm flying!" << std::endl;
    }
};

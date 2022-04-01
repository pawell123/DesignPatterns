#pragma once
#include "QuackBehavior.hpp"
#include <iostream>

class Squeak : public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "Squeak!" << std::endl;
    }
};

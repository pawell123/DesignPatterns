#pragma once
#include "QuackBehavior.hpp"
#include <iostream>

class Quack : public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "Quack!" << std::endl;
    }
};

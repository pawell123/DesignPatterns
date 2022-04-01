#pragma once
#include "QuackBehavior.hpp"
#include <iostream>

class MuteQuack : public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "<< Silence >>" << std::endl;
    }
};

#pragma once
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include <iostream>
#include <memory>
#include <utility>

class Duck
{
public:
    void setFlyBehavior(std::unique_ptr<FlyBehavior> behavior)
    {
        flyBehavior = std::move(behavior);
    }

    void setQuackBehavior(std::unique_ptr<QuackBehavior> behavior)
    {
        quackBehavior = std::move(behavior);
    }

    void performFly()
    {
        flyBehavior->fly();
    }

    void performQuack()
    {
        quackBehavior->quack();
    }

    void swim()
    {
        std::cout << "All ducks float!" << std::endl;
    }

    virtual void display() = 0;

private:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;
};

// Strategy

#include "MallardDuck.hpp"
#include "MuteQuack.hpp"
#include "RubberDuck.hpp"
#include "DecoyDuck.hpp"

int main()
{
    MallardDuck mallardDuck;
    mallardDuck.display();
    mallardDuck.performQuack();
    mallardDuck.performFly();

    RubberDuck rubberDuck;
    rubberDuck.display();
    rubberDuck.performQuack();
    rubberDuck.performFly();

    DecoyDuck decoyDuck;
    decoyDuck.display();
    decoyDuck.performQuack();
    decoyDuck.performFly();

    decoyDuck.setFlyBehavior(std::make_unique<FlyWithWings>());

    decoyDuck.performFly();

    return 0;
}

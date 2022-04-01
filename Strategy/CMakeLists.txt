add_executable(strategy Duck.hpp MallardDuck.hpp RubberDuck.hpp DecoyDuck.hpp FlyBehavior.hpp FlyWithWings.hpp FlyNoWay.hpp QuackBehavior.hpp Quack.hpp MuteQuack.hpp Squeak.hpp main.cpp)

target_compile_features(strategy PRIVATE cxx_std_17)


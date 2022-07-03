#include <actor.h>

void Actor::BeginPlay()
{
    std::cout << "Actor BeginPlay() called." << std::endl;
}

void Actor::ActorFunction()
{
    std::cout << "ActorFunction() called." << std::endl;
}
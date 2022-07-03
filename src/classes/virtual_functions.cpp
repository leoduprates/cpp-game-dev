// Virtual Functions
// Reference:

#include <iostream>

class Object
{
public:
    // Pure Virtual
    virtual void BeginPlay() = 0;
};

class Actor : public Object
{
public:
    virtual void BeginPlay() override
    {
        std::cout << "Actor BeginPlay() called." << std::endl;
    }
};

class Pawn : public Actor
{
public:
    virtual void BeginPlay() override
    {
        std::cout << "Pawn BeginPlay() called." << std::endl;
    }
};

int main()
{
    Actor *actor = new Actor;
    actor->BeginPlay();

    Pawn *pawn = new Pawn;
    pawn->BeginPlay();

    delete actor;
    delete pawn;

    return 0;
}

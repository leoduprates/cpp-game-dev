// Virtual Functions
// Reference:

#include <iostream>

class Object
{
public:
    virtual void BeginPlay()
    {
        std::cout << "Object BeginPlay() called." << std::endl;
    }
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
    Object *object = new Object;
    object->BeginPlay();

    Actor *actor = new Actor;
    actor->BeginPlay();

    Pawn *pawn = new Pawn;
    pawn->BeginPlay();

    delete object;
    delete actor;
    delete pawn;

    return 0;
}

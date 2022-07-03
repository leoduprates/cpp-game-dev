// Polymorphism
// Reference: https://cplusplus.com/doc/tutorial/polymorphism/

#include <iostream>

class Character
{
public:
    virtual void BeginPlay()
    {
        std::cout << "Character BeginPlay() called." << std::endl;
    }
};

class Actor : public Character
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

    Character *character = new Character;
    Actor *actor = new Actor;
    Pawn *pawn = new Pawn;

    Character *characterArray[] = {
        character,
        actor,
        pawn
    };

    for (auto character : characterArray)
    {
        character->BeginPlay();
    }

    return 0;
}

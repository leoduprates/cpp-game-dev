// Polymorphism
// Reference:

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

    for (int i = 0; i < std::size(characterArray); i++)
    {
        characterArray[i]->BeginPlay();
    }

    return 0;
}

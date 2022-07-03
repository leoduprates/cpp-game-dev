// Casting
// Reference: https://cplusplus.com/doc/oldtutorial/typecasting/

#include <iostream>

class Character
{
public:
    virtual void BeginPlay()
    {
        std::cout << "Character BeginPlay() called." << std::endl;
    }

    void CharacterFunction()
    {
        std::cout << "CharacterFunction() called." << std::endl;
    }
};

class Actor : public Character
{
public:
    virtual void BeginPlay() override
    {
        std::cout << "Actor BeginPlay() called." << std::endl;
    }

    void ActorFunction()
    {
        std::cout << "ActorFunction() called." << std::endl;
    }
};

class Pawn : public Character
{
public:
    virtual void BeginPlay() override
    {
        std::cout << "Pawn BeginPlay() called." << std::endl;
    }

    void PawnFunction()
    {
        std::cout << "PawnFunction() called." << std::endl;
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
        pawn};

    for (auto character : characterArray)
    {
        Actor *act = dynamic_cast<Actor *>(character);

        if (act)
        {
            act->ActorFunction();
        }

        Pawn *pw = dynamic_cast<Pawn *>(character);

        if (pw)
        {
            pw->PawnFunction();
        }
    }

    return 0;
}

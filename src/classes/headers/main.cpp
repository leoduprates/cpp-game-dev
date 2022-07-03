// Headers
// Reference: https://cplusplus.com/articles/Gw6AC542/

#include <iostream>
#include <character.h>
#include <actor.h>
#include <pawn.h>

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

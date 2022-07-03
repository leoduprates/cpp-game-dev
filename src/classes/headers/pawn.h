#pragma once

#include <character.h>

class Pawn : public Character
{
public:
    virtual void BeginPlay() override;

    void PawnFunction();
};
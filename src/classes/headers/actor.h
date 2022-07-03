#pragma once

#include <character.h>

class Actor : public Character
{
public:
    virtual void BeginPlay() override;

    void ActorFunction();
};
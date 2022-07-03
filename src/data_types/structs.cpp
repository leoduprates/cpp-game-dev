// Structures
// Reference: https://cplusplus.com/doc/tutorial/structures/

#include <iostream>
#include <string>

struct LocationVector
{
    float x;
    float y;
    float z;
};

class Character
{
public:
    std::string name;
    float health;
    int level;
    float damage;
    float stamina;

    LocationVector location = {0.f, 0.f, 0.f};

    void takeDamage(float dmg)
    {
        health -= dmg;
    }

    void attack()
    {
        std::cout << name << " does " << damage << " damage." << std::endl;
    }
};

int main()
{
    Character joel;

    joel.name = "Joel";
    joel.health = 100.f;
    joel.level = 1;
    joel.damage = 2.5f;
    joel.stamina = 20.f;

    joel.attack();

    Character ellie = {"Ellie", 100.f, 3, 15.f, 30.f, {35.5f, 67.2f, 100.44f}};

    ellie.attack();

    return 0;
}

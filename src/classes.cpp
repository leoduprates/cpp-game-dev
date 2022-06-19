// Classes
// Reference: https://cplusplus.com/doc/tutorial/classes/

#include <iostream>
#include <string>

class Enemy
{
public:
    Enemy()
    {
        name = "Damned";
        life = 100.f;
        level = 1;
    }

    Enemy(std::string name, float life, int level) : name(name), life(life), level(level)
    {
    }

    std::string name;
    float life;
    int level;

    void speak()
    {
        std::cout << "I will kill you!" << std::endl;
    }
};

int main()
{
    Enemy phantom;

    std::cout << phantom.name << std::endl;
    std::cout << phantom.life << std::endl;
    std::cout << phantom.level << std::endl;

    Enemy skull("Pirate", 100.f, 1);

    std::cout << skull.name << std::endl;
    std::cout << skull.life << std::endl;
    std::cout << skull.level << std::endl;

    skull.speak();

    return 0;
}

// Classes
// Reference: https://cplusplus.com/doc/tutorial/classes/

#include <iostream>
#include <string>

class Enemy
{
public:
    Enemy()
    {
        _name = "Damned";
        _life = 100.f;
        _level = 1;
    }

    Enemy(std::string name, float life, int level) : _name(name), _life(life), _level(level)
    {
    }

    std::string _name;
    float _life;
    int _level;

    void speak()
    {
        std::cout << "I will kill you!" << std::endl;
    }
};

int main()
{
    Enemy phantom;

    std::cout << phantom._name << std::endl;
    std::cout << phantom._life << std::endl;
    std::cout << phantom._level << std::endl;

    Enemy skull("Pirate", 100.f, 1);

    std::cout << skull._name << std::endl;
    std::cout << skull._life << std::endl;
    std::cout << skull._level << std::endl;

    skull.speak();

    return 0;
}

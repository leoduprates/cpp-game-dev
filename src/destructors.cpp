// Destructors
// Reference: 

#include <iostream>

class Weapon
{
public:
    Weapon()
    {
        name = new std::string("Shotgun");
        type = new std::string("revolver");

        std::cout << "Weapon was forged" << std::endl;
    }

    ~Weapon()
    {
        delete name;
        delete type;
        std::cout << "Weapon was destroied" << std::endl;
    }

    std::string* name;
    std::string* type;
};

int main()
{
    Weapon* weapon = new Weapon;
    delete weapon;
    
    return 0;
}

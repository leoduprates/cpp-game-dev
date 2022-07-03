// Destructors
// Reference: https://cplusplus.com/doc/tutorial/classes2/

#include <iostream>

class Weapon
{
public:
    Weapon()
    {
        name = "Shotgun";
        type = "revolver";

        std::cout << "Weapon was forged" << std::endl;
    }

    ~Weapon()
    {
        std::cout << "Weapon was destroied" << std::endl;
    }

    std::string name;
    std::string type;
};

int main()
{
    Weapon weapon = Weapon();
    
    return 0;
}
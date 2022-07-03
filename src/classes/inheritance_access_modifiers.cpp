// Inheritance & Access Modifiers
// Reference: https://cplusplus.com/doc/tutorial/inheritance/

#include <iostream>
#include <string>

class Creature
{
public:
    Creature()
    {
        name = "Unnameable";
        type = "Unknown";
        invoke();
    }

    Creature(std::string name, std::string type) : name(name), type(type)
    {
    }

    void setName(std::string name)
    {
        this->name = name;
    }

    std::string getName()
    {
        return this->name;
    }

    void invoke()
    {
        std::cout << "I'm invoked to destroy you!" << std::endl;
    }

private:
    std::string name;
    std::string type;

protected:
    float life = 100.f;
};

class Dragon : public Creature
{
public:
    Dragon() : Creature()
    {
    }

    Dragon(std::string name, std::string type) : Creature(name, type)
    {
    }

    void dammage() {
        life -= 10.f;

        std::cout << life << std::endl;
    }
};

int main()
{
    Dragon blackDragon;
    blackDragon.setName("Black Dragon");

    std::cout << blackDragon.getName() << std::endl;

    Dragon whiteDragon("White Dragon", "Dragon");

    std::cout << whiteDragon.getName() << std::endl;

    whiteDragon.dammage();

    return 0;
}

// Static Variable
// Reference:

#include <iostream>

class Critter
{
public:
    Critter()
    {
        std::cout << "A critter is born." << std::endl;
        ++critterCount;
    }

    static void getCritterCount()
    {
        std::cout << critterCount << std::endl;
    }

    static int critterCount;
};

int Critter::critterCount = 0;

int main()
{
    Critter::getCritterCount();

    Critter critter;

    std::cout << Critter::critterCount << std::endl;

    Critter otherCritter;

    std::cout << Critter::critterCount << std::endl;

    return 0;
}

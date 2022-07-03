// Pointers
// Reference: https://cplusplus.com/doc/tutorial/pointers/

#include <iostream>
#include <string>

void structPointer()
{
    struct Item
    {
        std::string type;
        std::string name;
        int quantity;
    };

    Item item = {"Medicine", "Potion", 1};

    Item *PtrItem = &item;

    std::cout << (*PtrItem).name << std::endl;
    std::cout << PtrItem->quantity << std::endl;
}

void stringPointer()
{
    std::string world = "Irinium";

    std::string* PtrWorld = &world;

    std::cout << PtrWorld << std::endl;
    std::cout << *PtrWorld << std::endl;
}

void arrayString()
{
    int phases[] = {1, 2, 3, 4};
    int* PtrPhases = phases;

    std::cout << *PtrPhases << std::endl;

    PtrPhases++;

    std::cout << *PtrPhases << std::endl;
}

int main()
{
    stringPointer();
    structPointer();
    arrayString();

    return 0;
}

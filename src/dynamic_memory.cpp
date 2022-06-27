// Dynamic Memory
// Reference: https://m.cplusplus.com/doc/tutorial/dynamic/

#include <iostream>
#include <string>

struct Character
{
    std::string name;
    std::string health;
};

int main()
{
    Character* ptrCharacter = new Character();
    
    ptrCharacter->name = "Neo";

    std::cout << ptrCharacter->name << std::endl;

    delete ptrCharacter;
    ptrCharacter = nullptr;

    return 0;
}

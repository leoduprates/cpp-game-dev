// Enumerations & Switch Statments
// Reference: https://cplusplus.com/doc/tutorial/other_data_types/

#include <iostream>

enum PlayerStatus
{
    CROUCHED = 'c',
    STANDING,
    RUNNING,
    SPRITING
};

enum ItemStatus
{
    PICKEDUP,
    DROPPED,
    EQUIPPED
};

int main()
{
    PlayerStatus status = CROUCHED;

    switch (status)
    {
    case CROUCHED:
        std::cout << char(CROUCHED) << std::endl;
        break;
    case STANDING:
        std::cout << "Standing" << std::endl;
        break;
    case RUNNING:
        std::cout << "Running" << std::endl;
        break;
    case SPRITING:
        std::cout << "Spriting" << std::endl;
        break;
    default:
        std::cout << "Invalid status" << std::endl;
        break;
    }

    return 0;
}

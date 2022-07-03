// For Loop
// Reference: https://cplusplus.com/doc/tutorial/control/

#include <iostream>

int main()
{
    int numbers[] = {1, 2, 4, 5};

    for (int i = 0; i < std::size(numbers); i++) // std::size C++ 17+
    {
        std::cout << numbers[i] << std::endl;
    }

    // C++ 11
    for (auto number : numbers)
    {
        std::cout << number << std::endl;
    }

    return 0;
}

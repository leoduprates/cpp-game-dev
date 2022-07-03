// Arrays
// Reference: https://cplusplus.com/doc/tutorial/arrays/

#include <iostream>
#include <array>

int main()
{
    int myIntArray[3];
    int myIntValues[3] = {10, 20, 30};
    std::array<int, 3> myValuesArray{40, 50, 60};

    for (int i = 0; i < 3; i++)
    {
        myIntArray[i] = i;

        std::cout << myIntArray[i] << std::endl;
        std::cout << myIntValues[i] << std::endl;
        std::cout << myValuesArray[i] << std::endl;
    }

    return 0;
}

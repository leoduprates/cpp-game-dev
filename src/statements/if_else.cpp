// If Else
// Reference: https://cplusplus.com/doc/tutorial/control/

#include <iostream>

int main()
{
    int a(1); // parentheses notation
    int b = 13;

    if (a < b)
    {
        std::cout << "a is less than b." << std::endl;
    }
    else if (a < b)
    {
        std::cout << "b is not less than a." << std::endl;
    }
    else
    {
        std::cout << "a is equal to b" << std::endl;
    }

    return 0;
}

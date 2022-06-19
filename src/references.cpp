// References (&) create a alias to a memory address.
// Reference: https://cplusplus.com/articles/1075fSEw/

#include <iostream>

void addOne(int &num)
{
    num++;
}

int main()
{
    int value = 1;

    addOne(value);

    std::cout << value << std::endl;

    return 0;
}

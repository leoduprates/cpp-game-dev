// Standard Input Stream
// Reference: https://cplusplus.com/reference/iostream/cin/?kw=cin

#include <iostream>

char getResponse()
{
    char response;

    std::cout << "Please, fill your char: " << std::endl;

    std::cin >> response;

    return response;
}

int main()
{
    char response = getResponse();

    std::cout << "Your char: " << response << std::endl;
    return 0;
}

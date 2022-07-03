// Overloading Functions
// Reference: https://cplusplus.com/doc/tutorial/functions2/

#include <iostream>
#include <string>

void log(std::string message);
void log(std::string level, std::string message);

void log(std::string message)
{
    std::cout << message << std::endl;
}

void log(std::string level, std::string message)
{
    std::cout << level << ": " << message << std::endl;
}

int main()
{
    log("This is a log");
    log("WARN", "This is a log with level");

    return 0;
}
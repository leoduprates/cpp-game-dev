// While Loop
// Reference: https://cplusplus.com/doc/tutorial/control/

#include <iostream>

void whileTest()
{
    float start = 0.00;
    float end = 1.00;

    while (end > start)
    {
        start += 0.01;
        std::cout << "Actual value is: " << start << std::endl;
    }
}

void doWhileTest()
{
    float start = 0.10;
    float end = 0.40;

    do
    {
        start += 1.0;
        std::cout << "Actual value is: " << start << std::endl;
    } while (end > start);
}

void breakWhileTest()
{
    float start = 1;
    float end = 100;

    while (end <= 100)
    {
        start++;

        if (start > 50)
        {
            std::cout << "Break!" << std::endl;
            break;
        }

        std::cout << "Actual value is: " << start << std::endl;
    }
}

void continueWhileTest()
{
    int start = 0;
    int end = 0;

    do
    {
        start += 10;
        end = start * start;

        if (end > 10000)
        {
            std::cout << "Continue" << std::endl;
            continue;
        }

        std::cout << "Actual start value is: " << start << std::endl;
        std::cout << "Actual end value is: " << end << std::endl;
    } while (start <= 100);
}

int main()
{
    // whileTest();
    // doWhileTest();
    // breakWhileTest();
    continueWhileTest();

    return 0;
}

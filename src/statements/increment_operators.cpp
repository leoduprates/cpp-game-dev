// Increment Operators
// Reference: https://en.cppreference.com/w/cpp/language/operator_incdec

#include <iostream>

int main()
{
    int i = 1;

    i += 1;
    std::cout << "i is: " << i << std::endl;

    i -= 1;
    std::cout << "i was 2, now i is: " << i << std::endl;

    i *= 6;
    std::cout << "i was 1, now i is: " << i << std::endl;

    i /= 3;
    std::cout << "i was 6, now i is: " << i << std::endl;

    i % 1;
    std::cout << "i was 2, now i is: " << i << std::endl;

    // Preincrement: first increment by 1, then return the result.
    ++i;
    std::cout << "i was 2, now i is: " << i << std::endl;

    // Postincrement: first return the i, then first increment by 1.
    i++;
    std::cout << "i was 2, now i is: " << i << std::endl;

    return 0;
}

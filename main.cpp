#include <iostream>
#include "RomanToInteger.h"

/*
 * Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50,
Example 3:

Input: s = "MCMXCIV"
 */



int main() {
    std::cout << "Hello, World!" << std::endl;

    RomanToInteger romanToInteger;
    std::cout << "The number is: " << romanToInteger.romanToInt("III") << std::endl;
    std::cout << "The number is: " << romanToInteger.romanToInt("LVIII") << std::endl;
    std::cout << "The number is: " << romanToInteger.romanToInt("MCMXCIV") << std::endl;

    return 0;
}

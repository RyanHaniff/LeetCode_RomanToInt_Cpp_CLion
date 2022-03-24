// Created by rhani on 2022-03-22.
/*
 * https://leetcode.com/problems/roman-to-integer/
 *
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II.
The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII.
Instead, the number four is written as IV. Because the one is before the five we subtract it making four.
The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
M = 1000 + ((C = 100 - M = 1000) = 900) + ((X = 10 - C = 100) = 90) + ((I = 1 - V = 5) = 4) = 1000 + 900 + 90 + 4
 */

#include "RomanToInteger.h"
#include <iostream>

RomanToInteger::RomanToInteger() = default;

int RomanToInteger::romanToInt(const std::string &s) {
    counter = 0;
    int number = 0;

    while (counter <= s.size() - 1) {

        if (getLetter(s) == 'I') {
            counter++;
            if (counter != s.size()) {
                if (getLetter(s) == 'V') {
                    counter++;
                    number += 4;
                } else if (getLetter(s) == 'X') {
                    counter++;
                    number += 9;
                } else {
                    number += 1;
                }
            } else {
                number += 1;
            }
        } else if (getLetter(s) == 'X') {
            counter++;
            if (counter != s.size()) {
                if (getLetter(s) == 'L') {
                    counter++;
                    number += 40;
                } else if (getLetter(s) == 'C') {
                    counter++;
                    number += 90;
                } else {
                    number += 10;
                }
            } else {
                number += 10;
            }
        } else if (getLetter(s) == 'C') {
            counter++;
            if (counter != s.size()) {
                if (getLetter(s) == 'D') {
                    counter++;
                    number += 400;
                } else if (getLetter(s) == 'M') {
                    counter++;
                    number += 900;
                } else {
                    number += 100;
                }
            } else {
                number += 100;
            }
        } else if (getLetter(s) == 'V') {
            counter++;
            number += 5;
        } else if (getLetter(s) == 'L') {
            counter++;
            number += 50;
        } else if (getLetter(s) == 'D') {
            counter++;
            number += 500;
        } else if (getLetter(s) == 'M') {
            counter++;
            number += 1000;
        }
    }

    return number;
//    switch (getLetter(s)) {
//        case 'I':
//            counter++;
//            number++;
//            break;
//
//        case 'V': // 5
//
//            break;
//        case 'X': // 10
//
//            break;
//        case 'L': // 50
//
//            break;
//
//        case 'C': // 100
//
//            break;
//
//        case 'D': // 500
//
//            break;
//
//        case 'M': // 10000
//
//            break;
//        default:
//
//            break;
//
//
//    }
}

char RomanToInteger::getLetter(std::string s) {

    return s.at(counter);

}
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Anh Pham
 */

/* A non-reference function can be declared. We can do this by setting it to a variable in a function. Once its set to an unmodifideable object it cant be change however
 * if needed the address can be use.*/

#include <iostream>

int FuncTest (int x, int y) {
    x = x * y;
    return x * y;
}

int constantTest (const int x, const int y) {
    return x * y;
}

int main() {
    int x = 10;
    int y = 10;

    std::cout << "\nx * y = " << FuncTest(x,y);
    std::cout << "\nx * y = " << constantTest(x, y);
    return 0;
}

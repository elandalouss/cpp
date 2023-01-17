#include <iostream>

int main() {
    // int x = 5;
    // int y = ++x; // x is 6, y is 6

    int x = 5;
    int y = x++; // x is 6, y is 5

    std::cout << "x = "<< x << std::endl;
    std::cout << "y = " << y << std::endl;
}
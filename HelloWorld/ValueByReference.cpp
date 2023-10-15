#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Fire";
    std::string y = "Water";

    swap(x, y);

    // The memory address of x and y are the same as the memory address of the variables in the swap function.
    std::cout << "x: " << &x << std::endl;
    std::cout << "y: " << &y << std::endl;

    // The values of x and y are the same as the values of the variables in the swap function.
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}

void swap(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}
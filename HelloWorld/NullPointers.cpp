#include <iostream>

int main()
{
    // nullptr is a keyword that represents a null pointer

    // nullptr are helpful when determining if an address was successfully assigned to a pointer

    // when using pointers, be careful that your code isn't dereferencing null or pointing to free memory
    // this can cause your program to crash

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Address was not assigned!" << std::endl;
    }
    else
    {
        std::cout << "Address was assigned!" << std::endl;
        std::cout << "Address: " << pointer << std::endl;
    }

    return 0;
}
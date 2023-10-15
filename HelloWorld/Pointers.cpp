#include <iostream>

int main()
{
    // Pointers are variables that store memory addresses.
    // The asterisk (*) is used to declare a pointer.
    // The ampersand (&) is used to get the memory address of a variable.

    std::string name = "Uallesson";
    std::string *pointer = &name;

    // The memory address of the variable name.
    std::cout << pointer << std::endl;

    // The asterisk (*) is also used to get the value of a pointer.
    std::cout << *pointer << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    std::string name = "Uallesson";
    int age = 29;
    bool student = true;

    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;

    return 0;
}
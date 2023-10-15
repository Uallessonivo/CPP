#include <iostream>

void printInfo(const std::string name, const int age);

int main()
{
    std::string name = "Uallesson";
    int age = 29;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age)
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}
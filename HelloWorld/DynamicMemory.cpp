#include <iostream>

int main()
{
    char *pGrades = NULL;

    int size;

    std::cout << "How many grades will you enter? ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " " << std::endl;
    }

    delete[] pGrades;

    return 0;
}

int main_v2()
{
    int *pNum = NULL;

    pNum = new int;

    *pNum = 42;

    std::cout << "Address: " << pNum << std::endl;
    std::cout << "Value: " << *pNum << std::endl;

    delete pNum;

    return 0;
}
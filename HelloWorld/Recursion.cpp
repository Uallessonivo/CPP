#include <iostream>

int factorial(int num);

int main()
{
    std::cout << factorial(10);

    return 0;
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

#include <iostream>

int main()
{
    // integers
    int a, b;

    a = 1;
    b = 2;

    std::cout << a + b << "\n";

    // double (integers including decimals)
    double c, d;

    c = 3.0;
    d = 4.2;

    std::cout << c + d << "\n";

    // single character
    char grade = 'A';

    std::cout << grade << "\n";


    // boolean
    bool student = true;

    std::cout << student << "\n";

    // string
    std::string name = "Bro";
    std::string day = "Friday";

    // next line : << "\n"

    std::cout << "Hello, " << name << "it's " << day << "\n";

    // casting
    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;

    std::cout << score << "%";
    
    return 0;
}

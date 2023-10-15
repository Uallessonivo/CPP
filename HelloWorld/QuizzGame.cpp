#include <iostream>

int main()
{
    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. James Gosling", "D. Guido van Rossum"},
                                {"A. C", "B. C#", "C. Simula", "D. Java"}};

    char answer_key[] = {'D', 'A', 'C'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std::cout << "**************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "**************" << std::endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << std::endl;
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answer_key[i])
        {
            std::cout << "Correct!" << std::endl;
            score++;
        }
        else
        {
            std::cout << "Wrong!" << std::endl;
            std::cout << "The correct answer is " << answer_key[i] << std::endl;
        }
    }

    std::cout << "Your score is " << score << "/" << size << std::endl;

    return 0;
}
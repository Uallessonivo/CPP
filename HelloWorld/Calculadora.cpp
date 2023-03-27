#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Digite a operação que deseja realizar (+, -, *, /, ^, r)";
    cin >> op;

    switch (op)
    {
    case '*':
        cout << "Digite os números que deseja multiplicar: ";
        cin >> num1 >> num2;
        cout << "Resultado: " << num1 * num2 << '\n';
        break;

    case '+':
        cout << "Digite os números que deseja somar: ";
        cin >> num1 >> num2;
        cout << "Resultado: " << num1 + num2 << '\n';
        break;

    case '-':
        cout << "Digite os números que deseja subtrair: ";
        cin >> num1 >> num2;
        cout << "Resultado: " << num1 - num2 << '\n';
        break;

    case '/':
        cout << "Digite os números a serem divididos: ";
        cin >> num1 >> num2;
        if (num2 == 0)
        {
            cout << "Não é possível dividir por 0" << '\n';
        }
        else
        {
            cout << "Resultado: " << num1 / num2 << '\n';
        }
        break;

    case '^':
        cout << "Digite a base do expoente: ";
        cin >> num1 >> num2;
        cout << "Resultado: " << pow(num1, num2) << '\n';
        break;

    case 'r':
        cout << "Digite o número a ser calculada a raiz quadrada: ";
        cin >> num1;
        if (num1 < 0)
        {
            cout << "Não é possível calcular a raiz quadrada de um número negativo";
        }
        else
        {
            cout << "Resultado " << sqrt(num1) << '\n';
        }
        break;

    default:
        cout << "Opção inválida!";
        break;
    }

    return 0;
}

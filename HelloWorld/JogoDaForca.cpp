#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Exibir a palavra com as letras descobertas
void exibirPalavra(string palavra, vector<char> letrasDescobertas)
{
    for (char letra : palavra)
    {
        if (find(letrasDescobertas.begin(), letrasDescobertas.end(), letra) != letrasDescobertas.end())
        {
            cout << letra << " ";
        }
        else
        {
            cout << "_ ";
        }
        cout << '\n';
    }
}

int main()
{
    string palavra;
    cout << "Digite a palavra a ser adivinhada: ";
    cin >> palavra;

    transform(palavra.begin(), palavra.end(), palavra.begin(), ::toupper);

    // Inicializar as letras descobertas como vazio
    vector<char> letrasDescobertas;
    // Loop do jogo
    int tentativas = 0;
    while (true)
    {
        // Exibir a palavra com as letras descobertas
        exibirPalavra(palavra, letrasDescobertas);
        // Pedir uma letra
        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;
        letra = toupper(letra);

        // Verificar se a letra já foi descoberta antes
        if (find(letrasDescobertas.begin(), letrasDescobertas.end(), letra) != letrasDescobertas.end())
        {
            cout << "Essa letra já foi descoberta antes. Tente novamente. " << '\n';
            continue;
        }

        // Verificar se a letra está na palavra
        if (palavra.find(letra) != string::npos)
        {
            letrasDescobertas.push_back(letra);
            cout << "Letra correta!" << '\n';

            // Verificar se todas as letras foram descobertas
            if (letrasDescobertas.size() == palavra.size())
            {
                cout << "Parabéns, você adivinhou a palavra \"" << palavra << "\"!" << '\n';
                break;
            }            
        }
        else
        {
            tentativas++;
            cout << "Letra incorreta. Tentativas restantes: " << 6 - tentativas << '\n';
            // Verificar se as tentativas acabaram
            if (tentativas == 6)
            {
                cout << "Você perdeu. A palavra era \"" << palavra << "\"." << '\n';
                break;
            }            
        }       
        
    }
    
    return 0;
}

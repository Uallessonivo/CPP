#include <iostream>
#include <string>

using namespace std;

// Exibe o tabuleiro
void exibirTabuleiro(char tabuleiro[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << tabuleiro[i][j] << " ";
        }
        cout << '\n';
    }
}

// Verificar se houve vitoria
bool verificarVitoria(char tabuleiro[3][3], char jogador)
{
    // Verificar Linhas
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
        {
            return true;
        }
    }

    // Verificar Colunas
    for (int j = 0; j < 3; j++)
    {
        if (tabuleiro[0][j] == jogador && tabuleiro[1][j] == jogador && tabuleiro[2][j] == jogador)
        {
            return true;
        }
    }

    // Verificar Diagonais
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador)
    {
        return true;
    }

    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)
    {
        return true;
    }

    return false;
}

int main()
{
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int linha, coluna;
    char jogador = 'X';
    bool vitoria = false;
    char exit;

    // Loop do jogo
    while (!vitoria)
    {
        // Exibir tabuleiro
        exibirTabuleiro(tabuleiro);
        // Pedir entrada do jogador
        cout << "Jogador " << jogador << ", digite a linha e a coluna (ex: 1 2): ";
        cin >> linha >> coluna;
        // Verificar se a jogada é válida
        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || tabuleiro[linha - 1][coluna - 1] != ' ')
        {
            cout << "Jogada inválida. Tente novamente." << '\n';
        }
        else
        {
            // Fazer a jogada
            tabuleiro[linha - 1][coluna - 1] = jogador;
            // Verificar se houve um vitoria
            if (verificarVitoria(tabuleiro, jogador))
            {
                cout << "Parabéns, jogador " << jogador << " Venceu!" << '\n';
                vitoria = true;
            }
            jogador = (jogador == 'X') ? 'O' : 'X';
        }
    }

    // Exibir tabuleiro final
    while (exit != 'S')
    {
        exibirTabuleiro(tabuleiro);
        cout << "Digite 'S' para sair. " << '\n';
        cin >> exit;
    }
    
    
    return 0;
}

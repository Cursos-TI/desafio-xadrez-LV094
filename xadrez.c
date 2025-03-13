#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int CimaDireita, Direita, Esquerda = 1;

    while (CimaDireita <= 5)
    {
        printf("CimaDireita\n", CimaDireita);

        CimaDireita++;
    } printf("O bispo andou 5 casas para a diagonal! \n");

    do {

        printf("Direita\n", Direita);
        Direita++;
    } while (Direita <= 5); {

    
    } printf("A torre andou 5 casas para a orizontal");



    return 0;
}

#include <stdio.h>

int main() {
// Nível Novato - Movimentação das Peças
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

// Implementação de Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 1;
    while (casasBispo <= movimentosBispo) {
        printf("Casa %d: Cima, Direita\n", casasBispo);
        casasBispo++;}

// Implementação de Movimentação da Torre
 printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Casa %d: Direita\n", i);}

// Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    int casasRainha = 1;
    do {
        printf("Casa %d: Esquerda\n", casasRainha);
        casasRainha++;
    } while (casasRainha <= movimentosRainha);

    return 0;
    }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

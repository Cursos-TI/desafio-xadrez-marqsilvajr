#include <stdio.h>

int main() {
// Nível Novato - Movimentação das Peças
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;
    int movimentosCavaloVertical = 2; // Duas casas - baixo
    int movimentosCavaloHorizontal = 1; // Uma casa - esquerda

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
    
// Nível Aventureiro - Movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    
// Loop 1  para as 2 casas para baixo (FOR)
for (int i = 1; i <= movimentosCavaloVertical; i++) {
    printf("Casa %d: Baixo\n", i);
}

// Loop 2 para 1 casa para a esquerda (WHILE)
int casasCavalo = 1;
while (casasCavalo <= movimentosCavaloHorizontal) {
    printf("Casa %d: Esquerda\n", casasCavalo);
    casasCavalo++;
}
    return 0;
}

    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
 
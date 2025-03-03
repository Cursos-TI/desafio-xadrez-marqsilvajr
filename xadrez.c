#include <stdio.h>

// Função para mover a Torre (direita)
void moveTorre(int movimentos) {
    if (movimentos == 0) return; 
    printf("Casa %d: Direita\n", movimentos);
    moveTorre(movimentos - 1);
}

// Função para mover a Rainha (esquerda)
void moveRainha(int movimentos) {
    if (movimentos == 0) return; 
    printf("Casa %d: Esquerda\n", movimentos);
    moveRainha(movimentos - 1);
}

// Movimentação Bispo Recursivo + loops aninhados - diagonal para cima e direita
void moveBispo(int movimentos, int casaAtual) {
    if (movimentos == 0) return;

    printf("Casa %d: Cima\n", casaAtual);
    printf("Casa %d: Direita\n", casaAtual);
    moveBispo(movimentos - 1, casaAtual + 1);
}

// Movimentação do Cavalo - loops aninhados + continue e break
void moveCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentosVerticais = 2; 
    int movimentosHorizontais = 1;

    for (int i = 1; i <= movimentosVerticais; i++) { 
        printf("Casa %d: Cima\n", i);
    }

    int casasCavalo = 1;
    while (casasCavalo <= movimentosHorizontais) { 
        if (casasCavalo == 0) continue; // Evitando movimento inválido
        printf("Casa %d: Direita\n", casasCavalo);
        casasCavalo++;
    }
}

int main() {
        int movimentosTorre = 5;
        int movimentosBispo = 5;
        int movimentosRainha = 8;
    
        // Torre
        printf("Movimento da Torre:\n");
        moveTorre(movimentosTorre);
        printf("\n");
    
        // Bispo
        printf("Movimento do Bispo:\n");
        moveBispo(movimentosBispo, 1);
        printf("\n");
    
        // Rainha
        printf("Movimento da Rainha:\n");
        moveRainha(movimentosRainha);
        printf("\n");
    
        // Cavalo
        moveCavalo();
    
        return 0;
    }
#include <stdio.h>
#include <stdlib.h>
// Função recursiva para a torre
void movimentoTorr(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    movimentoTorr(casas - 1);
}

// Função recursiva para o bispo

void movimentoBispo(int casas, int passo) {
    if (casas == 0) return;
    printf("Cima e Direita\n");
    movimentoBispo(casas - 1, passo);
}
// Função recursiva para a rainha

void movimentoRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    movimentoRainha(casas - 1);
}

// Função recursiva para a cavalo
//loop
void movimentoCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            if (i == 0) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
    printf("\n");
}

//Movimento bispo
void movimentoBispoLoops(int casas) {
    printf("Movimento do Bispo com Loops:\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j <= i; j++) {
            printf("Cima e Direita\n");
        }
    }
    printf("\n");
}

int main() {

    printf("Movimento da Torre:\n");
    movimentoTorr(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    movimentoBispo(5, 1);
    printf("\n");


    printf("Movimento da Rainha:\n");
    movimentoRainha(8);
    printf("\n");


    movimentoCavalo();


    movimentoBispoLoops(5);

    return 0;
}

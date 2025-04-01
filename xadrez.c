#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Movimento da torre \n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita \n");
    }


    printf("Movimento do bispo \n");
    int m = 1;
    while (m <= 5) {
        printf("Cima e direita \n");
        m++;
    }


    printf("Movimento da rainha \n");
    int r = 1;
    do {
        printf("Esquerda \n");
        r++;
    } while (r <= 8);


    printf("\n");


    printf("Movimento do cavalo \n");


    for (int i = 0; i < 2; i++) {
        printf("Baixo \n");
        for (int j = 0; j < 1; j++) {
            if (i == 1) {
                printf("Esquerda \n");
            }
        }
    }

    return 0;
}

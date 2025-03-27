#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Movimento da torre \n");
    for (int i = 1; i<= 5; i++){
        printf("Direita \n");
    }

    printf("Movimento bispo \n");
    int m = 1;
     while(m <= 5){
        printf("Cima e direita \n");
        m++;
     }


    printf("Movimneto rainha \n");
     int r = 1;
     do{
        printf("Esquerda \n");
        r++;
     }while(r <= 8);


     return 0;
}

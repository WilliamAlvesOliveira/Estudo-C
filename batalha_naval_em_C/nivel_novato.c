#include <stdio.h>

int main(){
    //inicializando tabuleiro
    int table[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
    };
    //inicializando navíos
    int navio1[3] = {3, 3, 3}, navio2[3] = {3, 3, 3};

    //exibição do tabuleiro vazio
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //definindo posição do navio 1: linha 3, colunas G, H e I
    for(int i = 0; i < 3; i++){
        table[2][6 + i] = navio1[i];
    }

    //definindo posição do navío 2: linha 3, 4 e 5, coluna C
    for(int i = 0; i < 3; i++){
        table[2 + i][2] = navio2[i];
    }

    //Exibição dos navios no tabuleiro
    printf("    A  B  C  D  E  F  G  H  I  J \n");
    for(int i = 0; i < 10; i++){
        printf("%2d|", i + 1);
        for(int j = 0; j < 10; j++){
            printf(" %d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
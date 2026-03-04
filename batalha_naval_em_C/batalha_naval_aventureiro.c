#include <stdio.h>

int main(){
    //inicializando tabuleiro
    int table[10][10] = {0};
    //inicializando navíos
    int submarino1[3] = {3, 3, 3}, submarino2[3] = {3, 3, 3},
        destroyer[2] = {3, 3}, porta_avioes[4] = {3, 3, 3, 3};

    //definindo posição do submarino 1: linha 3, colunas G, H e I
    //definindo posição do submarino 2: linha 3, 4 e 5, coluna C
    for(int i = 0; i < 3; i++){
        table[2][6 + i] = submarino1[i];
        table[2 + i][2] = submarino2[i];
    }
    
    //definindo destroyer na posição F5, G6
    for(int i = 0; i < 2; i++){
        table[4 + i][5 + i] = destroyer[i];
    }

    //definindo porta aviões na posição F10, G9, H8, I7
    for(int i = 0; i < 4; i++){
        table[9 - i][5 + i] = porta_avioes[i];
    }

    //Exibição dos vavíos no tabuleiro
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
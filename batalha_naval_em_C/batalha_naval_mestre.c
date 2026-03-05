#include <stdio.h>

#define EFEITO 5
#define CENTRO 2    
#define TXT_GREEN "\x1b[32m"
#define TXT_RED "\x1b[31m"
#define ANSI_RESET "\x1b[0m"

int main(){
    //inicializando tabuleiro
    int table[10][10] = {0},
    cone[EFEITO][EFEITO] = {0}, cruz[EFEITO][EFEITO] = {0}, octaedro[EFEITO][EFEITO] = {0};

    //atrubuindo efeitos
    for(int row = 0; row < EFEITO; row++){
        for(int col = 0; col < EFEITO; col++){
            //atribuição do cone
            if(row < 3){
                if(col >= CENTRO - row && col <= CENTRO + row){
                    cone[row][col] = 1;
                }
            }

            //atribuição da cruz
            if(col == CENTRO || row == CENTRO){
                cruz[row][col] = 2;
            }

            //atribuição do octaedro
            if(row <= CENTRO){
                if(col >= CENTRO - row && col <= CENTRO + row){
                    octaedro[row][col] = 3;
                }
            }else{
                if(col >= row - CENTRO && col <= (2*CENTRO - (row - CENTRO))){
                    octaedro[row][col] = 3;
                }
            }
        }
    }

    for(int row = 0; row < EFEITO; row++){
        printf("%2d|", row + 1);
        for(int col = 0; col < EFEITO; col++){
            printf(" %d ", cone[row][col]);
        }
        
        printf(" | ");
        for(int col = 0; col < EFEITO; col++){
            printf(" %d ", cruz[row][col]);
        }
        printf(" | ");

        for(int col = 0; col < EFEITO; col++){
            printf(" %d ", octaedro[row][col]);  
        }
        printf(" | ");
        printf("\n");
    }

    printf("\n");

    //atribuição do superEFEITO no tabuleiro
    //cone a partir de A1, cruz F6, octaedro B2
    for(int row = 0; row < EFEITO; row++){
        for(int col = 0; col < EFEITO; col++){
            if(cone[row][col] != 0){
                if(table[0 + row][0 + col] != 0){
                    table[0 + row][0 + col] = 5;
                }else{
                    table[0 + row][0 + col] = cone[row][col];
                }
            }

            if(cruz[row][col] != 0){
                if(table[5 + row][5 + col] != 0){
                    table[5 + row][5 + col] = 5;
                }else{
                    table[5 + row][5 + col] = cruz[row][col];
                }    
            }

            if(octaedro[row][col] != 0){
                if(table[1 + row][1 + col] != 0){
                    table[1 + row][1 + col] = 5;
                }else{
                    table[1 + row][1 + col] = octaedro[row][col];
                }
            } 
        }
    }
    
    //impressões:
    printf("    A  B  C  D  E  F  G  H  I  J \n");
    for(int row = 0; row < 10; row++){
        printf("%2d|", row + 1);
        for(int col = 0; col < 10; col++){
            if(table[row][col] == 0){
                printf(" %d ", table[row][col]);
            }else if(table[row][col] == 5){
                printf(" %s%d%s ", TXT_RED, table[row][col], ANSI_RESET);
            }else{
                printf(" %s%d%s ", TXT_GREEN, table[row][col], ANSI_RESET);
            }
        }
        printf("\n");
    }

    return 0;
}
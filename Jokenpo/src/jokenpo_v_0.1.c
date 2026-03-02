#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "../include/config.h"

int main(){
    int player, comp;

    srand(time(0));

    printf(TXT_BLUE);
    printf("|=============================================|\n");
    printf("|                --- JOKENPÔ ---              |\n");
    printf("|=============================================|\n");

    printf("|                                             |\n");
    printf("|%s[1]%s: PEDRA                                   %s|\n",TXT_RED, ANSI_RESET, TXT_BLUE);
    printf("|%s[2]%s: PAPEL                                   %s|\n",TXT_RED, ANSI_RESET, TXT_BLUE);
    printf("|%s[3]%s: TESOURA                                 %s|\n",TXT_RED, ANSI_RESET, TXT_BLUE);
    printf("|---------------------------------------------|\n");
    printf("|                         %sEscolha sua opção: ",ANSI_RESET);
    printf(TXT_GREEN);
    scanf("%d", &player);
    printf(TXT_BLUE);

    if(player != 1 && player != 2 && player != 3){
        printf("| %sOpção Inválida                              %s|\n", TXT_RED, TXT_BLUE);
        Sleep(1000);
        printf("|---------------------------------------------|\n");
        printf("|                                             |\n");
        printf("|                   FIM DE JOGO.              |\n");
        printf("|=============================================|\n");
        printf(ANSI_RESET);
        return 0;
    }

    printf("|---------------------------------------------|\n");
    printf("|                                             |\n");
    Sleep(1000);
    printf("|                   %s JO", BG_RED);
    Sleep(1000);
    printf("%sKEN", BG_YELLOW);
    Sleep(1000);
    printf("%sPÔ %s                 %s|\n", BG_GREEN, ANSI_RESET, TXT_BLUE);
    Sleep(500);
    printf("|                                             |\n");

    comp = rand() % 3 + 1;

    switch(player){
        case 1:
            printf("|%s Player :   PEDRA",ANSI_RESET);
        break;
        
        case 2:
            printf("|%s Player :   PAPEL",ANSI_RESET);
        break;
        
        case 3:
            printf("|%s Player : TESOURA",ANSI_RESET);
        break;            
    }

    printf("   x   ");

    switch(comp){
        case 1:
            printf("PEDRA   : Computador %s|\n",TXT_BLUE);
        break;
        
        case 2:
            printf("PAPEL   : Computador %s|\n",TXT_BLUE);
        break;
        
        case 3:
            printf("TESOURA : Computador %s|\n",TXT_BLUE);
        break;
    }

    printf("|                                             |\n");
    printf("|---------------------------------------------|\n");
    Sleep(1000);
    printf("|                                             |\n");
    if(player == comp){
        printf("|%s EMPATE!!!                                   %s|\n", TXT_YELLOW, TXT_BLUE);
    }else{
        printf("| %sVENCEDOR: ",ANSI_RESET);
        if( 
            player == 1 && comp == 3 || 
            player == 2 && comp == 1 || 
            player == 3 && comp == 2
        ){
            printf("%sPlayer!!!                         %s|\n",TXT_GREEN, TXT_BLUE);
        }else{
            printf("%sComputador!!!                     %s|\n",TXT_RED, TXT_BLUE);
        }
    }
    
    printf("|---------------------------------------------|\n");
    Sleep(1000);
    printf("|                                             |\n");
    printf("|                                             |\n");
    printf("|                 FIM DE JOGO.                |\n");
    printf("|=============================================|\n");
    printf(ANSI_RESET);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define txt_blue "\x1b[34m"
#define txt_green "\x1b[32m"
#define txt_yellow "\x1b[33m"
#define txt_red "\x1b[31m"
#define ansi_reset "\x1b[0m"
#define bg_red "\x1b[41m"
#define bg_green "\x1b[42m"
#define bg_yellow "\x1b[43m"

int main(){
    int player, comp;

    srand(time(0));

    printf(txt_blue);
    printf("|=============================================|\n");
    printf("|                --- JOKENPÔ ---              |\n");
    printf("|=============================================|\n");

    printf("|                                             |\n");
    printf("|%s[1]%s: PEDRA                                   %s|\n",txt_red, ansi_reset, txt_blue);
    printf("|%s[2]%s: PAPEL                                   %s|\n",txt_red, ansi_reset, txt_blue);
    printf("|%s[3]%s: TESOURA                                 %s|\n",txt_red, ansi_reset, txt_blue);
    printf("|---------------------------------------------|\n");
    printf("|                         %sEscolha sua opção: ",ansi_reset);
    printf(txt_green);
    scanf("%d", &player);
    printf(txt_blue);

    if(player != 1 && player != 2 && player != 3){
        printf("| %sOpção Inválida                              %s|\n", txt_red, txt_blue);
        Sleep(1000);
        printf("|---------------------------------------------|\n");
        printf("|                                             |\n");
        printf("|                   FIM DE JOGO.              |\n");
        printf("|=============================================|\n");
        printf(ansi_reset);
        return 0;
    }

    printf("|---------------------------------------------|\n");
    printf("|                                             |\n");
    printf("|                   %s JO", bg_red);
    Sleep(500);
    printf("%sKEN", bg_yellow);
    Sleep(500);
    printf("%sPÔ %s                 %s|\n", bg_green, ansi_reset, txt_blue);
    Sleep(500);
    printf("|                                             |\n");

    comp = rand() % 3 + 1;

    switch(player){
        case 1:
            printf("|%s Player :   PEDRA",ansi_reset);
        break;
        
        case 2:
            printf("|%s Player :   PAPEL",ansi_reset);
        break;
        
        case 3:
            printf("|%s Player : TESOURA",ansi_reset);
        break;            
    }

    printf("   x   ");

    switch(comp){
        case 1:
            printf("PEDRA   : Computador %s|\n",txt_blue);
        break;
        
        case 2:
            printf("PAPEL   : Computador %s|\n",txt_blue);
        break;
        
        case 3:
            printf("TESOURA : Computador %s|\n",txt_blue);
        break;
    }

    Sleep(1000);
    printf("|                                             |\n");
    printf("|---------------------------------------------|\n");
    printf("|                                             |\n");
    if(player == comp){
        printf("|%s EMPATE!!!                                   %s|\n", txt_yellow, txt_blue);
    }else{
        printf("| %sVENCEDOR: ",ansi_reset);
        if( 
            player == 1 && comp == 3 || 
            player == 2 && comp == 1 || 
            player == 3 && comp == 2
        ){
            printf("%sPlayer!!!                         %s|\n",txt_green, txt_blue);
        }else{
            printf("%sComputador!!!                     %s|\n",txt_red, txt_blue);
        }
    }
    
    Sleep(1000);
    printf("|---------------------------------------------|\n");
    printf("|                                             |\n");
    printf("|                   FIM DE JOGO.              |\n");
    printf("|=============================================|\n");
    printf(ansi_reset);
    return 0;
}
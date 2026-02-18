#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int player, comp, err = 0;

    srand(time(0));

    printf("          --- JOKENPÔ ---          \n");
    printf("\n");
    printf("[1]: PEDRA\n");
    printf("[2]: PAPEL\n");
    printf("[3]: TESOURA\n");
    printf("-----------------------\n");
    printf("Escolha sua opção: ");
    scanf("%d", &player);

    comp = rand() %3 + 1;

    switch(player){
        case 1:
            printf("Player | PEDRA");
        break;
        
        case 2:
            printf("Player | PAPEL");
        break;
        
        case 3:
            printf("Player | TESOURA");
        break;

        default:
            printf("Opção Inválida\n");
            printf("FIM DE JOGO.");
            return 0;
    }

    printf("   x   ");

    switch(comp){
        case 1:
            printf("PEDRA | Computador\n");
        break;
        
        case 2:
            printf("PAPEL | Computador\n");
        break;
        
        case 3:
            printf("TESOURA | Computador\n");
        break;

        default:
            printf("Opção Inválida\n");
            printf("FIM DE JOGO.");
            return 0;
    }

    printf("\n");
    if(player == comp){
        printf("EMPATE!!!\n");
    }else{
        printf("VENCEDOR: ");
        if( 
            player == 1 && comp == 3 || 
            player == 2 && comp == 1 || 
            player == 3 && comp == 2
        ){
            printf("Player!!!\n");
        }else{
            printf("Computador!!!\n");
        }
    }
    
    printf("\n");
    printf("FIM DE JOGO.");

    return 0;
}
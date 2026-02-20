#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int playerNUmber, cpuNumber, result;
    char comparison_type;

    srand(time(0));
    cpuNumber = rand() % 100 + 1;

    printf("Seja bem-vindo ao jogo de Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual");

    printf("Escolha a comparação: ");
    scanf(" %c", &comparison_type);

    printf("Digite o seu número [1 à 100]: ");
    scanf("%d", &playerNUmber);

    printf("O número do computador é %d\n", cpuNumber);

    switch(comparison_type){
        case 'M':
        case 'm':
            printf("Você escolheu a opção Maior.\n");
            result = playerNUmber > cpuNumber ? 1 : 0;
        break;

        case 'N':
        case 'n':
            printf("Você escolheu a opção Menor.\n");
            result = playerNUmber < cpuNumber ? 1 : 0;
        break;

        case 'I':
        case 'i':
            printf("Você escolheu a opção Igual.\n");
            result = playerNUmber == cpuNumber ? 1 : 0;
        break;

        default:
            printf("Opção de jogo inválida!\n");
        break;
    }
    
    printf("O seu número é %d, e o do computador é %d\n", playerNUmber, cpuNumber);
    
    if(result == 1){
        printf("Parabéns, você VENCEU!\n");
    }else{
        printf("Infelizmente, você PERDEU\n");
    }
    return 0;
}
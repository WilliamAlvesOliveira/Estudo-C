#include <stdio.h>

int main(){
    int idade, matricula; //podemos declarar variavéis do mesmo tipo em uma única linha.
    float altura;
    char nome[50];
    char exit;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);


    printf("digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite a sua matricula: ");
    scanf("%d", &matricula);

    printf("----- ALUNO: %s -----\n", nome);
    printf("IDADE: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("MATRICULA: %d\n", matricula);
    printf("============= presione 's' para sair: ");
    scanf(" %c", &exit); 


    return 0;
};
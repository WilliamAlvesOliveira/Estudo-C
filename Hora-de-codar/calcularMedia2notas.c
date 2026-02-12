#include <stdio.h>

int main() {
    //Variáveis
    float nota1, nota2, resultado;


    printf("==================================\n");
    printf("      --- Calcular Media ---      \n");
    printf("==================================\n");
    printf("\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("----------------------------------\n");
    printf("\n");
    printf("Suas notas foram: %.2f e %.2f\n", nota1, nota2);
    printf("E sua media é ");

    resultado = (nota1 + nota2) / 2;

    printf("%.2f\n", resultado);
    printf("----------------------------------\n");
    printf("presione s e confirme para sair. ");
    char exit;
    scanf(" %c", &exit);

    
    return 0;
}
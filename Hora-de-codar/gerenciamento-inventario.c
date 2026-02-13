#include<stdio.h>

int main(){
    char produto_a[30] = "Produto A";
    char produto_b[30] = "Produto B";

    unsigned int estoque_a = 1000;
    unsigned int estoque_b = 2000;

    float valor_a = 10.50;
    float valor_b = 20.40;

    unsigned int estoque_minimo_a = 500;
    unsigned int estoque_minimo_b = 2500;

    double valor_total_a = valor_a * estoque_a;
    double valor_total_b = valor_b * estoque_b;
    
    int resultado_a, resultado_b;

    printf("O %s tem estoque de: %u e o valor total unitário é %.2f\n" , produto_a, estoque_a, valor_a);
    
    printf("O %s tem estoque de: %u e o valor total unitário é %.2f\n" , produto_b, estoque_b, valor_b);

    resultado_a = estoque_a > estoque_minimo_a;
    resultado_b = estoque_b > estoque_minimo_b;

    printf("O produto %s tem estoque minimo %d\n", produto_a, resultado_a);
    printf("O produto %s tem estoque minimo %d\n", produto_b, resultado_b);
    printf("\n");

    printf("O valor total de %s é %.2f\n", produto_a, valor_total_a);
    printf("O valor total de %s é %.2f\n", produto_b, valor_total_b);
    printf("\n");

    printf("O valor de %.2f é maior que %.2f?: %d\n",valor_total_a, valor_total_b,
    valor_total_a > valor_total_b);


    return 0;
}
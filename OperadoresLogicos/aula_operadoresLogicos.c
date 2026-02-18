#include <stdio.h>
#include <stdbool.h>

int main() {
    int dez = 10, vinte = 20, trinta = 30;

    // 0 = false e 1 = true


    //----------------------------------------------------------------------
    //&& - Operador E (and) - verifica se ambas as condições são verdadeiras

    //ambas são verdadeiras saída é verdadeira = 1
    printf("%d ", dez < trinta && vinte < trinta);

    //a primeira condição é falsa portanto saída é falso = 0
    printf("%d ", trinta < dez && vinte < trinta);

    //a segunda condição é falsa portanto saída é falso = 0
    printf("%d ", dez < trinta && trinta < vinte);

    //ambas as condições são falsas a saída é falso = 0
    printf("%d\n", trinta < dez && trinta < vinte);

    printf("resultados devem ser: 1, 0, 0, 0\n");

    //===============================================================

    //----------------------------------------------------------------
    //|| - operador  Ou (or) - verifica se ao menos 1 condição é verdadeira

    //ambas são verdadeiras saída é verdadeira = 1
    printf("%d ", dez < trinta || vinte < trinta);

    //a segunda condição é verdadeira portanto saída é verdadeiro = 1
    printf("%d ", trinta < dez || vinte < trinta);

    //a primeira condição é verdadeira portanto saída é verdadeira = 1
    printf("%d ", dez < trinta || trinta < vinte);

    //ambas as condições são falsas a saída é falso = 0
    printf("%d\n", trinta < dez || trinta < vinte);

    printf("resultados devem ser: 1, 1, 1, 0\n");

    //===============================================================

    //----------------------------------------------------------------
    // ! - opredor de negação(not) - verifica se uma condição é negativa

    //dez é menor que vinte? saída verdadeiro = 1
    printf("%d\n", dez < vinte);

    //dez NÃO é menor que vinte? saída falso = 0
    printf("%d\n", !(dez < vinte));
    
    //negação de verdadeiro saída falso = 0
    printf("%d\n", !(true));

    //negação de falso saída verdadeiro = 1
    printf("%d\n" ,!(false));
    
    //nem precisava declarar variáveis
    printf("%d\n", 10 < 20);

    int a = 10;
    float b = 3.0;

    float resultado = a / b;
    printf("Resultado: %f",resultado);

    return 0;
}
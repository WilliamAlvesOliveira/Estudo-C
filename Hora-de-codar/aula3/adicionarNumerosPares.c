#include <stdio.h>

//Loops de repetição
int main(){
    int numero = 1;

    // O while verifica a condição antes de executar o bloco.
    // Se a condição for falsa no início, o código não executa nenhuma vez.

    while (numero <= 10)
    {
        if(numero % 2 == 0){
            printf("O número %d é Par\n", numero);
        }

        numero++;
    }

    //O loop do while é usado quando o código necessita rodar pelo menos uma vez
    do
    {
        if(numero % 2 == 1){
            printf("O número %d é Impar\n", numero);
        }

        numero++;
    }while (numero <= 10);
    // O do...while executa o bloco pelo menos uma vez,
    // porque a condição é verificada apenas depois da execução.

    //O loop for ele funciona com um numero definido de vezes
    //devemos configurar 3 entradas uma variavel de controle, uma condição e o incremento

    for (int times = 0; times <= 10; times++)
    {
        printf("loop número %d\n", times);
    }

}
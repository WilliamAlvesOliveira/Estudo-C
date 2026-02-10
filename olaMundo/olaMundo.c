#include <stdio.h> //include serve para importar bibliotecas
                   //stdio.h é a biblioteca padrão que contem a função de print
#include <string.h>

int main()
{
    printf("Olá, Mundo!\n");

    // variáveis, as varuáveis em C são fortemente tipadas portanto devem ser iniciadas com o tipo

    int idade;
    float altura = 1.65;
    char letraInicial;
    char nome[50] = "William";
    // Podemos atribuir ou não  valor na inicialização
    // O C é uma linguagem Case Sensitive

    // para saída de dados necessitamos de "Especificadores de  Variavéis", para informar que tipo de dado será exibido

    printf("A variável nome contém o valor %s\n", nome);
    printf("O valor de altura é: %f\n", altura);                                               // imprime a altura com várias casas depois do ponto
    printf("O valor de altura com 2 casas decimais apos o ponto flutuante é: %.2f\n", altura); // exibe com apenas 2 casa após o ponto

    // Lendo dados:

    // Para recebermos dados de entrada o método mais comum é o scan

    printf("Digite a sua idade: "); // mensagem para informar que dado deve ser digitado
    scanf("%d", &idade);            // coleta a entrada do teclado e atribui a indade
    printf("A idade digitada foi: %d\n", idade);

    // caso tenha opções com S/N onde o que queremos é receber um caractere(char), devemos ter o cuidado de por um espaço para que a entrada não receba o anter que foi dado em outra entrada

    printf("Digite a letra inicial do seu nome: ");
    scanf(" %c", &letraInicial);
    printf("A inicial digitada foi: %c\n", letraInicial);

    printf("Digite o seu primeiro nome: ");
    scanf("%s", nome);
    getchar();                                 // consome o último \n (enter) do scan
    printf("O nome digitado foi: %s\n", nome); // para string ou arrays não precisamos referenciar a variavél com &

    // SCANF vs FGETS
    // Para strings que podem conter espaços (como nome completo),
    // o scanf("%s") não funciona corretamente.
    // Para esses casos usamos fgets().

    printf("Digite o seu nome completo: ");
    fgets(nome, 50, stdin); // Lê no máximo 49 caracteres + '\0' da entrada padrão (stdin)

    // O fgets inclui o '\n' (Enter) se houver espaço no buffer,
    // então podemos removê-lo para evitar problemas na string.
    nome[strcspn(nome, "\n")] = '\0';
    // strcspn (string complement span) retorna o índice do primeiro '\n' encontrado.
    // Substituímos esse '\n' por '\0' para encerrar a string no ponto correto.

    printf("O nome digitado foi: %s\n", nome);

    printf("Pressione 'ENTER' para sair"); // Instrução para finalizar o terminal
    getchar();                             // lê o último char (inclusive o enter) e termina a execução

    return 0;
}
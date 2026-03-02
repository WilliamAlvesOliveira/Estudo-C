#include <stdio.h>

int main(){
    int index;

    char *nomeAlunos[3][3] = {
        {"Aluno1", "pt: 30", "mat: 90"},
        {"aluno2", "pt: 60", "mat: 60"},
        {"Aluno3", "pt: 80", "mat: 40"}
    };

    printf("Qual aluno você deseja ver as notas\n");
    printf("Opção 1 [Aluno 1]\n");
    printf("Opção 2 [Aluno 2]\n");
    printf("Opção 3 [Aluno 3]\n");
    printf("Digite a sua opção: ");
    scanf("%d", &index);

    printf("As notas do aluno %s são: %s, %s\n", nomeAlunos[index-1][0], nomeAlunos[index-1][1], nomeAlunos[index-1][2]);

    return 0;
}
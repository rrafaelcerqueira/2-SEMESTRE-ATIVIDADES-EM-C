#include <stdio.h>

#define MAX_ALUNOS 3

// Estrutura para armazenar os dados de um aluno
struct Aluno {
    char nome[100];
    int matricula;
    float nota1;
    float nota2;
};

int main() {
    struct Aluno alunos[MAX_ALUNOS];

    // Cadastro dos alunos
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Cadastro do aluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        // Limpa o buffer do teclado
        while (getchar() != '\n');

        printf("\n");
    }

    // Impressão da matrícula e média
    printf("Resultados:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        printf("Aluno %d - Matrícula: %d | Média: %.2f\n", i + 1, alunos[i].matricula, media);
    }

    return 0;
}

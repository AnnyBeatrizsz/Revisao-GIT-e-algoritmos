#include <stdio.h>
#include <stdlib.h>
//Sobre a seguinte estrutura:

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
}aluno_t;

// Crie um programa em C que carregue dinamicamente (via malloc) um novo aluno, carregue os dados dele e
// exiba em um printf.
// Apresente tamb´em se ele foi ou n˜ao aprovado.

int main() {

    aluno_t *aluno = (aluno_t *) malloc(sizeof(aluno_t));

    if (aluno == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Como aluno e um ponteiro, usamos "->" no lugar do "."
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno->nome); 

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota final: ");
    scanf("%f", &aluno->nota);

    printf("\n-- Ficha do Aluno --\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.1f\n", aluno->nota);

    if (aluno->nota >= 7.0 && aluno->faltas <= 15) {
        printf("Situacao: APROVADO!\n");
    } else {
        printf("Situacao: REPROVADO.\n");
    }

    free(aluno);
}
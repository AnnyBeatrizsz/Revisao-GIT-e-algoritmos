#include <stdio.h>
#include <stdlib.h>
// Sobre a seguinte estrutura:
// Uma lista encadeada e uma estrutura de dados em que cada no contem dois componentes.
// • Os dados
// • O endereco do proximo no
// A raiz (aluno root) contem o endereco do primeiro item da lista, a partir dai, cada elemento vai ter o endereco
// do proximo elemento, o ultimo aponta para NULL.
// Cada novo elemento inserido passa a ser o ultimo elemento e seu endereco fica armazenado no antigo ultimo
// elemento da lista.

//Crie um programa em C a partir da seguinte estrutura:
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
}aluno_t;


// Crie um programa em C que carregue uma lista encadeada de alunos, carregue os dados dele e exiba em um
// printf.
// Apresente tamb´em se ele foi ou n˜ao aprovado.

int main() {

    aluno_t *aluno_root = (aluno_t *) malloc(sizeof(aluno_t));
    // segundo aluno para podermos ver a lista encadeada funcionando
    aluno_t *segundo_aluno = (aluno_t *) malloc(sizeof(aluno_t));

    if (aluno_root == NULL || segundo_aluno == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite o nome do 1o aluno: ");
    scanf("%s", aluno_root->nome);
    printf("Faltas: ");
    scanf("%d", &aluno_root->faltas);
    printf("Nota: ");
    scanf("%f", &aluno_root->nota);
    
    aluno_root->prox = segundo_aluno;

    printf("\nDigite o nome do 2o aluno: ");
    scanf("%s", segundo_aluno->nome);
    printf("Faltas: ");
    scanf("%d", &segundo_aluno->faltas);
    printf("Nota: ");
    scanf("%f", &segundo_aluno->nota);
    
    segundo_aluno->prox = NULL;

    printf("\n-- Lista de Alunos --\n");
    
    // ponteiro temporário chamado "atual" apenas para andar pela lista.
    aluno_t *atual = aluno_root;

    while (atual != NULL) {
        printf("\nNome: %s\n", atual->nome);
        printf("Faltas: %d\n", atual->faltas);
        printf("Nota: %.1f\n", atual->nota);
        
        if (atual->nota >= 7.0 && atual->faltas <= 15) {
            printf("Situacao: APROVADO!\n");
        } else {
            printf("Situacao: REPROVADO.\n");
        }

        // o "atual" larga o nó que ele está e pula para o próximo
        atual = atual->prox;
    }

    free(aluno_root);
    free(segundo_aluno);
}
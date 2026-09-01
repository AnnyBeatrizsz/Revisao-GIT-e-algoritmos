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

aluno_t *aluno_root;

// Crie um programa em C que carregue uma lista encadeada de alunos, carregue os dados dele e exiba em um
// printf.
// Apresente tamb´em se ele foi ou n˜ao aprovado.
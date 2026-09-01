Sobre a seguinte estrutura:

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
}aluno_t;

// Crie um programa em C que carregue dinamicamente (via malloc) um novo aluno, carregue os dados dele e
// exiba em um printf.
// Apresente tamb´em se ele foi ou n˜ao aprovado.
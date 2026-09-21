// Crie um programa em C que receba os dados de um estudante e
// avalie se este estudante e aprovado se ele obtiver nota minima de 7
// e frequencia minima de 75%.

// Adicione toda a logica em um unico if.

#include <stdio.h>

int main(){
    char estudante [40];
    int frequencia;
    float nota;

    printf("Qual o nome do estudante? ");
    scanf("%s", estudante);
    printf("Qual a nota de %s? ", estudante);
    scanf("%f", &nota);
    printf("Qual a frequencia de %s? ", estudante);
    scanf("%d", &frequencia);

    if (nota >= 7.0 && frequencia >= 75)
        printf("\nO(A) estudante %s foi APROVADO!\n", estudante);
    else
        printf("\nO(A) estudante %s foi REPROVADO.\n", estudante);
}
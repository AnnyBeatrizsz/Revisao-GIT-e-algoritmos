//Sobre estruturas de repeticao
#include <stdio.h> // funcoes de entrada e saida de dados

int main() {
int i;

i = 0;

// while verifica primeiro, depois executa
while (i < 10) {
printf("while: %d\n", i);
i++;
}

// do executa, depois verifica
do {
    printf("do: %d\n", i);
    i++;
} while (i < 10);

return 0;
}

// a) Qual a saida do programa acima?
// b) Qual a diferenca entre o while e do do..while?
// c) Como fica a implementacao do bloco
// d) Qual a diferenca entre while e for? Quando usar um ou outro?
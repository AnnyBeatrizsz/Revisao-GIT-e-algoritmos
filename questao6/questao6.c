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

// a) Vai "printar" o while do 0 ao 9, pois 10 não entraria (10 não é menor que 10).
//    Depois "printa" o do com o 10, pois primeiro ele executa e depois verifica.
//    Obs: Caso o i tivesse sido printado depois, ele seria 11.

// b) O while verifica se está dentro da condição e depois executa, já o do executa e somente depois verifica. O do sempre vai executar pelo menos uma vez.

// c) O enunciado parece cortado, mas geralmente pede a reescrita do bloco usando for. Ficaria assim:
//    for(int i = 0; i < 10; i++) {
//        printf("for: %d\n", i);
//    }

// d) O while não tem o contador direto na condição, ao contrário do for. 
//    O ideal é usar o for quando precisar de contador e o while quando não precisar.

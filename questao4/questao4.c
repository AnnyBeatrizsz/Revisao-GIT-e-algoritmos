//Qual o valor de w ap´os a execu¸c˜ao do seguinte trecho c´odigo:

#include <stdio.h>

int main() {
int y = 5;
int z = 11;
int w;
w = y + z;
if (y > z) {
    w = y * z;
}
printf("%d", w);
return 0;
}

//16, pois não entra no if. 
//Primeiro executa w=5+11, ou seja, w=16.
//Depois, vimos que a condição do if é falsa, pois 5 não é maior que 11.
//w se mantém 16
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
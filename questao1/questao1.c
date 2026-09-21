// Analise o valor das variaveis apos executar o seguinte codigo:
// Analise o valor das variaveis em cada linha.

#include <stdio.h>

int main() {
int a = 1, b = 2, c = 3, d = 4, e = 5;
printf("a * b / c = %.3f\n", (float)a * b / c);
printf("a * b %% c + 1 = %d\n", a * b % c + 1);
printf("++a * b - c-- = %d\n", ++a * b - c--);
printf("7 - - b * ++d = %d\n", 7 - - b * ++d);
printf("a / b / c = %.3f\n", (float)a / b / c);
printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);
printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));

return 0;
}

//Respostas:
// 1) 1*2=2
//    2/3=0,666...
//    R=0,667
   
// 2) 1*2=2
//    2%3=2
//    2+1=3
//    R=3

// 3) ++1=2
//    2*2=4
//    4-3=1
//    R=1
// Obs: Agora a=2 e c=2

// 4) (-2)*5=-10
//    7 - (-10)=17
//    R=17
// Obs: Agora d=5

// 5) 2/2/2=0,5
//    R=0.500

// 6) 2*4=8
//    8/5=1.6
//    7+1.6=8.6
//    R=8.600
// Obs: Agora d=4

// 7) 2*2=4
//    4%(-2)=0
//    0+2+1=3
//    R=3

// 8) 39.0/-6=-6.5
//    29%2=1
//    -6.5-1=-7.5
//    R=7.500
// Obs: Agora e=6

// 9) 3+2=5
//    3%5=3
//    7-3=4
//    R=4
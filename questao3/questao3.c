//Qual a saida do seguinte codigo?

#include <stdio.h>

int main() {
int a = 5;
int b = 11;
float c;

scanf("%d %d", &a, &b);

if(a > b || !(a > 0)) {
    c = (float)(b / a);
} else {
    c = (float)(a / b);
}
printf("%.2f\n", c);
return 0;
}

// Por conta do scanf, o programa vai parar e solicitar os valores de a e b. Ou seja, não vai imprimir nada enquanto o usuário não digitar.
// Se fôssemos assumir que o usuário digitou e manteve os valores iniciais (a=5 e b=11):

// if:
//      5 > 11 é falso. 5 > 0 é verdadeiro, porém temos o operador "!", o que inverte a condição e a torna falsa.
//      No if temos Falso OU Falso. Logo, ele não executa o bloco de código interno.

// else:
//      Entraria no else! Matematicamente, 5 / 11 geraria um valor decimal (0.45...), mas como 'a' e 'b' são variáveis inteiras, o C realiza uma divisão inteira e simplesmente descarta as casas decimais.
//      O cast (float) não funcionou para manter a precisão porque os parênteses (a / b) forçaram a divisão inteira a acontecer primeiro. Para funcionar, o (float) deveria estar ligado diretamente a uma das variáveis.
//      Sendo assim, o resultado matemático de (a / b) é 0.
//      Somente após finalizar a divisão é que ele aplica a conversão para float, ou seja, c = 0.0.

// printf:
//      Como o formatador exige duas casas decimais (%.2f), o resultado impresso na tela seria 0.00.
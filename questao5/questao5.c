// O que e um vetor?
// a) Explique o funcionameno de um vetor e como ele e tratado no C.
// b) Explique o que uma string e como ela e tratada em C.

// a) Um vetor é uma estrutura de dados que aloca um bloco sequencial de memória para armazenar varios valores de um mesmo tipo. 
// Em C o nome do vetor atua como um ponteiro para o seu primeiro elemento (índice 0). É valido lembrar que C não verifica se você está acessando um índice fora do tamanho declarado e isso pode causar invasão de memória.

// b) String é um vetor do tipo char utilizado para formar palavras ou textos. 
// O C não possui um tipo "String" nativo, ele trata textos como vetores de char que obrigatoriamente devem terminar com o caractere nulo ('\0'), esse caractere indica o exato ponto onde a palavra termina.
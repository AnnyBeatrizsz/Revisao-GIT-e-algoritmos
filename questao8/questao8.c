// 8 Acerca de alocacao dinamica de memoria
// Responda:
// a) Qual o comportamento da funcao free?
// b) Apos chamar free, o ponteiro pode ser utilizado?
// c) O que causa vazamentos de memoria?
// d) O que a instrucao malloc retorna quando nao consegue realizar a alocacao?
// e) Explique a instrucao calloc.
// f) Qual a diferenca entre as instrucoes malloc e calloc?

//Respostas:
// a) Qual o comportamento da função free?
// Ela serve para devolver a memória que a gente pegou "emprestada". Ela avisa o sistema que o nosso programa não vai mais usar aquele espaço.

// b) Após chamar free, o ponteiro pode ser utilizado?
// Não! Depois do free, o ponteiro fica apontando para um "terreno vazio". Se tentar usar ele, o programa pode dar erro ou fechar do nada. O ideal é fazer o ponteiro receber NULL logo depois de usar o free.

// c) O que causa vazamentos de memória?
// Vazamento acontece quando a gente aloca um espaço na memória, mas esquece de dar o free depois. Aí o programa fica segurando aquele espaço para sempre e consumindo a RAM do PC a toa.

// d) O que a instrução malloc retorna quando não consegue realizar a alocação?
// Retorna NULL. É a forma do C avisar que não tem espaço livre suficiente na memória.

// e) Explique a instrução calloc.
// O calloc também aloca memória, parecido com o malloc. A diferença é que ele já faz uma "faxina", preenchendo todo o espaço alocado com zeros antes de entregar pra gente.

// f) Qual a diferença entre as instruções malloc e calloc?
// São duas coisas principais: 
//      1) O malloc deixa a memória com os "lixos" que já estavam lá, já o calloc limpa tudo com zeros. 
//      2) O malloc pede só um número (o tamanho total em bytes). O calloc pede dois (quantos itens você quer criar e o tamanho de cada um).
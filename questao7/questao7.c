// 7 Acerca de Manipulacao de Arquivos.
// a) Explique os diferentes modos de abertura de arquivos.
// b) Explique o funcionamento das funcoes fgets, fprintf, fread, fwrite.

// 7 Acerca de Manipulação de Arquivos.

// a) Os modos servem para dizer ao C o que você quer fazer com aquele arquivo na hora de abrir. Os principais são:
//  "r"(read): Abre só para leitura. Dá erro se o arquivo não existir.
//  "w"(write): Abre para escrita. O grande detalhe aqui é que ele apaga tudo se o arquivo já existir, ou cria um novo do zero.
//  "a"(append): Abre para adicionar coisas. Ele não apaga o que já tem, apenas escreve lá no final do arquivo.

// b) Essas funções são os comandos que de fato movem os dados:
//  fgets: Lê uma linha de texto do arquivo e guarda numa string (vetor de char). É muito usado para ler arquivos de texto normais.
//  fprintf: Funciona exatamente igual ao printf que usamos para "printar" coisas na tela, mas em vez da tela, ele manda o texto formatado direto para dentro do arquivo.
//  fread: Usado para arquivos binários. Ele lê "blocos" de dados brutos do arquivo e guarda direto nas suas variáveis ou vetores.
//  fwrite: O inverso do fread. Ele pega um bloco de dados da memória do seu programa (como uma struct) e escreve de uma vez só no arquivo binário.
// 11 Sobre algumas estruturas de dados, responda:
// a) Qual a diferenca entre as estruturas pilha e fila?
// b) Quais as vantagens da fila? Quais suas desvantagens?
// c) Quais as vantagens da pilha? Quais suas desvantagens?
// d) Quais as suas aplicacoes?
// e) Qual a diferenca deles para a lista?

//Respostas:
// a) A principal diferença é a regra de quem tem o direito de sair primeiro. 
// Na fila a regra é FIFO (first In, first out - o primeiro que entra é o primeiro que sai).
// Na pilha a regra é LIFO (last In, first out - o último que entra é o primeiro que sai).

// b) Vantagens: Mantém a ordem justa e cronológica das coisas. É perfeita para organizar tarefas por ordem de chegada, sem furar a fila.
// Desvantagens: Você não consegue acessar quem está no meio ou no fim da fila diretamente.

// c) Vantagens: É extremamente rápida e eficiente para adicionar e remover itens no topo. É ideal para rastrear o histórico recente de ações.
// Desvantagens: Assim como a fila, o acesso é restrito. Você só enxerga o elemento do topo. Se precisar de uma informação que ficou lá no fundo da pilha, terá que desempilhar tudo o que está em cima.

// d) Aplicações da Fila: Fila de impressão (o primeiro documento que você manda imprimir é o primeiro a sair no papel), fila de jogadores esperando para entrar em um servidor de jogo online, entre outros.
// Aplicações da Pilha: O famoso "Ctrl+Z" (desfazer), o botão de "Voltar" do seu navegador de internet, entre outros.

// e) A Lista é "livre", enquanto a Pilha e a Fila têm regras rígidas e engessadas sobre onde você pode inserir ou remover dados (só no topo, ou só nas pontas), na Lista você tem liberdade total: pode inserir, ler, modificar e remover elementos em absolutamente qualquer posição (no início, no meio ou no fim).
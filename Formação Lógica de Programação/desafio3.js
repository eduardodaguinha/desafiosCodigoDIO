/*
Desafio 3: Capturando Pokémons iniciais

No mundo dos jogos Pokémon, os treinadores começam sua jornada escolhendo um dos três Pokémons iniciais: Bulbasaur, Charmander, Pikachu e Mewtwo. 
Cada treinador escolhe um dos quatro Pokémons. Seu desafio é criar uma solução que permita ao jogador escolher um dos Pokémons iniciais 
e exibir uma mensagem de boas-vindas com o Pokémon escolhido.

Entrada:
- Você receberá um número inteiro que representa a escolha do treinador: 
  1 para Bulbasaur, 
  2 para Charmander, 
  4 para Pikachu e 
  5 para Mewtwo.

Saída:
- A saída deve ser uma mensagem de boas-vindas que inclua o nome do Pokémon escolhido.
*/

// Lê a escolha do treinador
let escolhaDoTreinador = parseInt(gets());
let pokemonEscolhido;

// Implementa as condições para determinar o Pokémon escolhido
if (escolhaDoTreinador === 1) {
  pokemonEscolhido = "Bulbasaur";
} else if (escolhaDoTreinador === 2) {
  pokemonEscolhido = "Charmander";
} else if (escolhaDoTreinador === 4) {
  pokemonEscolhido = "Pikachu";
} else if (escolhaDoTreinador === 5) {
  pokemonEscolhido = "Mewtwo";
} else {
  pokemonEscolhido = "não identificado"; // Mensagem caso o número não corresponda a nenhum Pokémon
}

// Imprime o Pokémon escolhido
if (pokemonEscolhido) {
  print("Você escolheu o " + pokemonEscolhido + " como seu Pokémon inicial.");
}
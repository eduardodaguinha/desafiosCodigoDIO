/*
Desafio 6: Combinando nomes de Pokémons

Imagine um universo onde você é um Mestre Pokémon com o poder de criar novas criaturas através da combinação de nomes. 
Seu algoritmo é a chave para dar vida a esses seres incríveis. 
Você receberá uma primeira parte do nome de um Pokémon e sua tarefa é completá-la com o sufixo mágico adequado, revelando o nome completo do Pokémon.

Tarefa: 
Sua missão é criar uma função extraordinária chamada combinarNomePokemon. 
Essa função possui um toque mágico que transforma uma entrada simples em algo verdadeiramente especial.

Entrada:
- A entrada consistirá em uma única string representando a primeira parte do nome de um Pokémon.

Saída:
- A função deve retornar uma nova string que é a combinação da parte inicial (préfixo) do nome do Pokémon com o sufixo final do nome, formando um nome de Pokémon completo.
*/

// Define a função que combina o prefixo com o sufixo
function combinandoNomesPokemons(palavra) {
  // Cria a palavra Pokémon completa concatenando o prefixo com o sufixo "saur"
  let palavraPokemon = palavra + "saur";
  // Retorna a palavra Pokémon
  return palavraPokemon;
}

// Entrada da palavra usando gets()
var nomeEntrada = gets();

// Chamando a função combinandoNomesPokemons com o nome Pokémon informado e armazenando o resultado na variável palavraGerada
var palavraGerada = combinandoNomesPokemons(nomeEntrada);

// Exibindo a palavra gerada
print(palavraGerada);
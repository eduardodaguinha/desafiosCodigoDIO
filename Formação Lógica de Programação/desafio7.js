/*
Desafio 7: Gerenciamento de itens mágicos

Você é um aventureiro em um mundo mágico cheio de perigos e monstros. Durante suas missões, você coleta diversos itens mágicos, 
cada um com seus próprios atributos e habilidades especiais. Agora, você está desenvolvendo um sistema aprimorado para gerenciar esses itens. 
Neste novo sistema, você pode criar diferentes tipos de itens mágicos, como armas, armaduras, poções, entre outros. 
Cada tipo de item terá atributos específicos e contribuirá de maneiras únicas para suas aventuras.

Tarefa: 
Crie um objeto que represente um item mágico personalizado. O objeto deve ter atributos como tipo de item, dano e resistência, 
de acordo com o tipo escolhido. Além disso, crie uma função que calcule o dano causado por um item durante um combate, 
levando em consideração o tipo de item.

Entrada:
- Peça ao usuário para digitar o tipo do item mágico que deseja criar, o dano e a resistência.

Saída:
- Imprima o tipo do item, o dano, a resistência e o dano em combate.
- Use a função de cálculo de dano para imprimir o dano causado por esse item em um combate simulado. 
  Quando o tipo do item for igual a 'arma', deve-se multiplicar o dano por dois (this.dano * 2) e, quando não for arma, 
  é retornado apenas o dano (this.dano).
*/

// Definição da classe ItemMagico
class ItemMagico {
  // Cria o construtor que recebe os atributos do item mágico
  constructor(tipo, dano, resistencia) {
    this.tipo = tipo;
    this.dano = dano;
    this.resistencia = resistencia;
  }

  // Função para calcular o dano causado pelo item em combate
  calcularDano() {
    return this.tipo === "arma" ? this.dano * 2 : this.dano;
  }
}

// Solicita ao usuário para digitar o tipo do item mágico, o dano do item e a resistência do item
const tipoItem = gets();
const danoItem = parseInt(gets());
const resistenciaItem = parseInt(gets());

// Cria o objeto ItemMagico personalizado com base no tipo escolhido
const itemPersonalizado = new ItemMagico(tipoItem, danoItem, resistenciaItem);

// Imprime os atributos do item personalizado
print("Tipo: " + itemPersonalizado.tipo);
print("Dano: " + itemPersonalizado.dano);
print("Resistência: " + itemPersonalizado.resistencia);

// Calcula e imprime o dano causado pelo item personalizado em um combate simulado
const danoTotal = itemPersonalizado.calcularDano();
print("Dano em combate: " + danoTotal);
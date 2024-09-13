/*
Desafio 4: Coleta de tesouros no dungeon

Sua missão é vasculhar as salas da masmorra em busca de recompensas lendárias e desafios perigosos. 
Cada sala pode conter monstros formidáveis, tesouros preciosos ou ambos. 
Use suas habilidades estratégicas para enfrentar as ameaças e coletar os tesouros!

Tarefa: 
Escreva um programa que simule sua jornada heroica pela masmorra. 
O programa deve percorrer cada sala e verificar se há tesouros ou monstros. 
Se você encontrar um tesouro, colecionará a recompensa. Se encontrar um monstro, terá que derrotá-lo para continuar.

Atenção:
Em nossa resolução utilizamos a função .includes() do JavaScript para verificar se um número (representando a sala atual) 
está presente nos arrays salasComTesouro e salasComMonstro.

Entrada:
- O número total de salas na masmorra (um número inteiro).

Saída:
- Sempre que encontrar um tesouro, imprima "Tesouro na sala X!".
- Sempre que encontrar um monstro, imprima "Monstro na sala X!".
*/

// Lê o número total de salas no dungeon
const totalSalas = parseInt(gets());

// Arrays com as salas que têm tesouros e monstros
const salasComTesouro = [2, 4, 7];
const salasComMonstro = [3, 6, 8];

// Loop para percorrer cada sala da masmorra
for (let sala = 1; sala <= totalSalas; sala++) {
  // Verifica se a sala tem tesouro ou monstro
  const temTesouro = salasComTesouro.includes(sala);
  const temMonstro = salasComMonstro.includes(sala);

  // Imprime a mensagem adequada com base na verificação
  if (temTesouro) {
    print("Tesouro na sala " + sala + "!");
  } else if (temMonstro) {
    print("Monstro na sala " + sala + "!");
  }
}
/*
Desafio 2: Controle de velocidade do robô

Você foi contratado para criar um software que simule o controle de velocidade de um robô. Esse robô possui uma velocidade máxima e uma velocidade mínima. Sua tarefa é desenvolver um programa utilizando o conceito de Orientação a Objetos para calcular a velocidade final do robô após uma sequência de comandos.

Crie uma classe chamada "Robo" que possua as seguintes propriedades e métodos:

- velocidadeAtual: inteiro que representa a velocidade atual do robô (inicialmente 0);
- velocidadeMaxima: inteiro que representa a velocidade máxima do robô;
- velocidadeMinima: inteiro que representa a velocidade mínima do robô;
- acelerar(): um método que aumenta a velocidade atual em 1 unidade, desde que não ultrapasse a velocidade máxima;
- desacelerar(): um método que diminui a velocidade atual em 1 unidade, desde que não fique abaixo da velocidade mínima.

Entrada
A entrada consiste em duas linhas:
- A primeira linha contém dois inteiros Vmin e Vmax (1 ≤ Vmin < Vmax ≤ 100), representando a velocidade mínima e máxima do robô, respectivamente.
- A segunda linha contém uma sequência de comandos (com no máximo 100 caracteres), onde: 'A' representa uma aceleração e 'D' representa uma desaceleração.

Exemplo de entrada:
Vmin Vmax: ambos valores int.
comandos: string.

Saída
A saída deve apresentar apenas a velocidade final (int) do robô, considerando as regras descritas nos métodos de acelerar e desacelerar.
*/

#include <iostream>
#include <string>

class Robo {
public:
    int velocidadeAtual;
    int velocidadeMaxima;
    int velocidadeMinima;
    
    Robo(int vmin, int vmax) : velocidadeMinima(vmin), velocidadeMaxima(vmax) {
        velocidadeAtual = vmin; // Inicializa a velocidade atual com a mínima.
    }
    
    void acelerar() {
        if (velocidadeAtual < velocidadeMaxima) {
            velocidadeAtual++; // Aumenta a velocidade se não atingir a máxima.
        }
    }
    
    void desacelerar() {
        if (velocidadeAtual > velocidadeMinima) {
            velocidadeAtual--; // Diminui a velocidade se não atingir a mínima.
        }
    }
};

int main() {
    int vmin, vmax;
    std::string comandos;
    
    std::cin >> vmin >> vmax;
    std::cin >> comandos;
    
    Robo robo(vmin, vmax);
    for (char comando : comandos) {
        if (comando == 'A') {
            robo.acelerar(); // Chama o método acelerar para o comando 'A'.
        } else if (comando == 'D') {
            robo.desacelerar(); // Chama o método desacelerar para o comando 'D'.
        }
    }
    std::cout << robo.velocidadeAtual << std::endl; // Imprime a velocidade final.
    return 0;
}
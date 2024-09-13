/*
Desafio 2: Criando um robô para automação de fábrica

Dado um array de números inteiros que representam a posição de robôs em uma linha, escreva uma função que retorne o índice do robô que percorreu a maior distância em relação aos outros robôs.

O programa deve conter uma função maiorDistancia que recebe como parâmetro um array de inteiros e o tamanho do array e retorna o índice do robô que percorreu a maior distância.

Entrada:
A entrada consiste em duas linhas:
- A primeira linha contém um inteiro N (1 <= N <= 10), representando o tamanho do array.
- A segunda linha contém N inteiros separados por espaço, representando as posiçõesDosRobôs.

Saída:
Um número inteiro representando o índice do robô que percorreu a maior distância.
*/

#include <stdio.h>
#include <limits.h>

int maiorDistancia(int n, int posicoesDosRobos[]) {
    // Consideramos que o robô 0 é o que percorreu a maior distância inicialmente
    int indiceMaiorDistancia = 0;
    int maiorDistancia = 0;

    // Calcula a maior distância percorrida por cada robô
    for (int i = 0; i < n; i++) {
        int distancia = abs(posicoesDosRobos[i] - posicoesDosRobos[indiceMaiorDistancia]);
        
        if (distancia > maiorDistancia) {
            maiorDistancia = distancia;
            indiceMaiorDistancia = i;
        }
    }

    return indiceMaiorDistancia;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int posicoesDosRobos[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &posicoesDosRobos[i]);
    }

    int indiceMaiorDistancia = maiorDistancia(n, posicoesDosRobos);

    // Adicionamos 1 ao índice para apresentar o resultado de acordo com a convenção humana de começar a contar a partir de 1.
    printf("O robô que percorreu a maior distância é o robô %d\n", indiceMaiorDistancia + 1);

    return 0;
}
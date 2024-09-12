/*
Desafio 4: O robô que calcula distâncias

Você está programando um robô que utiliza inteligência artificial para se movimentar. O robô possui um sensor que mede a distância até um objeto e precisa tomar uma decisão baseada nessa informação.

Seu desafio é criar um programa em C que receba a distância medida pelo sensor e utilize uma função que utilize estruturas condicionais para verificar se o robô está próximo ou longe do objeto. A função deve ter um parâmetro (a distância) e um retorno (uma mensagem indicando se o robô está próximo ou longe do objeto).

Lembre-se, se a distância for igual ou inferior a 10, o robô está próximo. Caso contrário, o robô está longe.

Entrada:
A entrada deve receber um único valor, referente à distância (int) em que o robô se encontra em relação ao objeto.

distância: distância em metros em relação ao objeto.

Saída:
O código deverá retornar uma mensagem (string) informando se o robô está próximo ou longe. Veja os valores recebidos abaixo:

- Para distância = 8, imprimir "O robô está próximo!"
- Para distância = 11, imprimir "O robô está longe!"
*/

#include <stdio.h>

// Função que verifica a distância e retorna uma mensagem adequada
char* verificaDistancia(int distancia) {
    if (distancia <= 10) {
        return "O robô está próximo!";
    } else {
        return "O robô está longe!";
    }
}

int main() {
    int distancia;

    // Lê a entrada da distância do robô em relação ao objeto
    scanf("%d", &distancia);

    // Chama a função verificaDistancia e imprime a mensagem de retorno
    printf("%s\n", verificaDistancia(distancia));

    return 0;
}
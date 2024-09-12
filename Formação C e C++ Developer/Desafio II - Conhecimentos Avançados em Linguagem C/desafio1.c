/*
Desafio 1: Controle de tráfego urbano para uma cidade inteligente

Você está trabalhando em um projeto de análise de tráfego urbano para uma cidade inteligente. Para isso, você precisa criar uma função que receba como parâmetro um array de números inteiros representando o número de veículos que passaram por uma rua em diferentes horários do dia. Sua função deve retornar a média de veículos por hora em todo o período.

Dessa forma, escreva um programa que solicite ao usuário o tamanho do array e os números de veículos que passaram por uma rua em diferentes horários do dia, calcule a média de veículos por hora em todo o período e imprima o resultado na tela.

Entrada
A entrada será composta por dois valores:
- Linha 1: Um número inteiro n (0 < n ≤ 24) representando o tamanho do array. Este valor indica quantos números inteiros serão lidos a seguir.
- Linha 2: Um conjunto de números inteiros veiculosPorHora separados por espaço, onde cada elemento representa a quantidade de veículos que passaram em cada hora do dia. Esses valores devem estar compreendidos entre 0 e 10000. Os valores deverão ser informados na mesma linha, separados por espaço.

Saída
A saída deverá retornar um texto (string), indicando qual foi a média de veículos que passaram pela rua em todo o período. Como exemplo, veja os valores recebidos abaixo:
- Linha 1: 5
- Linha 2: 100 200 150 300 250

De acordo com esses valores de entrada, a saída ficará desta maneira:
Média de veículos por hora: 200

Caso o número de horas com veículos registrados seja menor que o tamanho do array informado, a média deve ser calculada apenas considerando as horas com registros.

Dica: Use a função round() para arredondar a média final de veículos passados pela rua.
*/

#include <stdio.h>
#include <math.h>

// Função para calcular a média de veículos por hora
int mediaVeiculosHora(int tamanho, int veiculos[]) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += veiculos[i];
    }
    // Calcula a média e arredonda o valor
    return round((double)soma / tamanho);
}

int main() {
    int tamanho, i;

    // Lê o tamanho do array
    scanf("%d", &tamanho);

    // Declara o array com o tamanho especificado
    int veiculos[tamanho];
    
    // Lê os valores do array
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &veiculos[i]);
    }

    // Chama a função para calcular a média e imprime o resultado
    int media = mediaVeiculosHora(tamanho, veiculos);
    printf("Média de veículos por hora: %d\n", media);

    return 0;
}
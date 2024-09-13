/*
Desafio 1: Programando seu primeiro robô

Imagine que você está desenvolvendo o código para um robô de limpeza. O robô deverá receber as dimensões de uma sala retangular e calcular o tempo necessário para limpar toda a área da sala.

Entrada:
O programa deve receber as dimensões da sala retangular (largura e comprimento) em metros e calcular a área total da sala em metros quadrados. Considere que o robô pode limpar uma área de 5 metros quadrados por minuto e que é necessário limpar toda a área da sala em no máximo 2 horas.

O programa deve calcular o tempo necessário em minutos para o robô limpar a sala e exibir o resultado.

A entrada deve receber os valores (inteiros) abaixo:
- largura: a largura da área em metros.
- comprimento: o comprimento da área em metros.

Dica: Utilize a função ceil() para calcular o tempo estimado.

Saída:
O código deverá calcular a área total como largura * comprimento. Após isso, deverá retornar uma mensagem (string) que informará o tempo (área / 5.0) que o robô de limpeza levará para limpar a sala.

Veja o exemplo com os valores abaixo:

- largura: 6
- comprimento: 6

De acordo com esses valores de entrada, a saída deverá ser:

O robô de limpeza levará 8 minutos para limpar a sala.

Importante: Neste caso, o tempo foi arredondado para 8 minutos.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int largura, comprimento;
    
    // Lê as dimensões da sala
    scanf("%d", &largura);
    scanf("%d", &comprimento);
    
    // Calcula a área da sala
    int area = largura * comprimento;
    
    // Calcula o tempo necessário em minutos
    double tempo = (double)area / 5.0;
    
    // Arredonda o tempo para cima
    int tempoArredondado = (int)ceil(tempo);
    
    // Imprime o resultado
    printf("O robô de limpeza levará %d minutos para limpar a sala.\n", tempoArredondado);
    
    return 0;
}
/*
Desafio 5: Desenvolvendo um programa para uma loja de cogumelos

Neste desafio, você deve criar um programa que simule o auxílio de vendas de um site de catálogos de cogumelos utilizando inteligência artificial. O intuito é oferecer aos clientes sugestões de cogumelos que estão em promoção. Dessa forma, o programa deve permitir que o usuário informe o nome de um cogumelo desejado e, com base nessa informação, deve sugerir até dois cogumelos adicionais da lista, cujos valores sejam iguais ou menores que o do cogumelo selecionado pelo cliente. No caso de não haver sugestões disponíveis, ou seja, se o cogumelo escolhido for o mais caro, o programa deve exibir uma mensagem indicando que não há sugestões.

Abaixo está a lista de cogumelos oferecidos pela loja com todos os seus valores. Considere que essa lista já está ordenada por prioridade, ou seja, você deve oferecer como alternativas nessa ordem:

Cogumelo    Valor
Shitake     10
Portobello   8
Shimeji      6
Champignon   12
Funghi       16
Porcini      16

Entrada:
A entrada será uma string representando o nome do cogumelo desejado pelo usuário.

Saída:
Uma lista com no máximo 2 sugestões de cogumelos mais baratos do que o enviado como entrada. Lembrando que a sugestão das alternativas deve considerar a lista de cogumelos na ordem descrita na tabela supracitada neste desafio.

Importante: Considere que cada saída (cogumelo selecionado) deve estar em linhas diferentes.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int valor;
} Cogumelo;

int main() {
    Cogumelo cogumelos[] = {
        {"Shitake", 10},
        {"Portobello", 8},
        {"Shimeji", 6},
        {"Champignon", 12},
        {"Funghi", 16},
        {"Porcini", 16}
    };
    
    char escolha[20];
    scanf("%19s", escolha);
    
    int indice_escolhido = -1;
    for (int i = 0; i < 6; i++) {
        if (strcmp(escolha, cogumelos[i].nome) == 0) {
            indice_escolhido = i;
            break;
        }
    }
    
    if (indice_escolhido == -1) {
        printf("Cogumelo não encontrado.\n");
        return 0;
    }
    
    int valor_escolhido = cogumelos[indice_escolhido].valor;
    
    Cogumelo sugestoes[2];
    int numeroSugestoes = 0;
    
    // Percorre a lista para encontrar sugestões
    for (int i = 0; i < 6; i++) {
        if (i != indice_escolhido && cogumelos[i].valor <= valor_escolhido) {
            if (numeroSugestoes < 2) {
                sugestoes[numeroSugestoes++] = cogumelos[i];
            }
        }
    }
    
    if (numeroSugestoes == 0) {
        printf("Desculpe, não há sugestões disponíveis.\n");
    } else {
        for (int i = 0; i < numeroSugestoes; i++) {
            printf("%s - Valor: %d\n", sugestoes[i].nome, sugestoes[i].valor);
        }
    }
    
    return 0;
}
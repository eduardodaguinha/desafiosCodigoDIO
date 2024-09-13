/*
Desafio 4: Biblioteca virtual com ajuda de robôs organizadores

Neste desafio, você deve desenvolver um programa que simule uma biblioteca virtual que utiliza robôs para organizar seus livros. O programa receberá como entrada o número total de livros existentes na biblioteca e as informações de cada livro, incluindo o título, autor e ano de publicação.

Entrada
O programa deve receber como entrada o número de livros presentes na biblioteca e as informações de cada livro. A primeira linha da entrada contém um número inteiro N (1 ≤ N ≤ 100) que representa o número de livros na biblioteca. As próximas N linhas contêm as informações de cada livro, na seguinte sequência (cada dado em uma nova linha):
- titulo (string)
- autor (string)
- anoDePublicacao (int)

As strings de título e autor não contêm espaços, e o ano de publicação é um número inteiro de quatro dígitos.

Saída
O programa deve identificar o livro mais antigo da lista de livros que o usuário informou, armazenar suas informações em variáveis e imprimi-las no seguinte formato:

biblioteca[indiceLivroMaisAntigo].titulo
biblioteca[indiceLivroMaisAntigo].autor
biblioteca[indiceLivroMaisAntigo].ano

Dica: Você pode explorar uma estrutura de dados (struct, classe etc.) para definir os atributos de cada livro. Com isso, sua lógica de impressão ficará parecida com a sintaxe acima, onde a biblioteca é um array de Livro.
*/

#include <stdio.h>
#include <stdlib.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Livro biblioteca[n];

    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", biblioteca[i].titulo);
        scanf(" %[^\n]", biblioteca[i].autor);
        scanf("%d", &biblioteca[i].ano);
    }
    
    int indiceLivroMaisAntigo = 0;
    for (int i = 1; i < n; i++) {
        if (biblioteca[i].ano < biblioteca[indiceLivroMaisAntigo].ano) {
            indiceLivroMaisAntigo = i;
        }
    }

    printf("%s\n", biblioteca[indiceLivroMaisAntigo].titulo);
    printf("%s\n", biblioteca[indiceLivroMaisAntigo].autor);
    printf("%d\n", biblioteca[indiceLivroMaisAntigo].ano);
    
    return 0;
}
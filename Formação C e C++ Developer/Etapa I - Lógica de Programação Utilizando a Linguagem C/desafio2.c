/*
Desafio 2: Desenvolvendo sua primeira inteligência artificial

Imagine que você está desenvolvendo um programa de inteligência artificial capaz de classificar animais de acordo com algumas características que o usuário informa. Esse programa deve pedir para o usuário informar as seguintes características do animal:

- Peso em kg
- Altura em cm
- Se tem pelos?
- Se é mamífero?

Com base nessas características, o programa deve classificar o animal em uma das seguintes categorias:

- Elefante (Peso maior ou igual a 2000 kg e altura maior ou igual a 300 cm);
- Cavalo (Tem pelos, é mamífero e a altura igual a 150 cm);
- Cachorro (É mamífero, tem pelos e altura menor ou igual a 100 cm);
- Serpente (Não tem pelos e não é mamífero);
- Tartaruga (É mamífero e não tem pelos).

Seu programa deve exibir na tela a classificação do animal ou informar que não foi possível classificar o animal com base nas informações fornecidas.

Entrada:
A entrada deve receber os valores abaixo:

- Peso: o peso do animal em kg (usar o tipo float);
- Altura: a altura do animal em cm (usar o tipo float);
- Pelos: se possui pelos (usar o tipo char para 's' ou 'n', representando sim e não, respectivamente);
- Mamífero: se é um mamífero (usar o tipo char para 's' ou 'n', representando sim e não, respectivamente).

Saída:
O código deverá receber as informações fornecidas acima. Após isso, deverá retornar uma mensagem (string) informando a classificação do animal de acordo com as características fornecidas pelo usuário. A mensagem será diferente de acordo com a categoria do animal e pode ter a seguinte forma:

- O animal é um elefante! Caso o peso seja maior ou igual a 2000 kg e a altura maior ou igual a 300 cm;
- O animal é um cavalo! Caso o animal seja mamífero, tenha pelos e altura igual a 150 cm;
- O animal é um cachorro! Caso o animal seja mamífero, tenha pelos e altura menor ou igual a 100 cm;
- O animal é uma serpente! Caso o animal não seja mamífero e não tenha pelos;
- O animal é uma tartaruga! Caso o animal seja mamífero e não tenha pelos;
- Não foi possível classificar o animal! Caso o animal não contemple nenhuma das condições fornecidas acima.
*/

#include <stdio.h>

int main() {
    float peso, altura;
    char temPelos, ehMamifero;

    // Lê as entradas
    scanf("%f", &peso);
    scanf("%f", &altura);
    scanf(" %c", &temPelos); // Nota: o espaço antes de %c ignora quaisquer caracteres de espaço em branco remanescente no buffer
    scanf(" %c", &ehMamifero);

    // Classifica o animal com base nas características fornecidas
    if (peso >= 2000 && altura >= 300) {
        printf("O animal é um elefante!\n");
    } else if (temPelos == 's' && ehMamifero == 's') {
        if (altura == 150) {
            printf("O animal é um cavalo!\n");
        } else if (altura <= 100) {
            printf("O animal é um cachorro!\n");
        } else {
            printf("Não foi possível classificar o animal!\n");
        }
    } else if (temPelos == 'n' && ehMamifero == 'n') {
        printf("O animal é uma serpente!\n");
    } else if (ehMamifero == 's' && temPelos == 'n') {
        printf("O animal é uma tartaruga!\n");
    } else {
        printf("Não foi possível classificar o animal!\n");
    }

    return 0;
}
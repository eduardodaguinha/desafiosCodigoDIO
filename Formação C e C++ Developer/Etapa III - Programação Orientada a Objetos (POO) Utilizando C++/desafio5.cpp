/*
Desafio 5: Descubra a carta

Nesse desafio, você deverá criar um programa que permita ao usuário escolher o valor e o naipe de uma carta de baralho e exibir a carta escolhida.

Para isso, será necessário criar uma classe chamada Carta, que possua dois atributos: naipe e valor. Os valores de naipe e valor devem ser definidos como enumerações, para facilitar a escolha do usuário.

Como observação, os valores do enum Valor são:
- Ás = 1
- Valete = 2
- Dama = 3
- Rei = 4

Já os valores do enum Naipe são:
- Paus = 0
- Ouros = 1
- Copas = 2
- Espadas = 3

O programa deve permitir que o usuário escolha o valor e o naipe da carta, e em seguida criar uma instância da classe Carta com os valores escolhidos. Por fim, o programa deve exibir a carta escolhida, mostrando tanto o valor quanto o naipe da carta.

Requisitos:
- Utilizar a classe "Carta" que possui dois atributos: "naipe" e "valor", ambos definidos como enums.
- Utilizar switch case para tratar exceções ao escolher o naipe e o valor da carta.
- O programa deve permitir que o usuário escolha o naipe e o valor da carta.
- O programa deve exibir a carta escolhida pelo usuário.

Entrada:
A entrada deve receber duas informações, referentes ao valor e ao naipe, conforme exemplo abaixo:
- valor: Enum representando o valor da carta;
- naipe: Enum representando o naipe da carta.

Saída:
O código deverá retornar uma mensagem (string) informando qual o valor da carta e seu naipe, após receber como entrada os Enums valor e naipe. Veja as entradas recebidas abaixo:

3
2

De acordo com esses valores de entrada, a saída ficará desta maneira:

Carta escolhida: Dama de Copas
*/

#include <iostream>
#include <string>

using namespace std;

enum Naipe {
    Paus = 0, Ouros = 1, Copas = 2, Espadas = 3
};

enum Valor {
    As = 1, Valete = 2, Dama = 3, Rei = 4
};

class Carta {
private:
    Naipe naipe;
    Valor valor;

public:
    Carta(Naipe n, Valor v) : naipe(n), valor(v) {}

    Naipe getNaipe() const {
        return naipe;
    }

    Valor getValor() const {
        return valor;
    }

    string toString() const {
        string valorStr;
        string naipeStr;

        switch (valor) {
            case As: valorStr = "Ás"; break;
            case Valete: valorStr = "Valete"; break;
            case Dama: valorStr = "Dama"; break;
            case Rei: valorStr = "Rei"; break;
            default: valorStr = "Valor Inválido"; break;
        }

        switch (naipe) {
            case Paus: naipeStr = "Paus"; break;
            case Ouros: naipeStr = "Ouros"; break;
            case Copas: naipeStr = "Copas"; break;
            case Espadas: naipeStr = "Espadas"; break;
            default: naipeStr = "Naipe Inválido"; break;
        }

        return "Carta escolhida: " + valorStr + " de " + naipeStr;
    }
};

int main() {
    int valorEscolhido, naipeEscolhido;

    cin >> valorEscolhido;
    cin >> naipeEscolhido;

    // Criação da carta escolhida pelo usuário usando "static_cast" para converter as escolhas.
    Carta cartaEscolhida(static_cast<Naipe>(naipeEscolhido), static_cast<Valor>(valorEscolhido));

    // Impressão da saída.
    cout << cartaEscolhida.toString() << endl;

    return 0;
}
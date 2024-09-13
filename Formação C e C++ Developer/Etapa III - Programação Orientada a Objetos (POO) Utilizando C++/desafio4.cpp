/*
Desafio 4: Construindo um exército de robôs

Você é um inventor de robôs excêntrico e engraçado, que decidiu criar seu próprio exército de robôs para ajudá-lo em suas tarefas diárias. Para isso, você precisa desenvolver uma classe Robô que permita que cada um dos seus robôs tenha características únicas. Crie seu próprio robô personalizado, escolhendo seu nome, modelo e ano de fabricação, e veja seu exército de robôs engraçados tomar forma diante dos seus olhos!

Você precisa criar uma classe Robo que possua um construtor que inicialize a classe com as características do robô (nome, modelo e ano de fabricação). Além disso, você precisa implementar métodos para exibir as características do robô.

Escreva uma classe Robo, que possua os seguintes atributos e métodos:
- Três atributos: nome, modelo e ano de fabricação;
- Construtor: deverá inicializar a classe com o nome, modelo e ano de fabricação;
- Método chamado exibirInformacoes: que não receba parâmetros e exiba na tela as características do robô.

Seu programa deve solicitar ao usuário o nome, modelo e ano de fabricação do robô e criar um objeto Robo com essas informações. Em seguida, deve chamar o método exibirInformacoes para exibir as características do robô.

Entrada:
A entrada deverá receber os atributos do robô, conforme exemplo abaixo:
- nome: referente ao nome do robô (string).
- modelo: referente ao modelo do robô (string).
- ano: referente ao ano da criação do robô (int).

Importante: A entrada deverá seguir a ordem informada acima.

Saída:
O código deverá retornar uma mensagem (string) informando o nome, modelo e ano do robô criado, de acordo com o que foi recebido como entrada. Veja como exemplo a entrada recebida abaixo:

DioBot
DIO
2020

De acordo com esses valores de entrada, a saída ficará desta maneira:

O robô DioBot, modelo DIO, foi fabricado em 2020.
*/

#include <iostream>
#include <string>

using namespace std;

class Robo {
  private:
    string nome;
    string modelo;
    int anoFabricacao;
  
  public:
    // Construtor da classe Robo
    Robo(string nome, string modelo, int anoFabricacao) {
        this->nome = nome;
        this->modelo = modelo;
        this->anoFabricacao = anoFabricacao;
    }

    // Método para exibir as informações do robô
    void exibirInformacoes() {
        cout << "O robô " << nome << ", modelo " << modelo << ", foi fabricado em " << anoFabricacao << "." << endl;
    }
};

int main() {
    string nome, modelo;
    int ano;
  
    // Leitura das entradas
    getline(cin, nome);
    getline(cin, modelo);
    cin >> ano;
  
    // Criação do objeto Robo com os valores lidos
    Robo robo(nome, modelo, ano);
  
    // Chamada do método para exibir as informações do robô
    robo.exibirInformacoes();
  
    return 0;
}
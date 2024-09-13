/*
Desafio 1: Primeiro desafio com POO

Você acabou de aprender Programação Orientada a Objetos (POO) e foi desafiado a criar o seu primeiro projeto. Neste código, você deve criar uma classe chamada Pessoa com dois atributos: nome e idade. Em seguida, deve implementar dois métodos para obter esses atributos: getNome() e getIdade(). Por fim, deve criar um objeto do tipo Pessoa e exibir na tela o nome e a idade usando os métodos criados.

Requisitos:
- Utilizar classes e métodos para implementar o programa;
- Implementar a classe Pessoa com os atributos nome e idade, e o método get para cada atributo;
- O programa deve solicitar que o usuário insira o nome e a idade da pessoa;
- O programa deve exibir o nome e a idade da pessoa inserida pelo usuário.

Entrada:
A entrada deverá receber as informações do objeto Pessoa, conforme exemplo abaixo:
- nome (string)
- idade (int)

Saída:
O código deverá retornar uma mensagem (string) informando o nome e a idade da pessoa, de acordo com o que foi recebido como entrada. Veja como exemplo a entrada recebida abaixo:

João
26

De acordo com esses valores de entrada, a saída ficará desta maneira:

Nome: João, Idade: 26
*/

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
  private: 
    string nome;
    int idade;

  public: 
    Pessoa(string n, int i) {
        nome = n;
        idade = i;
    }

    string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }
};

int main() {
    string nome;
    int idade;

    // Solicita ao usuário a entrada do nome e idade
    cin >> nome;
    cin >> idade;

    // Cria uma instância de Pessoa com os dados de entrada
    Pessoa pessoa(nome, idade);

    // Imprime a saída de acordo com o enunciado
    cout << "Nome: " << pessoa.getNome() << ", Idade: " << pessoa.getIdade() << endl;

    return 0;
}
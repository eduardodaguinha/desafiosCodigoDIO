/*
Desafio 3: Informações de produtos de loja virtual

Você foi contratado para criar um sistema de informações de produtos para uma loja virtual. O sistema deve ser capaz de gerenciar dois tipos de produtos: eletrônicos e vestuário. Os produtos eletrônicos possuem uma garantia em meses, enquanto os produtos de vestuário possuem um tamanho (P, M ou G). Sua tarefa é desenvolver um programa em C++ utilizando os conceitos de Orientação a Objetos, encapsulamento e polimorfismo para exibir as informações de cada produto. Crie as seguintes classes:

Classe Produto com as seguintes propriedades e método:
- nome: uma string que representa o nome do produto;
- informacoes(): um método virtual puro que retorna uma string com informações do produto.

Classe Eletronico, que herda de Produto, com a seguinte propriedade adicional:
- garantia: um inteiro que representa a garantia do produto em meses.

Classe Vestuario, que herda de Produto, com a seguinte propriedade adicional:
- tamanho: uma string que representa o tamanho do produto (P, M ou G).

O método informacoes() deve ser sobrescrito nas classes derivadas (Eletronico e Vestuario) para exibir as informações específicas de cada tipo de produto.

Entrada
A entrada consiste em duas linhas:
- A primeira linha contém uma string que representa o nome do produto;
- A segunda linha contém uma string que representa o tipo de produto ("E" para eletrônico ou "V" para vestuário), seguida por um espaço e as informações adicionais específicas de cada tipo (um inteiro G (1 ≤ G ≤ 60) para garantia em meses de produtos eletrônicos ou uma string T (P, M ou G) para o tamanho de produtos de vestuário).

Saída
A saída deve apresentar a string retornada pelo método informacoes() do produto. A string retornada seguirá o seguinte padrão:
- Para produtos eletrônicos: "[nome], garantia: [garantia] meses"
- Para produtos de vestuário: "[nome], tamanho: [tamanho]"

Onde [nome], [garantia] e [tamanho] são substituídos pelas informações do produto específico.

Veja como exemplo as entradas recebidas abaixo:

Celular
E 24

Camisa
V M

De acordo com esses valores de entrada, as saídas ficarão desta maneira:

Celular, garantia: 24 meses
Camisa, tamanho: M
*/

#include <iostream>
#include <string>

// Classe base Produto
class Produto {
protected:
    std::string nome;

public:
    Produto(std::string n) : nome(n) {}

    virtual std::string informacoes() const = 0; // Método virtual puro
};

// Classe derivada Eletronico
class Eletronico : public Produto {
    int garantia;

public:
    Eletronico(std::string n, int g) : Produto(n), garantia(g) {}

    std::string informacoes() const override {
        return nome + ", garantia: " + std::to_string(garantia) + " meses";
    }
};

// Classe derivada Vestuario
class Vestuario : public Produto {
    std::string tamanho;

public:
    Vestuario(std::string n, std::string t) : Produto(n), tamanho(t) {}

    std::string informacoes() const override {
        return nome + ", tamanho: " + tamanho;
    }
};

int main() {
    std::string nome;
    std::getline(std::cin, nome); // Lê o nome do produto

    char tipo;
    std::cin >> tipo; // Lê o tipo do produto

    Produto* produto = nullptr;

    if (tipo == 'E') {
        int garantia;
        std::cin >> garantia; // Lê a garantia para produtos eletrônicos
        produto = new Eletronico(nome, garantia);
    } else if (tipo == 'V') {
        std::string tamanho;
        std::cin >> tamanho; // Lê o tamanho para produtos de vestuário
        produto = new Vestuario(nome, tamanho);
    }

    if (produto) {
        std::cout << produto->informacoes() << std::endl; // Exibe as informações do produto
        delete produto; // Libera a memória alocada
    }

    return 0;
}
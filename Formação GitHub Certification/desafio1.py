"""
Desafio 1: Clonando repositórios

Imagine que você começou um Bootcamp na DIO e precisa clonar localmente os repositórios dos Desafios de Projeto hospedados no GitHub.
Para isso, você vai receber como entrada a URL do repositório e deverá retornar o comando Git necessário para criar uma cópia do repositório na sua máquina.

Entrada:
- A entrada consiste na URL completa do repositório Git, por exemplo: https://github.com/alinealien/desafio-github-markdown.

Saída:
- A saída esperada é o comando Git completo que deve ser utilizado para clonar o repositório fornecido.
"""

# Recebe a URL do repositório como entrada
repository_url = input()

# Escreve o comando Git para clonar o repositório
git_command = "git clone"

# Imprime o comando Git seguido da URL do repositório recebida como entrada
print(git_command, repository_url)
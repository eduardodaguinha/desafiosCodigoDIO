/*
Desafio 3: Detecção de risco de diabetes com IA

Neste desafio, você está desenvolvendo um modelo de Inteligência Artificial para prever se uma pessoa tem risco de desenvolver diabetes. O modelo de Inteligência Artificial será treinado com informações médicas básicas de uma pessoa, como idade, concentração de glicose no sangue e índice de massa corporal (IMC), indicando se ela tem a possibilidade de adquirir diabetes ou não.

As informações médicas a serem lidas são idade, concentração de glicose no sangue e índice de massa corporal (IMC). O programa deve prever se há ou não risco de diabetes com base nessas informações.

Observações importantes para realizar o diagnóstico:

- Considere que uma pessoa com uma concentração de glicose entre 120-125 mg/dl e um IMC acima de 27 é considerada com probabilidade de adquirir diabetes;
- Uma pessoa com concentração de glicose acima de 126 mg/dl é considerada com diabetes;
- Há uma incidência maior após os 40 anos.

Com base nessas informações, implemente as seguintes condições:

- Se a concentração de glicose estiver abaixo de 120 mg/dl, não corre o risco de diabetes. Imprima:
  "Você não corre risco de diabetes."

- Se a concentração de glicose estiver entre 120-125 mg/dl e o IMC acima de 27, a pessoa será considerada com risco de diabetes. Imprima:
  "Você tem uma probabilidade de adquirir diabetes. Procure um médico."

- Se a concentração de glicose estiver em ou acima de 126 mg/dl, a pessoa está com diabetes. Imprima:
  "É altamente recomendável que você procure um médico para avaliação."

- Se a pessoa não correr risco de diabetes, mas estiver acima de 40 anos, imprima:
  "Não tem diabetes. IMPORTANTE: cuide da sua saúde por estar acima dos 40 anos."

Entrada
A entrada deve receber três valores, referentes às informações do usuário:
- idade: Um número inteiro que especifica a idade do usuário;
- concentracaoGlicose: Um número inteiro que mostra a concentração de glicose no sangue;
- imc: O Índice de Massa Corporal (float) do usuário.

Importante: A entrada deverá seguir a ordem informada acima.

Saída
O programa deve retornar um texto (string) informando se há ou não risco de diabetes com base nas informações e condições citadas acima.
*/

#include <stdio.h>

void imprimirDiagnostico(int idade, int concentracaoGlicose, float imc) {
    if (concentracaoGlicose < 120) {
        if (idade > 40) {
            printf("Não tem diabetes. IMPORTANTE: cuide da sua saúde por estar acima dos 40 anos\n");
        } else {
            printf("Você não corre risco de diabetes\n");
        }
    } else if (concentracaoGlicose >= 120 && concentracaoGlicose <= 125) {
        if (imc > 27) {
            printf("Você tem uma probabilidade de adquirir diabetes. Procure um médico\n");
        } else {
            if (idade > 40) {
                printf("Não tem diabetes. IMPORTANTE: cuide da sua saúde por estar acima dos 40 anos\n");
            } else {
                printf("Você não corre risco de diabetes\n");
            }
        }
    } else if (concentracaoGlicose >= 126) {
        printf("É altamente recomendável que você procure um médico para avaliação\n");
    }
}

int main() {
    int idade, concentracaoGlicose;
    float imc;

    scanf("%d", &idade);
    scanf("%d", &concentracaoGlicose);
    scanf("%f", &imc);

    imprimirDiagnostico(idade, concentracaoGlicose, imc);

    return 0;
}
Questão 1: Bem-vindo à Prova de Sintaxe Básica!
Código Avaliado:

#include <stdio.h>

int main()
{
  printf("Bem-vindo à Prova de Sintaxe Básica!\n");
}

Avaliação:

    Correção: ✅ O programa exibe a mensagem corretamente.
    Clareza: ✅ Código simples e direto.
    Boas práticas: ✅ Tudo bem formatado.

Nota: 2/2 pontos.
Questão 2: Maior entre dois números
Código Avaliado:

#include <stdio.h>

int main()
{
  int numero1, numero2, maior;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &numero2);
 
  maior = numero1;

  if (maior <= numero2) {
    maior = numero2;
  }

  printf("O maior número é: %d\n", maior);
}

Avaliação:

    Correção: ✅ O programa identifica corretamente o maior número.
    Clareza: ✅ O código é bem comentado e de fácil leitura.
    Boas práticas: ⚠️ O uso de if poderia ser simplificado para maior legibilidade:

    maior = (numero1 > numero2) ? numero1 : numero2;

Nota: 2/2 pontos.
Questão 3: Dados Pessoais
Código Avaliado:

#include <stdio.h>
#include <string.h>

int main()
{
  char nome[50];
  int idade;
  float salario;

  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';
  
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  
  printf("Digite seu salario: ");
  scanf("%f", &salario);
 
  printf("Olá, %s! Você tem %d anos e recebe R$%.2f\n", nome, idade, salario);
}

Avaliação:

    Correção: ✅ O programa funciona corretamente.
    Clareza: ✅ Bem explicado, com tratamento adequado para o nome.
    Boas práticas: ✅ O uso de fgets e strcspn está correto.

Nota: 3/3 pontos.
Questão 4: Maior e Menor entre Três Números
Código Avaliado:

#include <stdio.h>

int main()
{
  int numero1, numero2, numero3, maior, menor;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &numero2);
  
  printf("Digite o terceiro número: ");
  scanf("%d", &numero3);
 
  maior = menor = numero1;

  if (maior <= numero2) {
    maior = numero2;
  }else if (menor >= numero2) {
    menor = numero2;
  }

  if (maior <= numero3) {
    maior = numero3;
  }else if (menor >= numero3) {
    menor = numero3;
  }

  printf("O maior número é: %d\nO menor numero é: %d\n", maior, menor);
}

Avaliação:

    Correção: ⚠️ Pequeno erro lógico: se o numero2 for menor que o numero1 e numero3, ele pode não ser corretamente identificado como o menor.
    Clareza: ✅ Apesar do problema, o código é fácil de entender.
    Boas práticas: ⚠️ O fluxo de decisões pode ser simplificado. Exemplo:

    if (numero2 > maior) maior = numero2;
    if (numero3 > maior) maior = numero3;
    if (numero2 < menor) menor = numero2;
    if (numero3 < menor) menor = numero3;

Nota: 2/3 pontos.
Questão 5: Números Pares
Código Avaliado:

#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("Números pares entre 0 e %d: ", numero);

  for (int i = 0; i <= numero ; i++) {
    if(i == 0 || i % 2 == 0) {
      if (i == numero) {
        printf("%d", i);
      }
      else if (i + 1 == numero) {
        printf("%d", i);
      }
      else {
        printf("%d, ", i);
      }
    }
  }
  printf("\n");
}

Avaliação:

    Correção: ✅ Funciona, mas o fluxo de formatação (vírgulas) poderia ser simplificado.
    Clareza: ⚠️ A lógica dos ifs internos pode ser difícil de entender. Um método mais direto seria:

    for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
            if (i > 0) printf(", ");
            printf("%d", i);
        }
    }

    Boas práticas: ⚠️ O excesso de verificações poderia ser evitado para maior legibilidade.

Nota: 4/5 pontos.
Questão 6: Repetição de String
Código Avaliado:

#include <stdio.h>
#include <string.h>

int main()
{
  char nome[200];
  int repet, i;

  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';

  printf("Quantas vezes deseja exibi-lo? ");
  scanf("%d", &repet);

  for (int i = 1; i <= repet ; i++) {
    printf("%d.  %s\n", i, nome);
  }
}

Avaliação:

    Correção: ✅ O programa funciona perfeitamente.
    Clareza: ✅ Código bem explicado e formatado.
    Boas práticas: ✅ Não há nada a melhorar aqui.

Nota: 5/5 pontos.
Resumo Final
Questão	Nota
1	2/2
2	2/2
3	3/3
4	2/3
5	4/5
6	5/5

Nota Final: 18/20 pontos



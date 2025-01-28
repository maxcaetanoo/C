# Prova

## Questão 1

```C
#include <stdio.h>

int main()
{
  printf("Bem-vindo à Prova de Sintaxe Básica!\n");
}
```

## Questão 2

```C
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
```

## Questão 3

```C
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
```

## Questão 4

```C
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
```

## Questão 5

```C
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
```

## Questão 6

```C
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
```

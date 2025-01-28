# Respostas

## 1

```C
#include <stdio.h>

int main()
{
  // Efetuando saída de multiplas linhas
  printf("Olá, mundo!\nEstou aprendendo a programar em C.\nVamos começar!\n");

  return 0;
}
```

## 2

```C
#include <stdio.h>

int main()
{
  // Definindo as variáveis que serão usadas para a soma
  int n1, n2;

  // Solicitando o primeiro número
  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  // Solicitando o segundo número
  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  // Efetuando saída final
  printf("A soma é %d\n", n1 + n2);

  return 0;
}
```

## 3

```C
#include <stdio.h>
#include <string.h>

int main()
{
  // Definindo variáveis
  char nome[50];
  int idade;
  float altura;

  // Solicitando nome
  printf("Digite seu nome: ");
  scanf("%s", nome);

  // Solicitando idade
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  
  // Solicitando altura
  printf("Digite sua altura (em metros): ");
  scanf("%f", &altura);

  // Saída final do programa
  printf("Olá %s! Voçê tem %d de idade e sua altura é %.2f metros.\n", nome,
         idade, altura);

  return 0;
}
```

## 4

```C
#include <stdio.h>

int main()
{
  // Definindo variáveis
  float nota1, nota2, nota3, media;

  // Solicitando a nota1
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  // Solicitando a nota2
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  // Solicitando a nota3
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  // Efetuando o processamento das notas
  media = (nota1 + nota2 + nota3) / 3;

  // Saída final do programa
  printf("A media das notas é: %.2f\n", media);

  return 0;
}
```

# Aula 1: Introdução à Programação e Sintaxe Básica em C

Objetivo: Aprender a estrutura básica de um programa em C, como declarar variáveis,
trabalhar com tipos de dados, e realizar entrada e saída de dados.

## 1. Estrutura Básica de um Programa em C

Todo programa em C segue uma estrutura padrão. Veja o exemplo abaixo:

``` C
#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    // Código do programa começa aqui
    printf("Olá, mundo!\n");  // Exibe uma mensagem na tela
    return 0;  // Indica que o programa terminou com sucesso
}
```

### Detalhes importantes

* include <stdio.h>: Inclui a biblioteca padrão de entrada e saída.
É essencial para usar funções como printf e scanf.
* int main(): Função principal onde o programa começa.
* { }: Delimitam o bloco de código.
* printf: Função para imprimir texto na tela.
* return 0: Finaliza o programa e retorna um valor para o sistema operacional.

## 2. Variáveis e Tipos de Dados

Variáveis são usadas para armazenar dados.
Em C, você precisa declarar o tipo antes de usar a variável.

|Tipo| Tamanho| Exemplos|
|---| --- | ---|
|int| Inteiro| 10, -5, 0|
|float| Ponto flutuante| 3.14, -0.01|
|char| Caractere| 'A', 'z'|
|double| Precisão alta| 3.141592653589793|

### Exemplo

``` C
#include <stdio.h>

int main() {
    int idade = 25;        // Inteiro
    float altura = 1.75;   // Ponto flutuante
    char inicial = 'A';    // Caractere
    
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);
    
    return 0;
}
```

**Saída esperada:**

Idade: 25

Altura: 1.75

Inicial: A

## 3. Entrada e Saída de Dados

  > printf: Para exibir dados na tela.
    scanf: Para capturar dados do usuário.

**Exemplo:**

``` C
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);  // Lê um número inteiro do usuário
    
    printf("Você digitou: %d\n", numero);
    return 0;
}
```

### Passos

  > O programa solicita um número ao usuário.
    O valor digitado é armazenado na variável numero.
    O programa exibe o valor digitado.

### Tarefa Prática para Hoje

  > Crie um programa que exiba a seguinte mensagem: "Bem-vindo ao estudo de C!"
    Faça um programa que solicite o nome e a idade do usuário e
  exiba uma mensagem personalizada, como: "Olá, [nome], você tem [idade] anos!"

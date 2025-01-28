# Aula 5: Controle de Fluxo em C - Condicionais e Laços de Repetição

---

* 1 Estruturas Condicionais

As estruturas condicionais permitem executar diferentes blocos de código com
base em condições.

---

* 1.1. `if` e `else`
O `if` verifica se uma condição é verdadeira. O `else` pode ser usado para
executar um código alternativo quando a condição for falsa.

  * Exemplo:

```c
#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;
}
```

---

* 1.2. if aninhado

Podemos usar múltiplos if para testar várias condições.

* Exemplo:

```C
#include <stdio.h>

int main() {
    int nota;
    printf("Digite sua nota (0-100): ");
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Conceito A.\n");
    } else if (nota >= 70) {
        printf("Conceito B.\n");
    } else if (nota >= 50) {
        printf("Conceito C.\n");
    } else {
        printf("Conceito D.\n");
    }

    return 0;
}
```

---

* 1.3. switch

O switch é usado para testar um valor específico entre várias opções.

* Exemplo:

```C
#include <stdio.h>

int main() {
    int opcao;
    printf("Escolha uma opção (1-3): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu a opção * 1.\n");
            break;
        case 2:
            printf("Você escolheu a opção * 2.\n");
            break;
        case 3:
            printf("Você escolheu a opção * 3.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
```

---

* 2 Laços de Repetição

Os laços de repetição permitem executar um bloco de código várias vezes.

---

* 2.1. for

O for é usado quando sabemos o número exato de repetições.

* Sintaxe básica:

```C
for (inicialização; condição; incremento) {
    // Código a ser repetido
}

 * Exemplo:

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Contando: %d\n", i);
    }

    return 0;
}

```

---

* 2.2. while

O while é usado quando não sabemos o número exato de repetições,
mas sabemos a condição para parar.

* Exemplo:

```C
#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 5) {
        printf("Contando: %d\n", contador);
        contador++;
    }

    return 0;
}

```

---

* 2.3. do-while

O do-while executa o bloco pelo menos uma vez antes de verificar a condição.

* Exemplo:

```C
#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    printf("Você digitou: %d\n", numero);

    return 0;
}
```

---

* 3 Resumo

    Use if-else para decisões baseadas em condições.
    Use switch para comparar uma variável com valores fixos.
    Para repetições:

        Use for quando souber quantas vezes repetir.
        Use while para repetir enquanto uma condição for verdadeira.
        Use do-while quando precisar executar o bloco ao menos uma vez.

---

* 4 Tarefas

    Crie um programa que peça ao usuário um número e informe se ele é par ou ímpar.
    Escreva um programa que use um laço for para exibir todos os números de 1 a 10.
    Faça um programa que peça uma senha ao usuário e continue pedindo até
    que ele digite a senha correta (use do-while).

    Escreva um programa que use switch para calcular a área de figuras
    geométricas (quadrado, retângulo e triângulo) com base na opção
    escolhida pelo usuário.

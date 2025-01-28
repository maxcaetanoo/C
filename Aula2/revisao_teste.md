# Revisão

## Questão 1: Par ou Ímpar

### Código Avaliado:

```C
#include <stdio.h>

int main()
{
  int num;

  // solicitando que o número seja digitado para a operação
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  // processamento do valor para identificar o par ou ímpar
  if (num % 2 == 0) {
    printf("O número %d é par.\n", num);
  } else {
    printf("O número %d é ímpar.\n", num);
  }

  return 0;
}
```

* Avaliação:

    Correção: ✅ O programa identifica corretamente se o número é par ou ímpar.
    Clareza: ✅ ### Código claro, com comentários explicando cada etapa.
    Boas práticas: ✅ Organização impecável e uso correto da lógica condicional.

Nota: 2/2 pontos.

## Questão 2: Tabuada

### Código Avaliado:

```C
#include <stdio.h>

int main()
{
  int num;

  // solicitando valor de entrada
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  // efetuando processamento
  for (int i = 1; i <= 10; i++) {
    printf("%d X %d = %d\n", num, i, num*i);
  }

  return 0;
}
```

* Avaliação:

    Correção: ✅ Exibe a tabuada de 1 a 10 corretamente.
    Clareza: ✅ ### Código simples e bem explicado.
    Boas práticas: ✅ A estrutura do laço for é adequada e fácil de entender.

Nota: 3/3 pontos.

## Questão 3: Contagem com Condição

### Código Avaliado:

```C
#include <stdio.h>

int main()
{
  int num;

  // solicitando o valor da variavel num
  printf("Digite um número: ");
  scanf("%d", &num);

  // processamento
  for (int i = 1; i <= num; i++) {
    // se i não for divizivel por 3 então não é multiplo de 3
    if (i % 3 != 0) {
      // se não for o ultimo valor a aparecer tem virgula no fim
      if ( (i + 1) == num && (i + 1) % 3 == 0 || i == num) {
        printf("%d\n", i);
      } else if ( i != num) {
        printf("%d, ", i);
      }
    }
  }
  return 0;
}
```

* Avaliação:

    Correção: ✅ O programa exclui os múltiplos de 3 corretamente.
    Clareza: ⚠️ A lógica para formatar com vírgulas pode ser simplificada.
    Boas práticas: ⚠️ Poderia ser mais legível eliminando algumas condições complexas. Exemplo:

  ```C
  for (int i = 1; i <= num; i++) {
        if (i % 3 != 0) {
            printf("%d", i);
            if (i != num - 1 && i != num) printf(", ");
        }
    }
  ```

Nota: 4/5 pontos.

## Questão 4: Verificação de Senha

### Código Avaliado:

```C
#include <stdio.h>

int main()
{
  int pass;
  int passwd = 123456;
  int count = 0;

  do {
    count++;

    // recebendo senha digitada pelo usuário
    printf("Digite a senha de 6 digitos: ");
    scanf("%d", &pass);

    // processamento da senha
    if (pass == passwd) {
      printf("Acesso permitido.\n");
      break;
    } else if (count < 3){
      printf("Senha incorreta, Tente novamente.\n");
    } else {
      printf("Senha incorreta, limite de 3 tentativas atingido.\nEncerrando...\n");
    }
  } while (count < 3);

  return 0;
}
```

* Avaliação:

    Correção: ✅ O programa controla as tentativas e permite acesso corretamente.
    Clareza: ✅ Bem explicado, com a lógica da repetição clara.
    Boas práticas: ✅ Uso eficiente do do-while para garantir a interação inicial.

Nota: 5/5 pontos.

## Questão 5: Menu de Operações

### Código Avaliado:

```C
#include <stdio.h>

int main()
{
  int opt, sair, num1, num2;
  sair = 0;

  // loop infinito
  do {
    // exibindo as opções
    printf("Escolha uma opção:\n");
    printf("1. Somar dois números\n");
    printf("2. Subtrair dois números\n");
    printf("3. Multiplicar dois números\n");
    printf("4. Dividir dois números\n");
    printf("5. Sair\n");

    // aguardando seleção
    scanf("%d", &opt);

    if (opt != 5) {
      printf("Digite o primeiro número: ");
      scanf("%d", &num1);
      printf("Digite o segundo número: ");
      scanf("%d", &num2);
    }

    // processamento da seleção
    switch (opt) {
      case 1:
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
      case 2:
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
      case 3:
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
      case 4:
        if (num2 != 0) {
          printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        } else {
          printf("Erro: Divisão por zero.\n");
        }
        break;
      case 5:
        printf("Saindo...\n");
        sair=1;
        break;
      default:
        printf("Opção inválida, Tente novamente.\n");
    }
  } while (sair != 1);

  return 0;
}
```

* Avaliação:

    Correção: ✅ O programa realiza as operações corretamente e controla a saída.
    Clareza: ✅ Bem organizado, com menus claros e opções bem definidas.
    Boas práticas: ⚠️ Poderia tratar a divisão por zero diretamente no menu para evitar erros.

Nota: 4/5 pontos.

